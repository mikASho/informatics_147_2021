#include <iostream>

// Обмен значений переменными с помощью указателя
void swap(int, int);

using namespace std;
int main()
{   
    setlocale(LC_ALL, "");
    int x=5, y=10;
    cout << " До преобразования : x= " << x << " y= " << y << endl;
    swap(x, y);
    return 0;
}
void swap(int x, int y){
    int *px, *py;
    int z; // создаёт переменную, чтобы не потерять адрес при обмене
    
    px = &x;
    py = &y;
    
    z = *px;
    *px = *py;
    *py = z;
    
    cout <<" После преобразования : x= " << *px << " y= "<< *py;
    return;
}