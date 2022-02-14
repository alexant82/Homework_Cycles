//  Задание 2. Напишите программу, которая запрашивает два целых числа x и y,
//после чего вычисляет и выводит значение x в степени y.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    int y;
    int rez = 1;

    cout << endl;
    cout << "\t\t Данная программа возводит в определенную Вами степень определенное Вами число\n";
    cout << "\t\t _____________________________________________________________________________";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t Введите число, которое необходимо возвести в степень: ";
    cin >> x;
    cout << "\t\t Введите степень, в которую необходимо возвести число: ";
    cin >> y;
    cout << "\t\t -------------------------------------------------------";
    cout << endl;
    cout << endl;
    cout << "\t\t" << " " << "Возводим число" << " " << x << " " << "в степень" << " " << y;
    cout << endl;
    cout << endl;
    cout << "\t\t -------------------------------------------------------";
    cout << endl;

    
    


    for (int i = 0; i < y; i++) {
        
        rez = rez * x ;

    }
    cout << "\t"<<"         "<<"Результат возведения в степень = "<<""<< rez;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}

