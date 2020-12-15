/******************************************************************************

                        Check password for complexity

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

void checkPassword (char input[10], int inputSize)
{
    int upper = 0;
    int lower = 0;
    int digit = 0;

    for (int i = 0; i <= inputSize; i++)
    {
        if ( (isupper(input[i])))
            {
               upper = 1;
            }
        if ( (islower(input[i])))
            {
               lower = 1;
            }

        if ( (isdigit(input[i])))
            {
               digit = 1;
            }
    }

    if (upper == 1 && lower == 1 && digit == 1)
    {
        return;
    }
    else
    {
        printf("Repeat password!\n");
        exit(1);
    }
    
}

int main()
{
    char password[10];

    printf("Enter the password: ");
    scanf("%s", password);

    int inputLength = strlen(password);

    if (inputLength >= 10)
    {
        printf("Too many characters!\n");
        return 1;
    }

    checkPassword(password, inputLength);

    printf ("Password set!\n");
    
    return 0;
        
}
