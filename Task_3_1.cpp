#include <iostream>
#include <cmath>

using namespace std;

double Func_All(int, double, double);


int main()
{   
    int a; 
    double x, y;
    setlocale(LC_ALL, "");
    
    cout << "Чтобы посчитать сумму двух чисел введите 1."<< endl
         << "Чтобы посчитать произведение чисел введите 2."<< endl
         << "Чтобы поделить два числа нажмите 3."<< endl
         << "Чтобы вычесть одно число из другого нажмите 4."<< endl
         << "Чтобы возвести число в степень нажмите 5." << endl
         << "Ваш выбор: ";
        
    cin >> a;
    
    if (a > 5){
        cout << "Другого не дано!";
    }else{
        cout <<"Введите х= ";
        cin >> x;
        cout << "Введите y= ";
        cin >> y;
    
        Func_All(a, x, y);
    }
    return 0;
}
// Функция включает в себя сложение, умножение, деление, вычитание, возведение
double Func_All(int a, double x, double y){
    
         
    switch(a)
    {
        case 1:
        cout << "Сумма: " << x + y;
        break;
        
        case 2:
        cout << "Произведение: " << x * y;
        break;
         
        case 3:
        cout << "Деление: " << x / y;
        break;
         
        case 4:
        cout << "Вычитание: " << x - y;
        break;
        
        case 5:
        cout << "Возведение в степень: " << pow(x, y);
        break;

    }
    
    return 0;
}