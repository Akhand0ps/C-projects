// #include<stdio.h>
// int main(){

//     int n;

//     do{
//         printf("Enter number: ");
//         scanf("%d",&n);
//         printf("%d\n",n);

//         if(n % 2 !=0){                      //multiple of 7 (n%7==0)
//             break;
//         }
        
//     }while(1);
//     printf("Thank you\n");

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==6){
//             continue; // used to skip from if and move further
//         }
//         printf("%d\n",i);
//     }


//     return 0;
// }

// #include<stdio.h>
// int main(){
//     // print odd number between 5 and 50

//     for(int i=5;i<=50;i++){
//         if(i%2 !=0){
//             printf("%d\n",i);
//         }
//     }


//     return 0;
// }
// #include<stdio.h>
// int main(){
//     //factor of n!
//     int n; 
//     int factor=1;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         factor *=i;
//     }
//     printf("final factorial: %d",factor);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     // print reverse of the table for a number n
    
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);

//     for(int i=10;i>=1;i--){
//         printf("%d\n",n*i);
//     }

    


//     return 0;
// }
// #include<stdio.h>
// int main(){
//     // calculate sum of all no between 5 and 50

    
//     int sum=0;
//     for(int i=5;i<=50;i++){
//         sum+=i;
       
//     }

//      printf("Sum: %d",sum);

//     return 0;
// }




#include<stdio.h>

int main(){
    
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    if(n%1==0){
        if(n%n==0){
            printf("Prime number Spotted!\n");
        }
    }
    else{
        printf("NOt a prime number");
    }
    
    
    
    
    
    return 0;
}