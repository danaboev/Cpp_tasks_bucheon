#include <iostream>
using namespace std;

// Абстрактный класс
class Shape {
public:
    virtual void draw() = 0; // Чистая виртуальная функция
};

// Производный класс
class Circle : public Shape {
public:
    void draw() override { // Реализация чистой виртуальной функции
        cout << "Drawing a Circle." << endl;
    }
};

// Другой производный класс
class Square : public Shape {
public:
    void draw() override { // Реализация чистой виртуальной функции
        cout << "Drawing a Square." << endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shape1 = &circle; // Указатель на базовый класс
    Shape* shape2 = &square;

    shape1->draw(); // Вывод: Drawing a Circle.
    shape2->draw(); // Вывод: Drawing a Square.

    return 0;
}