#include <stdio.h>
 
int main() {
 
    int n,hour;
    float taka;
    
    scanf("%d %d %f",&n, &hour, &taka);
    
    float total = hour*taka;
    
    printf("NUMBER = %d\n",n);
    
    printf("SALARY = U$ %.2f\n",total);
 
    return 0;
}