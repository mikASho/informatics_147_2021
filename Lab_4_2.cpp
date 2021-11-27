#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    const int X = 8, Y = 8;
    float x_arr[X]{-1.3, -1, -0.8, -0.1, 0.9, 2.2, 2.5, 3.4};
    float y_arr[Y]{4.921, 3.33, 1.624, 0.028, -0.84, -0.025, 1.116, 3.713};
    
    //Находим сумму иксов и греков
    cout << "      x" << "              y" <<  endl;
    float sum_x_arr = 0, sum_y_arr = 0;
    for(int i = 0; i < X; i++){
        
        sum_x_arr += x_arr[i];
        sum_y_arr += y_arr[i];
        cout << ++i << "    " << x_arr[i] << "         " << y_arr[i] << endl;
        i--;
        
    }
    cout << "Сумма х : " << sum_x_arr << "      Сумма y: " << sum_y_arr << endl << endl;
    
    
    
    //Находим суммы x^2 и x*y ;
    cout << " x^2 " << "        x*y " << endl;
    double sum_x_pow_2 = 0, sum_mult_xy = 0; 
    for(int i = 0; i < X; i++){
        sum_x_pow_2 += x_arr[i] * x_arr[i];
        sum_mult_xy += x_arr[i] * y_arr[i];
        cout << ++i << "   "; 
        --i;
        cout << x_arr[i] * x_arr[i] 
             << "      " << x_arr[i] * y_arr[i]
             << endl;
    }
    cout << "Сумма х^2 : " << sum_x_pow_2 << "      Сумма x*y: " << sum_mult_xy << endl << endl;
    
    
    //Находим а и b, решая уравнение
    double a, b, points = 8;
    b = (( sum_x_pow_2 * sum_y_arr / sum_x_arr) - sum_mult_xy)/(points * sum_x_pow_2 / sum_x_arr - sum_x_arr);
    cout << "b= " ;
    printf("%3.10f", b);
    
    a = (sum_y_arr - points * b) / sum_x_arr;
    cout << " a= " ;
    printf("%3.10f", a);
    
    // Вычисляем игрек линейную и находим невязку
    cout << "   y line " << endl;
    double y_lin[Y]{};
    double D_pow_2_nevyazka = 0;
    for(int i = 0; i < X; i++){
        y_lin[i] = a * x_arr[i] + b;
        D_pow_2_nevyazka += (y_arr[i] - y_lin[i]) * (y_arr[i] - y_lin[i]);
        cout << ++i << "   " << y_lin[--i] << endl;
    }
    cout << endl;
    
    
    cout << " Q= " << a << "x^2 + " << b << "x   с невязкой S= "; 
    printf("%4.10f", D_pow_2_nevyazka);
    return 0;
}