#include <iostream>
#include <cmath>

//поиск дискриминанта и самих корней
int Discriminant_root(int, int, int);

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    int x, y, z;
    cout << "Введите x, y и z: " << endl;
    cin >> x >> y >>z;
    Discriminant_root(x, y, z);
    
    return 0;
}
int Discriminant_root(int x, int y, int z){
    float D = y*y - 4*x*z;
    if( D < 0){
        cout << "Уравнение не имеет действительных корней."<< endl;
    }
    if(D == 0){
        cout << "Единственный корень равен :" << (-y) / (2*x);
    }
    if(D > 0){
        cout << "Первый корень равен: " << ( (-y) - sqrt(D)) / (2*x) << endl;
        cout << "Второй корень равен: " << ( (-y) + sqrt(D)) / (2*x) << endl;
        }
    return 0;
}  