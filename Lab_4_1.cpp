#include <iostream>
#include <cmath>

// функции f(a) и f(c)
double func_of_a(double);
double func_of_c(double);

using namespace std;
int main(){
    
    float x_start = 0, x_end = 3.5, x_step = 0.25;
    double func_of_x;
    int step_act = 0;
    const int N = x_end / x_step;
    double save_func_of_x[N]{}; 
    
    //Первый этап, расчёт функции f(x) и вывод таблицы 1
    cout << "x" << "            " << "f(x)" << endl;
    for(float i = x_start; i <= x_end; i+=x_step){
        func_of_x = pow((i - 1), 2) - 2 * cos(i);
        
        save_func_of_x[step_act++] = func_of_x; // cохранение значений функции f(x)
        cout << i << "       "; // шаги действий
        printf("%10.10f", func_of_x);
        cout << endl;
    }
    
        float a, b;
        for(int i = 0; i < N; i++){
            x_start += x_step; // значения а и b
            if((save_func_of_x[i+1] > 0 && save_func_of_x[i] < 0) || (save_func_of_x[i+1] < 0 && save_func_of_x[i] > 0)){ // поиск значений а и b
                a = x_start - x_step;
                b = x_start;
                break;
            }    
        }
        
        // Второй этап       
        cout << endl
             << "         a " 
             << "              b " 
             << "             c " 
             << "             b-a " 
             << "         f(a)*f(c) " 
             << endl;
        
        // Начальные данные для таблицы 2     
        float c, b_a;
        c = (a + b) / 2;
        b_a = b - a;
        double a_c; 
        
        for(int i = 1; i > 0; i++){
            a_c = func_of_a(a) * func_of_c(c); // Произведение функций f(a)*f(c)
            
            //Нахождение a, b, c и b-c и вывод на таблицу
            if(a_c > 0){
                a = c;
                b = b;
                c = (b + a) / 2;
                b_a = b - a;
              cout << i << ". "; 
                printf("%10.10f", a);
                cout << "    ";
                printf("%10.10f", b);
                cout << "    ";
                printf("%10.10f", c);
                cout << "    ";
                printf("%10.10f", b_a);
                cout << "    ";
                printf("%10.10f", a_c);
                cout << endl;               
            }
            else{
                a = a;
                b = c;
                c = (b + a) / 2;
                b_a = b - a;
                cout << i << ". ";
                printf("%10.10f", a);
                cout << "    ";
                printf("%10.10f", b);
                cout << "    ";
                printf("%10.10f", c);
                cout << "    ";
                printf("%10.10f", b_a);
                cout << "    ";
                printf("%10.10f", a_c);
                cout << endl;
            }
            if(b_a < 0.0001){
                cout << "Корень уравнения равен: ";
                printf("%10.10f", b_a);
                break;
            }            
        }
        
    return 0;
}

double func_of_a(double a){
    return pow((a - 1), 2) - 2 * cos(a);
}

double func_of_c(double c){
    return pow((c - 1), 2) - 2 * cos(c);
}