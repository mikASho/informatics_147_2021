#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void find_min(int** arr, int rows, int columns);
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    
    
    int rows, columns;
    cout << " Введите количество строк и столбцов: ";
    cin >> rows >> columns;
    
    
    //Создаём двумерный массив
    int **arr = new int* [rows];
    for(int i = 0; i < rows; i++){
        arr[i] = new int[columns];
    }
    
    //Заполняем двумерный динамический массив псевдослучайными числами
    for(int i = 0; i < rows; i++){
        for(int j = 0; j< columns; j++){
            arr[i][j] = rand() % 1001 - 300;
        }
    }
    
    //Вывод элементов массива
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    find_min(arr, rows, columns);
    
    //Освобождаем оперативную память
    for(int i = 0; i < rows; i++){
        delete [] arr[i]; //сначала удаляем одномерные динамические массивы
    }
    delete [] arr; // удаляем основной динамический массив
    
    return 0;
}

void find_min(int** arr, int rows, int columns){
    int save_min_nmbrs[rows]{}; // Массив для минимальных чисел
    for(int i = 0; i < rows; i++){
        int min_num = arr[i][0]; // в качестве минимального числа возьмём первый элемент в каждой строке
        
        for(int j = 0; j < columns; j++){
            if(arr[i][j] < min_num){
                min_num = arr[i][j];
            }
        }
        save_min_nmbrs[i] = min_num;
    }    
        cout << "Минимальные числа: ";
        //вывод минимального числа каждой строки
        for(int i = 0; i < rows; i++){
            cout << save_min_nmbrs[i] << " ";
        } 
}