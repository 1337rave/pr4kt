#include <iostream>
#include <map>
#include <string>
#include <windows.h>

using namespace std;

// Функція для виведення вмісту словника
void printDictionary(const map<string, string>& dictionary) {
    cout << "Вміст словника:" << endl;
    for (const auto& pair : dictionary) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    map<string, string> engToUkrDictionary; // Словник з англійської на українську
    map<string, string> ukrToEngDictionary; // Словник з української на англійську

    // Додавання деяких слів у словники
    engToUkrDictionary["apple"] = "яблуко";
    engToUkrDictionary["car"] = "автомобіль";
    ukrToEngDictionary["автомобіль"] = "car";
    ukrToEngDictionary["яблуко"] = "apple";

    while (true) {
        cout << "\nМеню вибору дії:" << endl;
        cout << "1. Вивести вміст словника" << endl;
        cout << "2. Додати слово до словника" << endl;
        cout << "3. Вийти з програми" << endl;
        cout << "Виберіть опцію: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Словник з англійської на українську:" << endl;
            printDictionary(engToUkrDictionary);
            cout << "\nСловник з української на англійську:" << endl;
            printDictionary(ukrToEngDictionary);
            break;
        }
        case 2: {
            string engWord, ukrWord;
            cout << "Введіть слово англійською: ";
            cin >> engWord;
            cout << "Введіть його переклад українською: ";
            cin >> ukrWord;
            engToUkrDictionary[engWord] = ukrWord;
            ukrToEngDictionary[ukrWord] = engWord;
            cout << "Слово успішно додано до словників." << endl;
            break;
        }
        case 3: {
            cout << "Програма завершує роботу." << endl;
            return 0;
        }
        default: {
            cout << "Некоректний вибір опції. Спробуйте ще раз." << endl;
            break;
        }
        }
    }

    return 0;
}

