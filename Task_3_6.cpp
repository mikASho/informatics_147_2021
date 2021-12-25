#include <iostream>
#include <cmath>

// Функция произведения цифр числа
int Multiplctn_digit(int, int);

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    int number, Multplctn = 1;
    cin >> number;
    Multiplctn_digit(number, Multplctn);
    return 0;
}
 
int Multiplctn_digit(int number, int Multplctn){
    int count = 0, save_num = number;
    
    //Проверка на 6-ти значность
    while( number > 0){
        number /=10;
        count++;
    }
    if(count != 6){
        cout << "Число не шестизначное!";
        return 0;
    }
    
    // Произведение цифр
     while(save_num > 0){
        Multplctn *=  save_num % 10;
        save_num /= 10;
    }
    cout << "Произведение цифр равно : " << Multplctn;
    return 0;
}