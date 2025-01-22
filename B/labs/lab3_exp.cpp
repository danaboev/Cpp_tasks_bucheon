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
        return "ISM: " + name + ", YOSH: " + std::to_string(age) + ", O'RTACHA BAHO: " + std::to_string(averageGrade);
    }
};

int main() {
    Student student;
    std::string name;
    int age;
    double averageGrade;

    std::cout << "Studentni ismini kiriting: ";
    std::getline(std::cin, name);
    student.setName(name);

    std::cout << "Studentni yosshini kiriting: ";
    std::cin >> age;
    student.setAge(age);

    std::cout << "Srudentni o'rtacha bahosini kiriting: ";
    std::cin >> averageGrade;
    student.setAverageGrade(averageGrade);

    std::cout << student.getInfo() << std::endl;

    return 0;
}

///////////////
#include <iostream>

class Vehicle {
public:
    virtual double getSpeed() const = 0; // sov virtual funksiya
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
        return distance / time; // tezlik = masofa / vaqt
    }
};

int main() {
    double carSpeed;
    std::cout << "Avtomobil tezligini kiriting : ";
    std::cin >> carSpeed;
    Car myCar(carSpeed);
    std::cout << "Avtomobil tezligi: " << myCar.getSpeed() << " km/s" << std::endl;

    double distance, time;
    std::cout << "Velosipedda bosib o'tgan masofangizni kiriting(km): ";
    std::cin >> distance;
    std::cout << "Yo'lga ketgan vaqtingizni kiriting(soatda): ";
    std::cin >> time;

    Bicycle myBicycle;
    std::cout << "Velosiped tezligi: " << myBicycle.getSpeed(distance, time) << " km/s" << std::endl;

    return 0;
}