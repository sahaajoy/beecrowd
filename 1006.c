#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    
    float m=(a*2+b*3+c*5)/10;
    printf("MEDIA = %.1f\n",m);
    return 0;
}