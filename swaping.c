#include<stdio.h>

int main(){

    int a, b;
    printf("Enter the First Number: ");

    scanf("%d\n", &a);

    printf("Enter the Second number: ");
    scanf("%d\n",&b);

    
    int temp = a;
    a = b;
    b = temp;

    printf("Swaped a= %d\n",a);
    printf("Swaped b= %d",b);

    return 0;
    
}