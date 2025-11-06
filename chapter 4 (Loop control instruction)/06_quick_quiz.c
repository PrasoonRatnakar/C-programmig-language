#include <stdio.h>

int main(){
    /*Write a program to print first ‘n’ natural numbers using for loop*/
    int n , i = 1;
    scanf("%d", &n);

    do{
        printf("%d \n" , i);
        i++;
    } while (i<=n);

    return 0;
}