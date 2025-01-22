#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double averageGrade;

public:
    void setName(const std::string& name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setAverageGrade(double grade) {
        this->averageGrade = grade;
    }

    std::string getInfo() const {
        return "Name: " + name + ", Age: " + std::to_string(age) + ", Average Grade: " + std::to_string(averageGrade);
    }
};

int main() {
    Student student;
    std::string name;
    int age;
    double averageGrade;

    std::cout << "Enter student's name: ";
    std::getline(std::cin, name);
    student.setName(name);

    std::cout << "Enter student's age: ";
    std::cin >> age;
    student.setAge(age);

    std::cout << "Enter student's average grade: ";
    std::cin >> averageGrade;
    student.setAverageGrade(averageGrade);

    std::cout << student.getInfo() << std::endl;

    return 0;
}

///////////////
#include <iostream>

class Vehicle {
public:
    virtual double getSpeed() const = 0; // Чисто виртуальный метод
};

class Car : public Vehicle {
private:
    double speed;

public:
    Car(double speed) : speed(speed) {}

    double getSpeed() const override {
        return speed;
    }
};

class Bicycle : public Vehicle {
public:
    double getSpeed(double distance, double time) const {
        if (time == 0) {
            std::cerr << "Time cannot be zero." << std::endl;
            return 0;
        }
        return distance / time; // скорость = расстояние / время
    }
};

int main() {
    double carSpeed;
    std::cout << "Enter the speed of the car: ";
    std::cin >> carSpeed;
    Car myCar(carSpeed);
    std::cout << "Car speed: " << myCar.getSpeed() << " km/h" << std::endl;

    double distance, time;
    std::cout << "Enter the distance traveled by bicycle (km): ";
    std::cin >> distance;
    std::cout << "Enter the time taken (hours): ";
    std::cin >> time;

    Bicycle myBicycle;
    std::cout << "Bicycle speed: " << myBicycle.getSpeed(distance, time) << " km/h" << std::endl;

    return 0;
}