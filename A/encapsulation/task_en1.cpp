class Rectangle {
private:
    double width;
    double height;

public:
    void setDimensions(double w, double h) {
        if (w > 0 && h > 0) {
            width = w;
            height = h; // Изменение состояния через метод
        }
    }

    double area() const {
        return width * height; // Доступ к данным через метод
    }
};