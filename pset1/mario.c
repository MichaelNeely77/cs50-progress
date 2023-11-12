#include <cs50.h>
#include <stdio.h>


int get_size(void);
void print_grid(int size);

int main(void) 
{
    // Get size of grid
    // int n;
    // do
    // {
    //     n = get_int("Size: ");
    // }
    // while (n < 1);
    int n = get_size();

    //Prins grid of bricks
//    for (int i = 0; i< n; i++) 
//    {
//         for (int j = 0; j < n; j++)
//          {
//             printf("#");
//         }
//         printf("\n");
//    }
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    return n;
}

void print_grid(int size)
{
    for(int i =0; i< size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            printf("#");
        }
        printf("\n");
    }
}