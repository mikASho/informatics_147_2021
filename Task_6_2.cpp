#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, ""); //русский язык
    char sym_1, sym_2, sym_3, sym_4;
    int height;
    
    cout << "Введите 4 символа для 4-ех треугольников: ";
    cin >> sym_1 >> sym_2 >> sym_3 >> sym_4;
    cout << endl << "Введите высоту для треугольников: ";
    cin >> height;
    
    //первый треугольник
    for(int i = 0; i <= height; i++){
        for(int j = 0; j < i; j++){
            cout << sym_1;
        }
        cout << endl;
    }
    
    cout << endl;
    //второй треугольник
    for(int i = height; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << sym_2;
        }
        cout << endl;
    }
    
    cout << endl;
    int i = 0;
    //трейти треугольник
    while(i < height){
        int j = 0;
        while(j <= i){
            cout << sym_3;
            j++;
        }
        i++;
        cout << endl;
    }
    
    // четвертый треугольник
    cout << endl;
    i = 1;
    while(i <= height){
        int j = 0;
        while(j <= height - i){
            cout << sym_4;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}