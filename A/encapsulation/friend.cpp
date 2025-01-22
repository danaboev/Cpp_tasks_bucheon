class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Дружественный класс
    friend class BoxPrinter; 
};

class BoxPrinter {
public:
    void printWidth(const Box& box) {
        // Доступ к приватному члену width
        std::cout << "Width of Box: " << box.width << std::endl;
    }
};

int main() {
    Box box(10.5);
    BoxPrinter printer;
    printer.printWidth(box); // Доступ к приватному члену
    return 0;
}