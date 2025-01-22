#include <iostream>
#include <string>

// Oddiy sinf Odan-Person
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

// Meros olayotgan sinf student
class Student : public Person {
private:
    std::string major; // Yonalish

public:
    Student(const std::string& name, int age, const std::string& major)
        : Person(name, age), major(major) {}

    void displayInfo() const {
        Person::displayInfo(); // Asosiy sinf usulini chaqirish
        std::cout << "Yonalish: " << major << std::endl;
    }
};

// Merosl olayotgan sinf Student - talaba
class Employee : public Person {
private:
    std::string position; // lavozim

public:
    Employee(const std::string& name, int age, const std::string& position)
        : Person(name, age), position(position) {}

    void displayInfo() const {
        Person::displayInfo(); //Asosiy sinf usulini chaqirish
        std::cout << "Lavozim: " << position << std::endl;
    }
};

int main() {
    Student student("Ali", 22, "Dastuerlash");
    Employee employee("Maryam", 35, "dasturchi");

    std::cout << "Talaba haqaida ma'lumot:" << std::endl;
    student.displayInfo();

    std::cout << "\nIshchi haqida malumot:" << std::endl;
    employee.displayInfo();

    return 0;
}