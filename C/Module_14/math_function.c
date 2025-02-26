#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double a;
    scanf("%lf", &a);

    int ceil_value = ceil(a);
    // int ceil_value = floor(a);
    // int ceil_value = round(a);
    // int ceil_value = sqrt(a);

    printf("%d", ceil_value);

    // double ceil_value = sqrt(a);
    // printf("%0.2lf", ceil_value);

//-----------------------------------

    // int a, b;
    // scanf("%d %d", &a, &b);

    // int ceil_value = pow(a*1.0, b*1.0);
    // printf("%d\n", ceil_value);
//-------------------------------------
    // double a, b;
    // scanf("%lf %lf", &a, &b);
    // double ceil_value = pow(a*1.0, b*1.0);
    // printf("%lf", ceil_value);

//-------------------------------

    // int a;
    // scanf("%d", &a);
    // int value = abs(a);
    // printf("%d", value);

    
    return 0;
}