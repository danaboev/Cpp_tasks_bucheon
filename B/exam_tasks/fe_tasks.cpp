class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() {
        return width * height;
    }
    double perimeter() {
        return 2 * (width + height);
    }
    void display() {
        std::cout << "Ширина: " << width << ", Height: " << height << std::endl;
        std::cout << "Площадь: " << area() << std::endl;
        std::cout << "Перимерт: " << perimeter() << std::endl;
    }
};

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
};

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age);
    virtual void display() const;
};

class Student : public Person {
private:
    double grade;

public:
    Student(string name, int age, double grade);
    void display() const override;
};





class Vector {
private:
    double x, y;

public:
    Vector(double x, double y);
    Vector operator+(const Vector& other) const;

    void display() const;
};


template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 first, T2 second);
    void display() const;
};

class BankAccount {
private:
    int accountNumber;
    double balance;
    static double interestRate;

public:
    BankAccount(int accNumber, double initialBalance);
    static void setInterestRate(double rate);
    static double getInterestRate();
};

double BankAccount::interestRate = 0.05;

int main() {
    BankAccount::setInterestRate(0.03);
    cout << "Процентная ставка: " << BankAccount::getInterestRate() << endl;
    return 0;
}


class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() {
        return width * height;
    }
    double perimeter() {
        return 2 * (width + height);
    }
void display() {
        std::cout << "Eni: " << width << ", Balandligi: " << height << std::endl;
        std::cout << "Maydon: " << area() << std::endl;
        std::cout << "Perimetr: " << perimeter() << std::endl;
    }
};

class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }
    double getBalance() const {
        return balance;
    }
};

class Person {
protected:
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age) {}
    virtual void display() const {
        cout << "Ismi: " << name << ", Yosh: " << age << endl;
    }
};
class Student : public Person {
private:
    double grade;
public:
    Student(string name, int age, double grade) : Person(name, age), grade(grade) {}
    void display() const override {
        Person::display();
        cout << "Baho: " << grade << endl;
    }
};

class Vector {
private:
    double x, y;
public:
    Vector(double x, double y) : x(x), y(y) {}
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }
    void display() const {
        cout << "Vektor(" << x << ", " << y << ")" << endl;
    }
};

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}
    void display() const {
        cout << "Birinchi: " << first << ", Ikkinchi: " << second << endl;
    }
};

class Shape {
public:
    virtual double area() const = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius);
    double area() const override;
};
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double width, double height);
    double area() const override;
};
