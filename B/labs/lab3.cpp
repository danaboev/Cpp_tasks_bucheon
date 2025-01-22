#include <iostream>
#include <string>

class Group {
private:
    std::string groupName;
    int groupNumber;

public:
    Group(const std::string& name, int number) : groupName(name), groupNumber(number) {}

    void showInfo() const {
        std::cout << "Group Name: " << groupName << ", Group Number: " << groupNumber << std::endl;
    }
};

class Student1 : public Group {
private:
    std::string name;
    int age;

public:
    Student1(const std::string& groupName, int groupNumber, const std::string& studentName, int studentAge)
        : Group(groupName, groupNumber), name(studentName), age(studentAge) {}

    void showInfo() const {
        Group::showInfo();
        std::cout << "Student 1: " << name << ", Age: " << age << std::endl;
    }
};

class Student2 : public Group {
private:
    std::string name;
    int age;

public:
    Student2(const std::string& groupName, int groupNumber, const std::string& studentName, int studentAge)
        : Group(groupName, groupNumber), name(studentName), age(studentAge) {}

    void showInfo() const {
        Group::showInfo();
        std::cout << "Student 2: " << name << ", Age: " << age << std::endl;
    }
};
/*
int main() {
    std::string groupName, studentName1, studentName2;
    int groupNumber, studentAge1, studentAge2;

    std::cout << "Enter group name: ";
    std::getline(std::cin, groupName);
    std::cout << "Enter group number: ";
    std::cin >> groupNumber;

    std::cin.ignore(); // Clear the input buffer

    std::cout << "Enter name of student 1: ";
    std::getline(std::cin, studentName1);
    std::cout << "Enter age of student 1: ";
    std::cin >> studentAge1;

    std::cin.ignore(); // Clear the input buffer

    std::cout << "Enter name of student 2: ";
    std::getline(std::cin, studentName2);
    std::cout << "Enter age of student 2: ";
    std::cin >> studentAge2;

    Student1 student1(groupName, groupNumber, studentName1, studentAge1);
    Student2 student2(groupName, groupNumber, studentName2, studentAge2);

    std::cout << std::endl;
    student1.showInfo();
    student2.showInfo();

    return 0;
}
*/
class Animal {
private:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age) : name(name), age(age) {}

    void showInfo() const {
        std::cout << "Animal Name: " << name << ", Age: " << age << std::endl;
    }
};

class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string& name, int age, const std::string& breed)
        : Animal(name, age), breed(breed) {}

    void showInfo() const {
        Animal::showInfo();
        std::cout << "Dog Breed: " << breed << std::endl;
    }
};

class Cat : public Animal {
private:
    std::string furColor;

public:
    Cat(const std::string& name, int age, const std::string& furColor)
        : Animal(name, age), furColor(furColor) {}

    void showInfo() const {
        Animal::showInfo();
        std::cout << "Cat Fur Color: " << furColor << std::endl;
    }
};

int main() {
    std::string dogName, catName, dogBreed, catFurColor;
    int dogAge, catAge;

    std::cout << "Enter dog's name: ";
    std::getline(std::cin, dogName);
    std::cout << "Enter dog's age: ";
    std::cin >> dogAge;
    std::cin.ignore(); // Clear the input buffer
    std::cout << "Enter dog's breed: ";
    std::getline(std::cin, dogBreed);

    std::cout << "Enter cat's name: ";
    std::getline(std::cin, catName);
    std::cout << "Enter cat's age: ";
    std::cin >> catAge;
    std::cin.ignore(); // Clear the input buffer
    std::cout << "Enter cat's fur color: ";
    std::getline(std::cin, catFurColor);

    Dog dog(dogName, dogAge, dogBreed);
    Cat cat(catName, catAge, catFurColor);

    std::cout << std::endl;
    dog.showInfo();
    cat.showInfo();

    return 0;
}