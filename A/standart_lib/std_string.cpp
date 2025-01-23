#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

// Задача 1: Программа, запрашивающая имя и возраст
void greeting() {
    string name;
    int age;

    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш возраст: ";
    cin >> age;

    cout << "Привет, " << name << "! Тебе " << age << " лет." << endl;
}

// Задача 2: Программа, принимающая строку и выводящая количество символов и подстроку
void stringInfo() {
    string input;

    cout << "Введите строку: ";
    cin.ignore(); // Очищаем буфер ввода перед getline
    getline(cin, input);

    cout << "Количество символов в строке: " << input.length() << endl;
    if (input.length() >= 3) {
        cout << "Первая подстрока длиной 3 символа: " << input.substr(0, 3) << endl;
    } else {
        cout << "Строка слишком короткая для извлечения подстроки." << endl;
    }
}

// Задача 3: Класс Person и использование unique_ptr
class Person {
public:
    string name;
    int age;

    Person(const string& name, int age) : name(name), age(age) {}
};

void managePersons() {
    vector<unique_ptr<Person>> persons;

    persons.push_back(make_unique<Person>("Alice", 30));
    persons.push_back(make_unique<Person>("Bob", 25));
    persons.push_back(make_unique<Person>("Charlie", 22));

    cout << "Данные о людях:" << endl;
    for (const auto& person : persons) {
        cout << "Имя: " << person->name << ", Возраст: " << person->age << endl;
    }
}

int main() {
    // Выполнение всех задач
    greeting();
    stringInfo();
    managePersons();

    return 0;
}