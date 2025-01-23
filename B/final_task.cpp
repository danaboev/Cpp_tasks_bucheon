#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <exception>

// Qabul qilinmaydigan student uchun baholash uchun istisno
class InvalidGradeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Notog'ri baho!!! Baho 0 dan 100 gacha bo'lishi kerak";
    }
};

// Talaba  uchun sinf
class Student {
protected:
    std::string name; // Talabaning ismi
    int age;          // Talabaning yoshi
    float grade;     // Talabaning bahosi

public:
    // Sinf maydonlarini ishga tushirish uchun konstruktor
    Student(const std::string& name, int age, float grade) : name(name), age(age) {
        // Baholashning maqbulligini tekshirish
        if (grade < 0 || grade > 100) {
            throw InvalidGradeException(); // Agar baholash qabul qilinmasa, biz istisnoni tashlaymiz-ishga tushiramiz
        }
        this->grade = grade;
    }

    // Talaba ma'lumotlarini ko'rsatish uchun virtual funksiya
    virtual void display() const {
        std::cout << "Ims: " << name << ", Yosh: " << age << ", Baho: " << grade << std::endl;
    }

    // Chiqish operatorining qayta tashqari yuklanishi
    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Ism: " << student.name << ", Yosh: " << student.age << ", Baho: " << student.grade;
        return os;
    }
};

// Talabadan meros bo'lib qolgan bitiruvchini tanishtirish uchun sinf  GraduateStudent
class GraduateStudent : public Student {
private:
    std::string thesisTopic; // Diplom mavzusi

public:
    // Asosiy sinf konstruktorini chaqiradigan konstruktor
    GraduateStudent(const std::string& name, int age, float grade, const std::string& thesisTopic)
        : Student(name, age, grade), thesisTopic(thesisTopic) {}

    // Bitiruvchi ma'lumotlarini ko'rsatish uchun qayta aniq qilingan xususiyat-funksiya
    void display() const override {
        Student::display(); // Asosiy sinf usulini chaqirish
        std::cout << "DIPLOM ISH MAVZUSI: " << thesisTopic << std::endl; // Diplom mavzusining chiqarilishi
    }
};

// Talabalar ro'yxatini boshqarish uchun sinf menejeri
class StudentManager {
public:
    // Talabalar ma'lumotlarini kiritish uchun statik usul
    static std::vector<std::unique_ptr<Student>> inputStudents(int count) {
        std::vector<std::unique_ptr<Student>> students; // Talabalarga ko'rsatgichlarni saqlash uchun vektor
        for (int i = 0; i < count; ++i) {
            std::string name, thesisTopic;
            int age;
            float grade;

            // Talaba ma'lumotlarini kiritish
            std::cout << "ISMINGIZNI KIRITING: ";
            std::cin >> name;
            std::cout << "YOSHINGIZNI KIRITING: ";
            std::cin >> age;
            std::cout << "BAHONGIZNI KIRITING: ";
            std::cin >> grade;

            // Har ikkinchi talaba bitiruvchidir
            if (i % 2 == 0) {
                std::cout << "DIPLOM ISH MAVZUSINI KIRITING: ";
                std::cin >> thesisTopic; // Diplom mavzusini kiritish joyi
                students.push_back(std::make_unique<GraduateStudent>(name, age, grade, thesisTopic));
            } else {
                students.push_back(std::make_unique<Student>(name, age, grade)); // Oddiy talaba
            }
        }
        return students; // Talabalar vektorini qaytarish
    }

    // Barcha talabalar haqidagi ma'lumotlarni namoyish qilishning statik usuli
    static void displayStudents(const std::vector<std::unique_ptr<Student>>& students) {
        for (const auto& student : students) {
            student->display(); // Har bir talaba uchun displey usulini chaqirish
        }
    }
};

int main() {
    const int studentCount = 3; // Talabalar soni
    try {
        // Talabalar ma'lumotlarini kiritish va ma'lumotlarni ko'rsatish
        auto students = StudentManager::inputStudents(studentCount);
        StudentManager::displayStudents(students);
    } catch (const InvalidGradeException& e) {
        // Ruxsat etilmagan baholashda istisnolarni qayta ishlash
        std::cerr << e.what() << std::endl;
    }
    return 0;
}