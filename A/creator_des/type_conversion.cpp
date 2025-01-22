//Примеры преобразования типов:

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void display() { std::cout << "Derived class" << std::endl; }
};

void func(Base* b) {
    Derived* d = dynamic_cast<Derived*>(b); // Преобразование типов
    if (d) {
        d->display(); // Безопасное использование
    } else {
        std::cout << "Не удалось преобразовать тип." << std::endl;
    }
}

void example() {
    Base* basePtr = new Derived(); // Явное преобразование
    func(basePtr); // Передача базового указателя
    delete basePtr; // Освобождение памяти
}