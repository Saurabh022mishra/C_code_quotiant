#include<stdio.h>
int main(){
    int radius;
    float area,diameater;
    scanf("%d",&radius);
    area=3.14*radius*radius;
    diameater=2*radius;
    printf("%.2f %.2f",diameater,area);
    printf("Finish");
    return 0;
}