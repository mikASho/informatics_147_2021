#include <iostream>
#include <cmath>

// сумма числового ряда 
double Sum(int);
//произведение числового ряда
double Multiplctn(int);

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int k;
    cout << "k = ";
    cin >> k;
    
    cout << "Сумма = " << Sum(k) << endl;   
    cout << "Произведение = " << Multiplctn(k); 
    return 0;
}
double Sum(int k){
    float x = 0;
    for (float n = 1; n <= k; n++)
        x += 2 / ((2 * n + 1) * (2 * n + 3));
    return x;
}

double Multiplctn(int k)
{
    float x = 1;
    for (float n = 1; n <= k; n++)
        x *= pow(-1, n - 1) + n;
    return x;
}