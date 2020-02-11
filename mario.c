#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height; 
    int space;

    //this makes sure the number is 1-8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //line is what level is being printed
    for (int line = 0; line < height; line++)
    {
        //this prints the spaces 
        for (space = 1; space < height - line; space++)
        {
            printf(" ");
        }
        //this prints the hashes
        for (int hash = 0; hash <= height - (height - line); hash++)
        {
            printf("#");
            //this puts a line break after the last hash
            if (hash == height - (height - line))
            {
                printf("\n");
            }
        }
 
    }

}
