class Product {
public:
    virtual ~Product() { /* Освобождение ресурсов */ }
};

class Creator {
public:
    virtual Product* factoryMethod() = 0;
};

class ConcreteCreator : public Creator {
public:
    Product* factoryMethod() override {
        return new ConcreteProduct();
    }
};

void clientCode(Creator& creator) {
    Product* product = creator.factoryMethod();
    // Использование продукта...
    delete product; // Уничтожение объекта, вызов деструктора
}