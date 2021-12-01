#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   setlocale(LC_ALL, ""); // попытка подключить русский алфавит
   srand(time(NULL));
   
   int lenght;
   cout << " Введите размер массива: ";
   cin >> lenght; 
   int *ptr_arr = new int [lenght]; // выделяем свободную оперативную память для дин.массива
   int min_num = ptr_arr[0]; //берём за минимум первый элемент массива
   
   cout << " Динамический массив: ";
   for(int i = 0; i < lenght; i++){
       ptr_arr[i] = rand() % 1001 - 300; // заполняем массив случайными числами
       cout << ptr_arr[i] << " ";
       
       if(min_num > ptr_arr[i]){
           min_num = ptr_arr[i];
       }
   }
   cout << endl << " Минимальное число массива: " << min_num;
   delete [] ptr_arr; // очищаем память

    return 0;
}
