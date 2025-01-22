#include <iostream>
#include <exception>
/// Misol: o'zingizning istisno sinfingizni yaratish
// Maxsus istisno sinfini aniqlash
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Произошла моя собственная ошибка!";
    }
};

int main() {
    try {
        throw MyException();  // Istisno avlod genatsiyasi
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;  // Istisno bilan ishlash
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;  // Оboshqa standart istisnolarni qayta ishlash
    }
    
    return 0;
}


// Istisnolarni qayta ishlash tuzilishi
try {
    // Istisnoga olib kelishi mumkin bo'lgan kod
    int x = 10;
    int y = 0;
    if (y == 0) {
        throw std::runtime_error("Ошибка: деление на ноль!"); // Istisno avlod generatori
    }
    int result = x / y;  // Ushbu kod bajarilmaydi
} catch (const std::runtime_error& e) {
    // Istisno bilan ishlash
    std::cout << "Обработано исключение: " << e.what() << std::endl;
} catch (const std::exception& e) {
    // Boshqa standart istisnolarni qayta ishlash
    std::cout << "Обработано другое исключение: " << e.what() << std::endl;
}

/* Strukturani tushuntirish
sinab ko'ring blok: istisnoga olib kelishi mumkin bo'lgan kodni o'z ichiga oladi (masalan, nolga bo'linish).
throw: agar xato yuzaga kelsa (nolga bo'linish), throw yordamida istisno hosil bo'ladi.
catch blok: istisno yuzaga kelganda, boshqaruv tegishli catch blokiga o'tkaziladi, bu erda xato qayta ishlanadi. Bunday holda, xato xabari ko'rsatiladi.*/

//Istisnolardan foydalangan holda namunaviy kod

#include <iostream>
#include <stdexcept>

// Функция, которая делит два числа
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Xato: Nolga bo'lish mumkin emas!!!"); // Istisno avlod generatri
    }
    return numerator / denominator;
}

int main() {
    double a, b;

    std::cout << "Hisoblagichni kiriting: ";
    std::cin >> a;
    std::cout << "Maxrajni kiriting: ";
    std::cin >> b;

    try {
        double result = divide(a, b); // Bo'linishga urinish
        std::cout << "Natija: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Istisno bilan ishlov berildi: " << e.what() << std::endl; // Обработка исключения
    } catch (const std::exception& e) {
        std::cout << "Boshqa istisno ko'rib chiqildi: " << e.what() << std::endl;
    }

    return 0;
}