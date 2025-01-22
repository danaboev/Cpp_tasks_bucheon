#include <iostream>
#include <string>

//Oddiy sinf Odam-Person
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    void displayInfo() const {
        std::cout << "Ism: " << name << ", Yosh: " << age << std::endl;
    }
};

// Meros Olingan sinf student
class Student : public Person {
private:
    std::string major; // Yo'nalish

public:
    Student(const std::string& name, int age, const std::string& major)
        : Person(name, age), major(major) {}

    void displayInfo() const {
        Person::displayInfo(); // Oddiy klasni chaqirish metodi
        std::cout << "Yo'naslish: " << major << std::endl;
    }
};

// Meros Olingan sinf Ishchi
class Employee : public Person {
private:
    std::string position; // Lavozim

public:
    Employee(const std::string& name, int age, const std::string& position)
        : Person(name, age), position(position) {}

    void displayInfo() const {
        Person::displayInfo(); // Oddiy klasni chaqirish metodi
        std::cout << "Lavozim: " << position << std::endl;
    }
};

int main() {
    Student student("Ali", 20, "Dasturlash");
    Employee employee("Osiyo", 30, "Dasturchi");

    std::cout << "Talab haqida ma'lumot:" << std::endl;
    student.displayInfo();

    std::cout << "\nIshchi haqida ma'lumot:" << std::endl;
    employee.displayInfo();

    return 0;
}