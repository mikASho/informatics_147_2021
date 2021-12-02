#include <iostream>
using namespace std;

int grtest_com_div(int a, int b);
int main()
{
    setlocale(LC_ALL, "");
    int a, b, count, d;
    cout << "Введите количество чисел: ";
    cin >> count;
    
    //Ввод чисел в массив
    int const N = count;
    int arr_numbers[N]{};
    cout << "Вводите ваши числа через enter." << endl;
    for(int i = 0; i < count; i++){
        cin >> a;
        arr_numbers[i] = a;
    }

    //Нахождение НОД введённых чсиел
    //Находим НОД для первых двух чисел
    d = grtest_com_div(arr_numbers[0], arr_numbers[1]);
    for(int i = 2; i < count; i++){
        //Находим НОД остальных чисел, начиная с третьего числа
        d = grtest_com_div(d, arr_numbers[i]); 
    }
    
    // Вывод НОДа
    cout << "НОД(" << arr_numbers[0];
    for(int i = 1; i < count; i++){
        cout << "; " << arr_numbers[i];
    }
    cout << ") = " << d;
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