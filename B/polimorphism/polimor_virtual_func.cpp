#include <iostream>
using namespace std;

// Oddi sinf
class Animal {
public:
    virtual void speak() { //virtual funksiya
        cout << "Hayvon tovushlari" << endl;
    }
};

// Meros oluvchi sinf
class Dog : public Animal {
public:
    void speak() override { // virtual funksiya ni qayta aniqlanishi
        cout << "Kuchuk gav gav gov." << endl;
    }
};

// boshqa meros oluvchi sinf
class Cat : public Animal {
public:
    void speak() override { // virtual funksiya ni qayta aniqlanishi
        cout << "Mushuk myaov." << endl;
    }
};

// oddiy sinfga ko'rsatgich qabul qiluvchi funksiya
void makeAnimalSpeak(Animal* animal) {
    animal->speak(); // virtual funksiya ni chaqirish
}

int main() {
    Dog dog;
    Cat cat;

    makeAnimalSpeak(&dog); // chiqarib beradi:  Kuchuk gav gav gov.
    makeAnimalSpeak(&cat); // chiqarib beradi: Mushuk myaov.

    return 0;
}