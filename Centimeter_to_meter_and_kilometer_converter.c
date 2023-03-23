#include <stdio.h>
int main(){
    float cm;
    float km,m;
    scanf("%f",&cm);
    km=cm/100000;
    m=cm/100;
    printf("%.2f %.2f",m,km);


    return 0;

}