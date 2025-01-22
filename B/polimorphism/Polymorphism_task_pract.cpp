
#include <iostream>
using namespace std;

//virtual
// Базовый класс
class Animal {
public:
    // Виртуальная функция для звука
    virtual void sound() {
        cout << "Некоторый общий звук животного" << endl;
    }
};

// Производный класс: Собака
class Dog : public Animal {
public:
    void sound() override { // Переопределение функции базового класса
        cout << "Гав" << endl;
    }
};

// Производный класс: Кошка
class Cat : public Animal {
public:
    void sound() override { // Переопределение функции базового класса
        cout << "Мяу" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog(); // Вверхнее приведение
    Animal* animal2 = new Cat(); // Вверхнее приведение

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
        cout << "Целое число: " << i << endl;
    }

    void show(double d) {
        cout << "Дробное число: " << d << endl;
    }

    void show(string s) {
        cout << "Строка: " << s << endl;
    }
};

int main() {
    Print print;
    print.show(5);        // Вызывает show(int)
    print.show(5.5);      // Вызывает show(double)
    print.show("Привет");  // Вызывает show(string)

    return 0;
}