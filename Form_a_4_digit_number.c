#include <stdio.h>
int main(){
    int d1,d2,d3,d4,number;
    scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
    number=d1*1000+d2*100+d3*10+d4;
    printf("%d",number);
    return 0;
}