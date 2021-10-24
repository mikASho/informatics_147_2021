#include <iostream>
#include <cmath>

// Нахождение длины для вектора
float LenVctr(float, float, float);

int main()
{   
    setlocale(LC_ALL, "");
    float Ax = 1, Ay =5, Az =3;
    float Cx, Cy, Cz;
    
    std::cout << "Дан вектор а{1;5;3}" << std::endl
              << "Длина вектора а: " << LenVctr(Ax, Ay, Az) << std::endl;
              
    std::cout << "Координаты ед. вектора b соноправленного с вектором а: "
              << "{" << Ax/LenVctr(Ax, Ay, Az)
              << "; "<< Ay/LenVctr(Ax, Ay, Az)
              << "; "<< Az/LenVctr(Ax, Ay, Az) << "}"<< std::endl;
    
    std::cout << "Введите координаты вектора с {i, j, k} : ";
    std::cin  >> Cx >> Cy >> Cz;
    
    std::cout << "Скалярное произведение векторов а и с : "
              << Ax*Cx + Ay*Cy + Az*Cz << std::endl;
             
    std::cout << "Векторное произведение векторов а и с : "
              << "{" << Ay*Cz-Az*Cy
              << ";" << Az*Cx-Ax*Cz
              << ";" << Ax*Cy-Ay*Cx << "}" << std::endl;
              
    return 0;
}

float LenVctr(float Ax, float Ay, float Az){
    return pow(Ax*Ax + Ay*Ay + Az*Az, 0.5);
}