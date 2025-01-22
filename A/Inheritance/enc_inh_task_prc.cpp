#include <iostream>
#include <string>

// Базовый класс - Человек
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    void displayInfo() const {
        std::cout << "Имя: " << name << ", Возраст: " << age << std::endl;
    }
};

// Производный класс - Студент
class Student : public Person {
private:
    std::string major; // Специальность

public:
    Student(const std::string& name, int age, const std::string& major)
        : Person(name, age), major(major) {}

    void displayInfo() const {
        Person::displayInfo(); // Вызов метода базового класса
        std::cout << "Специальность: " << major << std::endl;
    }
};

// Производный класс - Сотрудник
class Employee : public Person {
private:
    std::string position; // Должность

public:
    Employee(const std::string& name, int age, const std::string& position)
        : Person(name, age), position(position) {}

    void displayInfo() const {
        Person::displayInfo(); // Вызов метода базового класса
        std::cout << "Должность: " << position << std::endl;
    }
};

int main() {
    Student student("Иван", 20, "Программирование");
    Employee employee("Мария", 30, "Разработчик");

    std::cout << "Информация о студенте:" << std::endl;
    student.displayInfo();

    std::cout << "\nИнформация о сотруднике:" << std::endl;
    employee.displayInfo();

    return 0;
}