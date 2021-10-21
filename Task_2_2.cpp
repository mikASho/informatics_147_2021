#include <iostream>
using namespace std;

int Perimetr(int, int, int, int);  // для трапеции
double Perimetr(double); // для круга
int Perimetr(int); // для квадрата

int Square(int, int, int); // для трапеции
double Square(double); // для круга
int Square(int); // для квадрата
 
int main()
{   
    setlocale(LC_ALL, "ru");
    int b, c, d;
    double a;
    
    Perimetr(a, b, c, d);
    Perimetr(a);
    Perimetr(b);
    
    Square(a, b, d);
    Square(a);
    Square(b);
    
    return 0;
}
// Периметры......................
// Для Трапеции
int Perimetr(int a, int b, int c , int d){
    cout << "Введите 4 строны трапеции, чтобы найти периметр : ";
    cin >> a >> b >> c >> d; 
    cout << "Периметр трапеции : " << a + b +c +d << endl;    
    return 0;  
} 

// Для Круга
double Perimetr(double a){
    cout << "Введите радиус круга, чтобы найти периметр : ";
    cin >> a; 
    cout << "Периметр круга :" << a*6.28 << endl;    
    return 0;  
}

// Для Квадрата
int Perimetr(int b){
    cout << "Введите сторону квадрата, чтобы найти периметр : ";
    cin >> b; 
    cout << "Периметр квадрата :" << b*4 << endl;    
    return 0; 
}

//Площади.........................
// Для Трапеции
int Square(int a, int b, int h){
    cout << "Введите 2 основания трапеции и высоту, чтобы найти площадь : ";
    cin >> a >> b >> h; 
    cout << "Площадь трапеции : " << (a + b) /2 * h << endl;    
    return 0;    
} 
// Для Круга
double Square(double r){
    cout << "Введите радиус круга, чтобы найти площадь : ";
    cin >> r; 
    cout << "Площадь круга : " << r*r*3.14 << endl;    
    return 0;    
}
// Для Квадрата
int Square(int b){
    cout << "Введите сторону квадрата, чтобы найти площадь : ";
    cin >> b; 
    cout << "Площадь квадрата : " << b*b << endl;    
    return 0;    
}