#include <iostream>
#include <string>

class Employee {
private:
    std::string name; // Ishchini ismi
    int age;         // Ishchini yoshi
    std::string position; // Lavozim

public:
    // Konstruktor
    Employee(const std::string& name, int age, const std::string& position) 
        : name(name), age(age), position(position) {}

    // Ma'lumotni chiqaruvchi metod
    void displayInfo() const {
        std::cout << "Ishchi: " << name << "\nYosh: " << age 
                  << "\nLavozim: " << position << std::endl;
    }
};

int main() {
    Employee employee("Osiyo", 30, "Dasturchi");
    employee.displayInfo();

    return 0;
}