#include <iostream>
#include <ctime>

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    srand(time(NULL));
    
    const int row, columns, Min, Max;
    cout <<"Введите количество строк и столбцов массива: ";
    cin >> row >> columns;
    
    int arr[row][columns]{},
    arr_max_row[row]{}, 
    arr_min_columns[columns]{};
    
    int Max = -32656, Min = 32656;
    
    // Создание массива с целыми числами
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            arr[i][j] = rand() % 1001 - 200; 
        }
    }
    //Вывод массива
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            cout << arr[i][j] << "  "; 
        }
        cout << endl;
    }
    // Поиск максимального элемента в строке
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            if(arr[i][j] > Max){
                Max = arr[i][j];
            }
        }
        arr_max_row[i] = Max;
        Max = -32656;
    }
    
    //Посик минимально элемента по столбцу
      for(int i = 0; i < columns; i++){
        for(int j = 0; j < row; j++){
            if(arr[j][i] < Min){
                Min = arr[j][i];
            }
        }
        arr_min_columns[i] = Min;
        Min = 32656;
    }
    
    //Вывод минимальных и максимальных элементов
    cout << " Минимальные элементы столбцов : ";
    for(int i = 0; i < columns; i++){
        cout << arr_min_columns[i] << " ";
    }
    cout <<  endl << " Максимальные элементы строк: ";
    for(int i = 0; i < row; i++){
        cout << arr_max_row[i] << " ";
    }
    return 0;
}