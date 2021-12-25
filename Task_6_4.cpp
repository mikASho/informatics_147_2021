#include <iostream>
using namespace std;

float factorial_k(float);

int main()
{
    setlocale(LC_ALL, "");
    int n;
    
    cout << "Введите n рядов: ";
    cin >> n;
    
    float sum = 0;
    for(float k = 1; k <= n; k++){
        sum += -1 * k * ((5 - k) / factorial_k(k));
    }
    
    cout << "Сумма ряда равна: " << sum;
    return 0;
}

float factorial_k(float k){
    if(k == 1){
        return 1;
    }
    return k * factorial_k(k-1);
}