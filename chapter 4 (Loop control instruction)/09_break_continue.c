#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 6)
        {
            break; /*The loop will exit*/

            //   continue; This will only skip iteration 6 !
        }

        printf("i is %d\n", i);
    }

    printf("for loop is done!");
    return 0;
}