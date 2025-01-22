#include <iostream>
using namespace std;

// Abstrak sinf
class Shape {
public:
    virtual void draw() = 0; // sof virtual sinf
};

// Meros oluchi sinf
class Circle : public Shape {
public:
    void draw() override { // sof virtual funksiyani yaratislishi
        cout << "Doirani chizish." << endl;
    }
};

// Boshqa meros oluvchi sinf
class Square : public Shape {
public:
    void draw() override { // sof virtual funksiyani yaratislishi
        cout << "Tortburchak chizilishi." << endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shape1 = &circle; // oddiy sinfga ko'rsatgich
    Shape* shape2 = &square;

    shape1->draw(); // Вывод: Doirani chizish.
    shape2->draw(); // Вывод: Tortburchak chizilishi

    return 0;
}