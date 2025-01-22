#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Константный метод для получения координат
    void getCoordinates() const {
        std::cout << "X: " << x << ", Y: " << y << std::endl;
    }
};

int main() {
    Point p(10, 20);
    p.getCoordinates(); // Вывод: X: 10, Y: 20
    return 0;
}

//trying to edit const

#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Константный метод, который пытается изменить состояние
    void setRadius(double r) const {
        // radius = r; // Ошибка компиляции: нельзя изменять нестатические члены в const методах
    }
};

int main() {
    Circle c(5.0);
    c.setRadius(10.0); // Попытка изменить радиус вызовет ошибку
    return 0;
}