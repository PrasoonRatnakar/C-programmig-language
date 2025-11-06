/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.*/


// For Do While Loop !


/*#include <stdio.h>
int main()
{
int i = 1;
int sum = 0;

do{
    sum +=i;
    i++;

}while(i<=10);

printf("The Sum of First 10 Natural Numbers is %d\n", sum);
    
    return 0;
}*/




// FOR LOOP !

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("The Sum of First 10 Natural Numbers is %d\n", sum);
    return 0;
}