#include<stdio.h>

int main(){

    // print table of a number

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        int mul=n*i;
           printf("%d\n",mul);

    }
    




    return 0;
}