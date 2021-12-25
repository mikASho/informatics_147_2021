#include <iostream>
#include <cmath>

float I = 15;
//вклад на 3 месяца
double calculateSum_3(double, float);

//вклад на 6 месяцев
double calculateSum_6(double, float);

//вклад на 12 месяцев
double calculateSum_12(double, float);

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    double P, n; 
    cout << "Введите сумму вклада и срок депозита: " << endl;
    cin >> P >> n;
    cout << "Вознаграждение за 3 месяца: " << calculateSum_3(P, n) << endl;
    cout << "Вознаграждение за 6 месяцев: " << calculateSum_6(P, n) << endl;
    cout << "Вознаграждение за 12 месяцев: " << calculateSum_12(P, n) << endl;
    return 0;
}
double calculateSum_3(double P, float n){
   float m = 3;
   return P * pow(1+((I/100)/(m/12)), m/(12*n));
}

double calculateSum_6(double P, float n){
 float m = 6; 
 return  P * pow(1+((I/100)/(m/12)), m/12*n);
}

double calculateSum_12(double P, float n){
   float m = 12; 
   return  P * pow(1+((I/100)/(m/12)), m/12*n);
}