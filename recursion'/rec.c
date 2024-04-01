// #include<Stdio.h>
// #include<math.h>

// int main(){
//     int x,y;
//     printf("Enter num: ");
//     scanf("%d",&x);

//     y = sqrt(x);
//     printf("Squareroot: %d",y);

    
// }

// #include<stdio.h>
// //function declaration
//  void printhello();

//  int main(){

//     printhello();
//     printhello();
//     printhello();

//     return 0;
//  }
 
//  //function defination

//  void printhello(){
//     printf("Hello\n");
//     printf("What's Your Name\n");
//  }

//write two func to print Hello and good bye 

// #include<stdio.h>

// void printhello();
// void printgb();

// int main(){
    
//     printhello();
//     printgb();


//     return 0;
// }

// void printhello(){
//     printf("Hello\n");
// }
// void printgb(){
//     printf("Good bye\n");
// }

//write func that prints namaste if indian and bonjour for french 

// #include<stdio.h>

// void namaste();
// void bonjour();

// int main(){
//     printf("Enter i for india & f for french: ");
//     char ch;
//     scanf("%c",&ch);
//     if(ch=='i'){
//         namaste();
//     }
//     else{
//         bonjour();
//     }

//     return 0;
// }


// void namaste(){
//     printf("Namaste!\n");
// }
// void bonjour(){

//     printf("Bonjour\n");
// }


// #include<stdio.h>

// int sum(int a , int b);
// int main() {
//     int a, b;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     printf("Enter a number: ");
//     scanf("%d", &b);

//     int s = sum(a, b); // Corrected function call
//     printf("Sum is: %d\n", s);

//     return 0;
// }
// int sum(int x,int y){
//     return x+y;
// }



// #include<stdio.h>

// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     printf("Enter number: ");
//     scanf("%d",&a);
//     printf("Enter number: ");
//     scanf("%d",&b);
//     int s= sum(a,b);
//     printf("sum is: %d\n",s);
//     s=sum(a,b);
//     printf("sum: %d",s);
//     return 0;
// }

#include<stdio.h>
void increment(int num){
    num++;
    printf("Inside Function: %d\n",num);
}
int main(){
    int value =5;
    increment(value);
    printf("Outside function: %d\n",value);
    return 0;
}