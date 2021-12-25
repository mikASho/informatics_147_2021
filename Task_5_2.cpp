#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int num = 0, t = 0, d = 1, k = 0, num_8, num_16;
    cout << "Введите десятичное число: ";
    cin >> num;
    num_8 = num, num_16 = num;
    
    while(num){
        t += (num % 2) * d; //сумма числа
        num = num / 2; 
        d = d * 10; // разряды
    }
    cout << "Число в двоичной системе исчисления: " << t << endl;
    
    t = 0;
    
    //перевод из 8-ой в 10-ую сс
    while(num_8){
        t += (num_8 % 10) * pow(8, k); 
        num_8 = num_8 / 10;
        k++;
    }
    cout << "Число в восьмиричной системе исчисления: "<< t << endl;

    d = 1, t;
    int i = 0;
    int save_num[3]{111,111,111};
    //перевод из 10-ой в 16-ую
    while(num_16){
        t = (num_16 % 16);
        num_16 = num_16 / 16;
        save_num[i] = t;
        i++;
    }
    cout << "Число в шетнадцатиричной системе: ";
    for(int i = 2; i > -1; i--){
        if(save_num[i] == 111){
            cout <<"";
        }
        else if(save_num[i] == 10){
            cout << "A"; 
        }
            else if(save_num[i] == 11){
                cout << "B";
            }
                else if(save_num[i] == 12){
                    cout << "C";
                }
                    else if(save_num[i] == 13){
                        cout << "D";
                    }
                        else if(save_num[i] == 14){
                            cout << "E";
                        }
                             else if(save_num[i] == 15){
                                cout << "F";
                            }
                                else{
                                    cout << save_num[i];
                                }
    }
    return 0;
}