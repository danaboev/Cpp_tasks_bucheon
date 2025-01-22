#include <iostream>
#include <iomanip> // Для std::setw и std::setprecision

int main() {
    double pi = 3.14159;
    std::cout << std::fixed << std::setprecision(2) << "PI raqami: " << pi << std::endl;

    int age;
    std::cout << "yoshingizni kiriting: ";
    std::cin >> age;
    std::cout << "Sizning yoshingiz: " << age << std::endl;

    return 0;
}

//// string

#include <iostream>
#include <string>

int main() {
    std::string myString = "salom, C++!";
    
    // Длина строки
    std::cout << "qator uzunligi: " << myString.length() << std::endl;

    // Извлечение подстроки
    std::string sub = myString.substr(0, 5);
    std::cout << "pastgi qator: " << sub << std::endl;

    // Поиск подстроки
    size_t pos = myString.find("C++");
    if (pos != std::string::npos) {
        std::cout << "'C++' shu pozisiyada topildi: " << pos << std::endl;
    }

    return 0;
}