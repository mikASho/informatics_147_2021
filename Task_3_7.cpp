#include <iostream>
#include <cmath>

//Обрисовка периметра прямоугльника
void Paint_Rectangle(int, int, char);

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    int height, width;
    char sym;
    cout << "Введите высоту, ширину и символ для периметра прямоугольника : ";
    cin >> height >> width >> sym;
    Paint_Rectangle(height, width, sym);
    
    return 0;
}

void Paint_Rectangle(int height, int width, char sym){
    for (int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            // Проверяем условием, чтобы очертить периметр и поставить пробелы
            if ((i == 0) or (j == 0) or (i == height - 1) or (j == width -1)){ 
            cout << sym;
            }
            else {
                cout << ' ';
            }
            
        }
        cout << endl;
    }
}