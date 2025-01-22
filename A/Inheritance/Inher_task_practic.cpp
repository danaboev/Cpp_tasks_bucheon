#include <iostream>
#include <string>

class Student {
private:
    std::string name; // Имя студента
    int age;         // Возраст студента
    std::string major; // Специальность

public:
    // Конструктор
    Student(const std::string& name, int age, const std::string& major) 
        : name(name), age(age), major(major) {}

    // Метод для отображения информации о студенте
    void displayInfo() const {
        std::cout << "Студент: " << name << "\nВозраст: " << age 
                  << "\nСпециальность: " << major << std::endl;
    }
};

int main() {
    Student student("Иван", 20, "Программирование");
    student.displayInfo();

    return 0;
}