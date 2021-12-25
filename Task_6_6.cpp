#include <iostream>
using namespace std;

//выводит треугольника Паскаля
void triang_Pascal(int height);

//считает стороны Паскаля
int num_Pascal(int n);

int main()
{
    setlocale(LC_ALL, "");
    int height;
    cout << "Введите высоту треугольника: ";
    cin >> height;
    triang_Pascal(height);
    
    return 0;
}

int num_Pascal(int n){
    int x = 1;
    for (int i = 1; i <= n; i++){
        x *= i;  // считаем сторону, умножением от 1 до числа вычесленной в triang_Pascal, т.е. i и j
    }
    return x;
}
        
void triang_Pascal(int height){
    
    cout<<"1"<<"\n";
    for (int i = 1;i < height;i++){
        for (int j = 0; j <= i; j++){
            //форму для вычесления числа стороны тр Паскаля и вывод 
            cout<<(num_Pascal(i) / (num_Pascal(j) * num_Pascal(i - j)))<<" ";
        }
        cout<<"\n";
    }

};