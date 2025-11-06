/*Write a program to calculate the factorial of a given number using a for loop*/

// factorial of 8 is = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8



#include <stdio.h>

int main(){
    int product = 1;
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
printf ("The Fatocial is %d" , product);

    return 0;
}