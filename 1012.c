#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    float area_rectangle_triangle = 0.5*a*c;
    float area_circle = 3.14159*c*c;
    float area_trapezium = 0.5*(a+b)*c;
    float area_square = b*b;
    float area_rectangle = a*b;

    printf("TRIANGULO: %.3f\n",area_rectangle_triangle);
    printf("CIRCULO: %.3f\n",area_circle);
    printf("TRAPEZIO: %.3f\n",area_trapezium);
    printf("QUADRADO: %.3f\n",area_square);
    printf("RETANGULO: %.3f\n",area_rectangle);

    return 0;

}