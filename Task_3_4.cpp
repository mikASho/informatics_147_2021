#include <iostream>

//Сумма с помощью for
int For_Sum(int, int);
//Сумма с помощью while
int While_Sum(int, int);

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    int start, end;
    
    cout << "Введите начало и конец диапозона: " << endl;
    cin >> start >> end;
    
    cout << "Сумма диапозона с помощью for: " << For_Sum(start, end) << endl;
    cout << "Сумма диапозона с помощью while: " << While_Sum(start, end);
    
    return 0;
}
int For_Sum(int start, int end){
    int Sum = 0;
    for(int i = start; i <= end; i++){
        if ( i % 2 == 0){
            Sum += i;
        }
    }
    return Sum;
}

int While_Sum(int start, int end){
    int Sum = 0;
    while (start <= end){
        if( start % 2 == 0){
            Sum += start;
        }
        start++;
    }
    return Sum;    
}