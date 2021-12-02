#include <iostream>
using namespace std;

int grtest_com_div(int a, int b);
int least_com_div(int a, int b);
int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите целые положительные числа a и b: ";
    cin >> a >> b;
    cout << "НОК(" << a << "; " << b << ") = " << least_com_div(a, b);
    return 0;
}
//Функция НОД
int grtest_com_div(int a, int b){
  if (a % b == 0){ 
    return b;
  }
  if (b % a == 0){
    return a;
  }
  //Рекурсия по поиску наибольшего делителя
  if (a > b){
    return grtest_com_div(a % b, b);
  }
  
  return grtest_com_div(a, b % a);
}

//Функция НОК
int least_com_div(int a, int b){
  return (a*b) / grtest_com_div(a, b);
}