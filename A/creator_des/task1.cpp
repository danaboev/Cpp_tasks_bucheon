/*Задания для практики:
1. Создание класса Creator:
Реализуйте класс Creator, который будет включать чисто виртуальный метод createProduct().
Создайте два производных класса, например CreatorA и CreatorB, которые будут возвращать разные продукты.
Продукты могут быть реализованы как отдельные классы с методом use().

2. Реализация Destroyer:
Напишите класс Destroyer, который будет отвечать за уничтожение объектов, созданных классом Creator.
Убедитесь, что Destroyer корректно освобождает память, вызывая деструкторы объектов.

3. Применение множественных генераторов:
Реализуйте несколько генераторов, которые будут возвращать разные типы объектов (например, ConcreteProductA, ConcreteProductB).
Напишите функцию, которая принимает базовый указатель на продукт и вызывает метод use(), демонстрируя полиморфизм.
Протестируйте код, создавая объекты через разные генераторы и уничтожая их через Destroyer.*/


// Задание 1: Класс Creator
class Product {
public:
    virtual void use() = 0;
    virtual ~Product() {}
};

class Creator {
public:
    virtual Product* createProduct() = 0;
    virtual ~Creator() {}
};

class CreatorA : public Creator {
public:
    Product* createProduct() override {
        return new ConcreteProductA();
    }
};

// Задание 2: Реализация Destroyer
class Destroyer {
public:
    static void destroy(Product* product) {
        delete product; // Освобождение памяти
    }
};

// Задание 3: Применение множественных генераторов
void clientCode(Creator& creator) {
    Product* product = creator.createProduct();
    product->use();
    Destroyer::destroy(product); // Уничтожение объекта
}