#include <iostream>
#include <cmath>
  
int main()
{
    const float A = 4.1, B = 2.7;
    float x_start = 1.5, x_end = 3.6, x_step = 0.4, y;
    
    for (x_start; x_start < x_end; x_start+=x_step){
        y = ( A*A*A*pow(x_start, 0.5) - B * (log(x_start)/log(5)) ) / (pow(log10(x_start-1), 3));
        std::cout << "f(" << x_start << ")= " << y << std::endl;
    }
    
    return 0;
}