#include<stdio.h>

int main(){

    int a, b;
    printf("Value of a: ");

    scanf("%d", &a);

    printf("Value of b: ");
    scanf("%d",&b);

    
    int temp = a;
    a = b;
    b = temp;

    printf("Swaped a= %d\n",a);
    printf("Swaped b= %d",b);

    return 0;
    
}