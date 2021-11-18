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
    int count = 0;
    
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
     while(number > 0){
        Multplctn *=  number % 10;
        number /= 10;
    }
    cout << "Произведение цифр равно : " << Multplctn;
    return 0;
}