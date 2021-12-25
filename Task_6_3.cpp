#include <iostream>
using namespace std;

void func_num_follow_one(int);

int main()
{
    setlocale(LC_ALL, "");
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    func_num_follow_one(number);
    
    return 0;
}
//Функция, показывающая сводимость числа к единице
void func_num_follow_one(int number){
    int i = 0;
    while(number != 1)
    {
        ++i; // счетчик действий
        // если четное, то такие маинации с числом
        if(number % 2 == 0){ 
            number /= 2;
            cout << "Действие " << i << " число равно: " << number << endl;
        }
            // иначе такие махинации с числом
            else{ 
                number = (number * 3 + 1) / 2;
                cout << "Действие " << i << " число равно: " << number << endl;
            }
    }
}