#include <iostream>

class Counter {
public:
    static int count; // Статическая переменная

    Counter() {
        count++; // Увеличение счетчика при создании объекта
    }
};

// Инициализация статической переменной
int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;

    std::cout << "Количество объектов: " << Counter::count << std::endl; // Вывод: 3
    return 0;
}

//method

#include <iostream>

class Math {
public:
    static int square(int x) { // Статический метод
        return x * x;
    }
};

int main() {
    int value = 5;
    std::cout << "Квадрат " << value << " равен " << Math::square(value) << std::endl; // Вывод: 25
    return 0;
}