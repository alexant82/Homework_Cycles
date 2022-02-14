// Задание 6. Вывести на экран все числа от нуля до введенного пользователем числа.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;

    cout << endl;
    cout << endl;
    cout << "\t\tВведите число, до которого программа выведет все числа от нуля"<<"  ";
    cin >> b;
   
    cout << "\t\t_____________________________________________________________";
    cout << endl;
    cout << endl;
    

    for (int i = 0; i <= b ; i++) {
        cout <<"\t\t\t\t\t"<< "   " << i;
        cout << endl;

    }
    cout << endl;
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