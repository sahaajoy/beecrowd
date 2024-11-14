#include <stdio.h>
#include <math.h>
 
int main() {
    
    char str[100];
    
    scanf("%[^\n]%*c",str);
 
    double s, sr;
    scanf("%lf %lf",&s,&sr);
    

    double t = s+(sr*0.15);

    //t = round(t)
    
    printf("TOTAL = R$ %0.2lf\n",t);
 
    return 0;
}