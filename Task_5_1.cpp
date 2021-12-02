#include <iostream>

using namespace std;

int func(int);

int main()
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << func(i) << " ";
    }
    return 0;
}
//Функция заданной последовательности
int func(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 3;
    }
    if(n == 2){
        return 5;
    }
    if(n > 3){
        return func(n-1) + func(n-2) + func(n-3);
    }
     return 1;  
}