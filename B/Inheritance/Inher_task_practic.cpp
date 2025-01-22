#include <iostream>
#include <string>

class Student {
private:
    std::string name; // Student ismi
    int age;         // Student yoshi
    std::string major; // Yo'nalish

public:
    // Konstruktor
    Student(const std::string& name, int age, const std::string& major) 
        : name(name), age(age), major(major) {}

    // Ma'lumotni chiqaruvchi metod
    void displayInfo() const {
        std::cout << "Talaba: " << name << "\nYosh: " << age 
                  << "\nYonalish: " << major << std::endl;
    }
};

int main() {
    Student student("Davron", 20, "Dasturlash");
    student.displayInfo();

    return 0;
}