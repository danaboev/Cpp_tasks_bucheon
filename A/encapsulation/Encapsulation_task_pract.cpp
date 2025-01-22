#include <iostream>
#include <string>

class Employee {
private:
    std::string name; // Имя сотрудника
    int age;         // Возраст сотрудника
    std::string position; // Должность

public:
    // Конструктор
    Employee(const std::string& name, int age, const std::string& position) 
        : name(name), age(age), position(position) {}

    // Метод для отображения информации о сотруднике
    void displayInfo() const {
        std::cout << "Сотрудник: " << name << "\nВозраст: " << age 
                  << "\nДолжность: " << position << std::endl;
    }
};

int main() {
    Employee employee("Мария", 30, "Разработчик");
    employee.displayInfo();

    return 0;
}