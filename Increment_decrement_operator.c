# include <stdio.h>
int main(){
    int a=10, b=15;
    int c=a++ + --a + --b - b-- - ++a;
    printf("%d",c);
}