// a program which converts decimal numbers to BINARY / OCTAL / HEXADECIMAL

#include <stdlib.h>
#include <stdio.h>

void show_array(int your_array[], int i); // change the name of the function (clean code goal)
int main(void)
{
    int init_number = 0, base;
    // allocate a memory of 20*4 = 80 BYTE in HEAP segement of the memory
    int *new_number = (int*) malloc(20 * sizeof(int));

    // input initial decimal number
    scanf("%d", &init_number);

    // input the base of numbers system you want to convert to (2/8/16)
    do
    {
        printf("you want to convert to : 2 binary / 8 octal / 16 hexa-decimal\n");
        scanf("%d", &base);
    } while(base != 2 && base != 8 && base != 16);

    // declare a variable for the quotient
    int quotient = init_number; // =  init_number / base;
    // declare an iterable variable for saving your new number
    int i = 0;
    // start the devision for each base
    switch(base)
    {
        case 2:
            while(quotient != 0) // 50
            {
                new_number[i] = quotient % 2;
                quotient/=2;
                i++;
            }
            show_array(new_number, i);
        break;

        case 8:
            while(quotient != 0) // 50
            {
                new_number[i] = quotient % 8;
                quotient/=8;
                i++;
            }
            show_array(new_number, i);
        break;

        case 16:
            while(quotient != 0) // 50
            {
                new_number[i] = quotient % 16;
                quotient/=16;
                i++;
            }
            show_array(new_number, i);
        break;

        default:
            printf("blabla`\n");
        break;
    }
        // de-allocate the heap memory before the return statement is reached (else the heap's allocated memory stays)
    free(new_number);
    return 0;

}
void show_array(int your_array[], int i)
{
    for(i ; i >= 0 ; i--)
    {
        if(your_array[i] > 9)
        {
            switch(your_array[i])
            {
            case 10:
                printf("A");
            break;
            case 11:
                printf("B");
            break;
            case 12:
                printf("C");
            break;
            case 13:
                printf("D");
            break;
            case 14:
                printf("E");
            break;
            case 15:
                printf("F");
            break;
            default:
            break;
            }
        }
        else
        printf("%d", your_array[i]);
    }
}
