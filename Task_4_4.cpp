#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fill_arr(int* ptr_arr, int lenght);
void show_arr(int* ptr_arr, int lenght);
void find_min(int* ptr_arr, int lenght);
int main()
{
   setlocale(LC_ALL, ""); // попытка подключить русский алфавит
   srand(time(NULL));
   
   int lenght;
   cout << " Введите размер массива: ";
   cin >> lenght; 
   int *ptr_arr = new int [lenght]; // выделяем свободную оперативную память для дин.массива
   
   fill_arr(ptr_arr, lenght); // Заполняем массив случайными числави
   show_arr(ptr_arr, lenght); // Выводит массив
   find_min(ptr_arr, lenght); // Нахожим минимальное число
   
   delete [] ptr_arr; // очищаем память

    return 0;
}

void fill_arr(int* ptr_arr, int lenght){
    for(int i = 0; i < lenght; i++){
       ptr_arr[i] = rand() % 1001 - 300; // заполняем массив случайными числами
    }
}

void show_arr(int* ptr_arr, int lenght){
    cout << "Массив: ";
    for(int i = 0; i < lenght; i++){
       cout << " " << ptr_arr[i];
    }
}

void find_min(int* ptr_arr, int lenght){
    int min_num = ptr_arr[0]; //берём за минимум первый элемент массива
    for(int i = 0; i < lenght; i++){
       if(min_num > ptr_arr[i]){
           min_num = ptr_arr[i];
       }
    } 
    cout << endl << " Минимальное число: " << min_num;
}
