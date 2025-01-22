#include <iostream>
#include <string>

// sinf Box
template <typename T>
class Box {
public:
    T value;

    // Конструктор
    Box(T v) : value(v) {}

    // qiymatni chiqaruvchi metod
    void display() {
        std::cout << "Qiymat: " << value << std::endl;
    }
};

int main() {
    Box<int> intBox(10);      // Box ni int uchun yartamiz
    Box<double> doubleBox(5.5); // double uchun box
    Box<std::string> strBox("Salom"); // string uchun box

    intBox.display();         // : qiymat: 10
    doubleBox.display();      // : qiymat: 5.5
    strBox.display();         // : qiymat: Hello

    return 0;
}

////////

#include <iostream>

// Int turi uchun Box sinf shablonining ixtisoslashuvi
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
    Box<int> intBox(42); //  Box <int> uchun yaratamiz
    intBox.display();     //  Integer: 42 chiqadi

    return 0;
}

//////

#include <iostream>

// Box uchun asosiy shablon
template <typename T, typename U>
class Box {
public:
    T first;
    U second;

    Box(T f, U s) : first(f), second(s) {}

    void display() {
        std::cout << "Birinchi: " << first << ", Ikkinchi: " << second << std::endl;
    }
};

// Ikkinchi turi int bo'lgan Box uchun qisman ixtisoslashuv
template <typename T>
class Box<T, int> {
public:
    T first;
    int second;

    Box(T f, int s) : first(f), second(s) {}

    void display() {
        std::cout << "Birinchi: " << first << ", Ikkinchi (int): " << second << std::endl;
    }
};

int main() {
    Box<double, std::string> box1(3.14, "Pi");
    Box<std::string, int> box2("Age", 30);

    box1.display(); // Chiqadi: Birinchi: 3.14, Ikkinchi: Pi
    box2.display(); // Вывод: Birinchi: Age, Ikkinchi (int): 30

    return 0;
}

/////
