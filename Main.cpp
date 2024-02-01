#include <iostream>
#include <map>
#include <string>
#include <windows.h>

using namespace std;

// ������� ��� ��������� ����� ��������
void printDictionary(const map<string, string>& dictionary) {
    cout << "���� ��������:" << endl;
    for (const auto& pair : dictionary) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    map<string, string> engToUkrDictionary; // ������� � ��������� �� ���������
    map<string, string> ukrToEngDictionary; // ������� � ��������� �� ���������

    // ��������� ������ ��� � ��������
    engToUkrDictionary["apple"] = "������";
    engToUkrDictionary["car"] = "���������";
    ukrToEngDictionary["���������"] = "car";
    ukrToEngDictionary["������"] = "apple";

    while (true) {
        cout << "\n���� ������ 䳿:" << endl;
        cout << "1. ������� ���� ��������" << endl;
        cout << "2. ������ ����� �� ��������" << endl;
        cout << "3. ����� � ��������" << endl;
        cout << "������� �����: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "������� � ��������� �� ���������:" << endl;
            printDictionary(engToUkrDictionary);
            cout << "\n������� � ��������� �� ���������:" << endl;
            printDictionary(ukrToEngDictionary);
            break;
        }
        case 2: {
            string engWord, ukrWord;
            cout << "������ ����� ����������: ";
            cin >> engWord;
            cout << "������ ���� �������� ����������: ";
            cin >> ukrWord;
            engToUkrDictionary[engWord] = ukrWord;
            ukrToEngDictionary[ukrWord] = engWord;
            cout << "����� ������ ������ �� ��������." << endl;
            break;
        }
        case 3: {
            cout << "�������� ������� ������." << endl;
            return 0;
        }
        default: {
            cout << "����������� ���� �����. ��������� �� ���." << endl;
            break;
        }
        }
    }

    return 0;
}

