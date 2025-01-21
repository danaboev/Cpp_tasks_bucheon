#include <iostream>
using namespace std;

// Базовый класс
class Animal {
public:
    virtual void speak() { // Виртуальная функция
        cout << "Animal speaks." << endl;
    }
};

// Производный класс
class Dog : public Animal {
public:
    void speak() override { // Переопределение виртуальной функции
        cout << "Dog barks." << endl;
    }
};

// Другой производный класс
class Cat : public Animal {
public:
    void speak() override { // Переопределение виртуальной функции
        cout << "Cat meows." << endl;
    }
};

// Функция, принимающая указатель на базовый класс
void makeAnimalSpeak(Animal* animal) {
    animal->speak(); // Вызов виртуальной функции
}

int main() {
    Dog dog;
    Cat cat;

    makeAnimalSpeak(&dog); // Вывод: Dog barks.
    makeAnimalSpeak(&cat); // Вывод: Cat meows.

    return 0;
}