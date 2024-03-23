#include<stdio.h>

int main(){

    int num1,num2;
    // printf("Enter your number1: %d\n",num1);
    // pritnf("Enter your number2: %d\n",num2);
    scanf("%d %d",&num1,&num2);

    int sum = num1+num2;
    int sub= num1-num2;
    int mul=num1*num2;
    float div=num1/num2;
    int rem=num1%num2;

    printf("Sum: %d\n",sum);
    printf("Sub: %d\n",sub);
    printf("Mul: %d\n",mul);
    printf("Div: %.2f\n",div);
    printf("Rem: %d\n",rem);










    return 0;
}