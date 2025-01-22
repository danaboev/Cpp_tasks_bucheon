//public
class Employee {
public:
    std::string name; // Доступен из любого места

    void display() {
        std::cout << "Employee Name: " << name << std::endl;
    }
};

int main() {
    Employee emp;
    emp.name = "Alice"; // Доступ к public члену
    emp.display();
    return 0;
}

//private

class BankAccount {
private:
    double balance; // Доступен только внутри класса

public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount; // Изменение состояния через метод
        }
    }

    double getBalance() const {
        return balance; // Доступ к private члену через метод
    }
};

int main() {
    BankAccount account;
    account.deposit(100); // Доступ к public методу
    // account.balance = 200; // Ошибка: balance - private
    std::cout << "Balance: " << account.getBalance() << std::endl;
    return 0;
}

//protected
class Shape {
protected:
    double area; // Доступен в производных классах

public:
    virtual void calculateArea() = 0; // Чисто виртуальный метод
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        area = 3.14 * radius * radius; // Изменение protected члена
    }

    double getArea() const {
        return area; // Доступ к protected члену через метод
    }
};

int main() {
    Circle circle(5);
    circle.calculateArea();
    std::cout << "Area of Circle: " << circle.getArea() << std::endl;
    return 0;
}