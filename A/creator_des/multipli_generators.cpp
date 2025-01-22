//Примеры кода с несколькими генераторами:
class Product {
public:
    virtual void use() = 0;
};

class ConcreteProductA : public Product {
public:
    void use() override {
        std::cout << "Используется продукт A." << std::endl;
    }
};

class ConcreteProductB : public Product {
public:
    void use() override {
        std::cout << "Используется продукт B." << std::endl;
    }
};

class AbstractCreator {
public:
    virtual Product* createProduct() = 0;
};

class CreatorA : public AbstractCreator {
public:
    Product* createProduct() override {
        return new ConcreteProductA();
    }
};

class CreatorB : public AbstractCreator {
public:
    Product* createProduct() override {
        return new ConcreteProductB();
    }
};

void clientCode(AbstractCreator& creator) {
    Product* product = creator.createProduct();
    product->use();
    delete product; // Уничтожение объекта
}

// Пример использования
CreatorA creatorA;
clientCode(creatorA); // Использует продукт A

CreatorB creatorB;
clientCode(creatorB); // Использует продукт B