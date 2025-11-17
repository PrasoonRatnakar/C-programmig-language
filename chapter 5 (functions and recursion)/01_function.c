#include <stdio.h>

int sum(int , int);                      //FUNCTION PROTOTYPE

int sum(int x , int y){                  //FUNCTION DEFINITION
printf("The sum is %d\n", x+y);
return x+y;
}


int main (){

int a = 1;
int b = 2;

//  int c = a + b;
 // printf("The sum is %d\n", c);
 
 sum (a,b);                              //FUNCTION CALL 


int a2 = 8;
int b2 = 9;

sum(a2,b2);


int a3 =4;
int b3 =5;

sum(a3,b3);

    return 0;
}