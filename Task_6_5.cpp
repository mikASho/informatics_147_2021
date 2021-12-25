#include <iostream>
using namespace std;

void simple_num(int); //функция нахождения простых чисел

int main()
{
    setlocale(LC_ALL, "");
    int n;
    
    cout << "Введите заключающее число диапозона: ";
    cin >> n;
   
    simple_num(n);
    
    return 0;
}

void simple_num(int n){

    int arr_numbrs[]{};
    //создаем диапозон от 2 до n
    for(int i = 1; n >= i; i++){
        arr_numbrs[i] = i;
    }
    
    //терзаем массив 
    for(int i = 2; n >= i; i++){
        for(int j = 1; j <= n; j++){
            //если элемент массива делится на число i, то приравниваем число к i
            if(arr_numbrs[j] % i == 0){
                arr_numbrs[j] = i;
            }
        }
    }
    // убираем дубли в массиве
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n ; j++)
        {
            if ( arr_numbrs[i] == arr_numbrs[j] ) // ищем дубль
            {
                for (int k_shift = j; k_shift <= n -1; k_shift++)
                {
                    // выполняем сдвиг элементов массива на -1, начиная со следующего элемента, после найденного дубля
                    arr_numbrs[k_shift] = arr_numbrs[k_shift + 1];
                }
                n -= 1; // уменьшаем массив на 1
 
                if (arr_numbrs[i] == arr_numbrs[j]) // если следующий элемент - дубль
                {
                 j--; // выполнияем переход на предыдущий элемент     
                }
            }
        }
    }
    // вывод простых чисел
    cout << "2" << endl;
    for(int i = 3; n >= i; i++){
            cout << arr_numbrs[i] << endl;
    }
}
   