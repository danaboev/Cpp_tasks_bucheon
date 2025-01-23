#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <exception>

// Исключение для недопустимой оценки
class InvalidGradeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid grade! Grade must be between 0 and 100.";
    }
};

// Класс для представления студента
class Student {
protected:
    std::string name; // Имя студента
    int age;          // Возраст студента
    float grade;     // Оценка студента

public:
    // Конструктор для инициализации полей класса
    Student(const std::string& name, int age, float grade) : name(name), age(age) {
        // Проверка на допустимость оценки
        if (grade < 0 || grade > 100) {
            throw InvalidGradeException(); // Выбрасываем исключение, если оценка недопустима
        }
        this->grade = grade;
    }

    // Виртуальная функция для отображения информации о студенте
    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Name: " << student.name << ", Age: " << student.age << ", Grade: " << student.grade;
        return os;
    }
};

// Класс для представления выпускника, наследующий от Student
class GraduateStudent : public Student {
private:
    std::string thesisTopic; // Тема диплома

public:
    // Конструктор, который вызывает конструктор базового класса
    GraduateStudent(const std::string& name, int age, float grade, const std::string& thesisTopic)
        : Student(name, age, grade), thesisTopic(thesisTopic) {}

    // Переопределенная функция для отображения информации о выпускнике
    void display() const override {
        Student::display(); // Вызов метода базового класса
        std::cout << "Thesis Topic: " << thesisTopic << std::endl; // Вывод темы диплома
    }
};

// Класс-менеджер для управления списком студентов
class StudentManager {
public:
    // Статический метод для ввода данных о студентах
    static std::vector<std::unique_ptr<Student>> inputStudents(int count) {
        std::vector<std::unique_ptr<Student>> students; // Вектор для хранения указателей на студентов
        for (int i = 0; i < count; ++i) {
            std::string name, thesisTopic;
            int age;
            float grade;

            // Ввод данных о студенте
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter grade: ";
            std::cin >> grade;

            // Каждый второй студент является выпускником
            if (i % 2 == 0) {
                std::cout << "Enter thesis topic: ";
                std::cin >> thesisTopic; // Ввод темы диплома
                students.push_back(std::make_unique<GraduateStudent>(name, age, grade, thesisTopic));
            } else {
                students.push_back(std::make_unique<Student>(name, age, grade)); // Обычный студент
            }
        }
        return students; // Возвращаем вектор студентов
    }

    // Статический метод для отображения информации о всех студентах
    static void displayStudents(const std::vector<std::unique_ptr<Student>>& students) {
        for (const auto& student : students) {
            student->display(); // Вызов метода отображения для каждого студента
        }
    }
};

int main() {
    const int studentCount = 5; // Количество студентов
    try {
        // Ввод данных о студентах и отображение информации
        auto students = StudentManager::inputStudents(studentCount);
        StudentManager::displayStudents(students);
    } catch (const InvalidGradeException& e) {
        // Обработка исключения при недопустимой оценке
        std::cerr << e.what() << std::endl;
    }
    return 0;
}