#include <iostream>
#include <string>

class Employee {
private:
    std::string name;     // Скрытое имя
    double salary;        // Скрытая зарплата

public:
    Employee(std::string empName, double empSalary)
        : name(empName), salary(empSalary) {}

    // Метод для увеличения зарплаты
    void raiseSalary(double percentage) {
        if (percentage > 0) {
            salary += salary * percentage / 100;
        }
    }

    // Метод для получения информации о работнике
    void displayInfo() const {
        std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
    }
};

int main() {
    Employee emp("John Doe", 50000);
    emp.displayInfo(); // Вывод: Name: John Doe, Salary: 50000
    emp.raiseSalary(10);
    emp.displayInfo(); // Вывод: Name: John Doe, Salary: 55000
    return 0;
}