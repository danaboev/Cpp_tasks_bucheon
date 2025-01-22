//rtti
#include <iostream>
#include <typeinfo>

class Base {
    virtual void foo() {}
};

class Derived : public Base {
    void foo() override {}
};

int main() {
    Base* basePtr = new Derived();

    // Использование typeid
    std::cout << "Obyekt turi: " << typeid(*basePtr).name() << std::endl;

    // Использование dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        std::cout << "Bajarildi!" << std::endl;
    } else {
        std::cout << "Bajarilmadi." << std::endl;
    }

    delete basePtr;
    return 0;
}