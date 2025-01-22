#include <iostream>
#include <string>

// Шаблон класса Box
template <typename T>
class Box {
public:
    T value;

    // Конструктор
    Box(T v) : value(v) {}

    // Метод для отображения значения
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Box<int> intBox(10);      // Создаем Box для int
    Box<double> doubleBox(5.5); // Создаем Box для double
    Box<std::string> strBox("Hello"); // Создаем Box для string

    intBox.display();         // Вывод: Value: 10
    doubleBox.display();      // Вывод: Value: 5.5
    strBox.display();         // Вывод: Value: Hello

    return 0;
}

////////

#include <iostream>

// Специализация шаблона класса Box для типа int
template <>
class Box<int> {
public:
    int value;

    Box(int v) : value(v) {}

    void display() {
        std::cout << "Integer: " << value << std::endl;
    }
};

int main() {
    Box<int> intBox(42); // Создаем Box<int>
    intBox.display();     // Вывод: Integer: 42

    return 0;
}

//////

#include <iostream>

// Основной шаблон для Box
template <typename T, typename U>
class Box {
public:
    T first;
    U second;

    Box(T f, U s) : first(f), second(s) {}

    void display() {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
};

// Частичная специализация для Box, где второй тип - int
template <typename T>
class Box<T, int> {
public:
    T first;
    int second;

    Box(T f, int s) : first(f), second(s) {}

    void display() {
        std::cout << "First: " << first << ", Second (int): " << second << std::endl;
    }
};

int main() {
    Box<double, std::string> box1(3.14, "Pi");
    Box<std::string, int> box2("Age", 30);

    box1.display(); // Вывод: First: 3.14, Second: Pi
    box2.display(); // Вывод: First: Age, Second (int): 30

    return 0;
}

/////
