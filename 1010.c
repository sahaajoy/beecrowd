#include <stdio.h>
 
int main() {
 
    int a1,b1,a2,b2;
    float p1,p2;
    scanf("%d %d %f",&a1,&b1,&p1);
    scanf("%d %d %f",&a2,&b2,&p2);
    
    float t = (b1*p1)+(b2*p2);
    
    printf("VALOR A PAGAR: R$ %0.2f\n",t);
 
    return 0;
}