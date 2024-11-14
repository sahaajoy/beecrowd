#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    //double pi = 3.14159;

    double volume = (4.0/3.0)*3.14159*(r*r*r);

    printf("VOLUME = %.3lf\n",volume);

    return 0;
}