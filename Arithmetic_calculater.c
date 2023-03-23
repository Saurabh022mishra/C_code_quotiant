/*Alisha is very weak in mathematical calculations and she is always afraid to do them. Help her to make a calculator.
 A calculator should accept two numbers and one arithmetic operator (+, -, %, / or *). And based on the operator perform calculation.
But if user enters other than arithmetic operator then display a message Enter valid arithmetic operator*/
# include <stdio.h>
int main(){
    int n1,n2;
    char op;
    scanf("%d %d %c",&n1,&n2,&op);
    switch (op)
    {
    case '+':
    printf("%d",n1+n2);
        break;
    case '-':
    printf("%d",n1-n2);
        break;
        case '*':
    printf("%d",n1*n2);
        break;
        case '/':
    printf("%d",n1/n2);
        break;
        case '%':
    printf("%d",n1%n2);
        break;
    default:
    printf("Enter valid arithmetic operator");
        break;
    }
    return 0;
}