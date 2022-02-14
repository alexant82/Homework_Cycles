//Задание 7. Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона.
//Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке.
//

#include <iostream>

int main()
{
    using namespace std;
    
    setlocale(LC_ALL, "RUS");
    
    
    int a, b, c; 

    cout << "\n\n";
    cout << "\t\t\tДанная программа выводит на экран все числа диапазона\n";
    cout << "\tГраницы диапазона Вы определяете сами, причем их можно вводить в произвольном порядке\n";
    cout << "\t______________________________________________________________________________________\n";
    cout << endl;
    cout << "\t\t\t\t************************************\n";
    cout << "\t\t\t\tВведите границу 1 диапазона:\t";
    cin >> a;
    cout << endl;
    cout << "\t\t\t\tВведите границу 2 диапазона:\t";
    cin >> b;
    cout << endl;
    cout << "\t\t\t\t************************************\n";
    cout << endl;
    cout << "\t______________________________________________________________________________________\n";
    cout << endl;
    cout << endl;

    cout << "\t\tТеперь Вам необходимо выбрать что программе вывести для Вас на экран.\n\n";
    cout << "\t\t\t\t\tСделайте свой выбор:\n\n\n";
    cout << "\t\t\t1 -  вывод всех чисел диапазона последовательно \n";
    cout << "\t\t\t2 -  вывод всех четных чисел диапазона  \n";
    cout << "\t\t\t3 -  вывод всех нечетных чисел диапазона \n";
    cout << "\t\t\t4 -  вывод всех чисел кратных семи  ";
    cin >> c;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t_______________________________________________________\n";
    cout << endl;

    if (c == 1) {
        cout << "\t\t\t\t\t" <<"      "<<"Вы выбрали:\n";
        cout << endl;
        cout << "\t\t\t\t" << "  " << "вывод всех чисел диапазона последовательно\n";
        cout << endl;
        cout << endl;
        }
    if (c == 2) {
        cout << "\t\t\t\t\t"<<"      "<<"Вы выбрали:\n";
        cout << endl;
        cout << "\t\t\t\t" << "  " << "вывод всех четных чисел диапазона\n";
        cout << endl;
        cout << endl;
    }
    if (c == 3) {
        cout << "\t\t\t\t\t"<<"      "<<"Вы выбрали:\n";
        cout << endl;
        cout << "\t\t\t\t" << "  " << "вывод всех нечетных чисел диапазона\n";
        cout << endl;
        cout << endl;
    }
    if (c == 4) {
        cout << "\t\t\t\t\t"<<"     "<<"Вы выбрали:\n";
        cout << endl;
        cout << "\t\t\t\t"<<"  "<<"вывод всех чисел кратных семи\n";
        cout << endl;
      
    }
    cout << "\t\t\t_______________________________________________________\n";
    cout << endl;
    cout << endl;


    switch (c) {

    case 1  :
        if (a < b) {
        
            for (int i = a; i <= b; i++) {

                cout << "\t\t\t\t\t\t" << "   " << i;
                cout << endl;
            }
        }
        else {
            if (a > b) {

                for (int i = b; i <= a; i++) {

                    cout << "\t\t\t\t\t\t"<<"   "<< i;
                    cout << endl;
                }
            }
            else {
                if (a = b) {
                    cout << "\tДиапазон чисел \"не задан\" (равен 0)";
                }
            }
        }
    break;
    
    case 2:

        if (a < b) {

            for (int i = a; i <= b; i++) {
                if (i % 2 == 0) {
                    cout << "\t\t\t\t\t\t" << "   " << i;
                    cout << endl;
                }
            }
        }
        else {
            if (a > b) {

                for (int i = b; i <= a; i++) {
                    if (i % 2 == 0) {
                        cout << "\t\t\t\t\t\t" << "   " << i;
                        cout << endl;
                    }
                }
            }
            else {
                if (a = b) {
                    cout << "\tДиапазон чисел \"не задан\" (равен 0)";
                }
            }
        }
    break;

    case 3:

        if (a < b) {

            for (int i = a; i <= b; i++) {
                if (i % 2 != 0) {
                    cout << "\t\t\t\t\t\t" << "   " << i;
                    cout << endl;
                }
            }
        }
        else {
            if (a > b) {

                for (int i = b; i <= a; i++) {
                    if (i % 2 != 0) {
                        cout << "\t\t\t\t\t\t" << "   " << i;
                        cout << endl;
                    }
                }
            }
            else {
                if (a = b) {
                    cout << "\tДиапазон чисел \"не задан\" (равен 0)";
                }
            }
        }
        break;

    case 4:

        if (a < b) {

            for (int i = a; i <= b; i++) {
                if (i % 7 == 0) {
                    cout << "\t\t\t\t\t" << i << "   " << "кратно числу 7\n";
                    cout << endl;
                }
            }
        }
        else {
            if (a > b) {

                for (int i = b; i <= a; i++) {
                    if (i % 7 == 0) {
                        cout << "\t\t\t\t\t" << i << "   " << "кратно числу 7\n";
                        cout << endl;
                    }
                }
            }
            else {
                if (a = b) {
                    cout << "\tДиапазон чисел \"не задан\" (равен 0)";
                }
            }
        }
        break;


        default: {
        cout << "\tВы ввели не существующее значение для выбора действия\n";
        cout << "\tЛучше ознакомьтесь с вариантами ввода выбора и запустите программу снова\n";
        cout << "\tЖелаю Удачи!\n";
        }
    }


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

