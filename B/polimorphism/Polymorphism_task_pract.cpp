
#include <iostream>
using namespace std;

//virtual
// Oddiy sinf
class Animal {
public:
    // ovoz uchun virtual funksiya
    virtual void sound() {
        cout << "Umumy bo'lgan ba'zi hayvonlar tovushi" << endl;
    }
};

// Meros oluvchi sinf Kuchuk-dog
class Dog : public Animal {
public:
    void sound() override { // Oddiy sinfni qayta aniqlasnishi
        cout << "gow gow" << endl;
    }
};

// Meros oluvchi sinf mushuk Cat
class Cat : public Animal {
public:
    void sound() override { // Oddiy sinfni qayta aniqlasnishi
        cout << "meaow" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog(); // birinchi misol
    Animal* animal2 = new Cat(); // ikkichi misol

    animal1->sound(); // Вывод: Гав
    animal2->sound(); // Вывод: Мяу

    // Освобождение памяти
    delete animal1;
    delete animal2;

    return 0;
}

//static


#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Butub son: " << i << endl;
    }

    void show(double d) {
        cout << "Bo'lingan son : " << d << endl;
    }

    void show(string s) {
        cout << "Qator: " << s << endl;
    }
};

int main() {
    Print print;
    print.show(5);        //  show(int)chaqiradi
    print.show(5.5);      //  show(double)chaqiradi
    print.show("Salom");  //  show(string) chaqiradi

    return 0;
}