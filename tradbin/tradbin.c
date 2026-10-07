#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void tobin(char *str)
{
    int i = 0;
    while (str[i])
    {
        int bit = 7;
        while (bit >= 0) 
        {
            printf("%d", ((char)str[i] >> bit) & 1);
            bit--;
        }
        printf(" ");
        i++;
    }
    printf("\n");
}

int ifbin(char *str)
{
    int i = 0;
 
    while (str[i])
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != ' ')
            return (0);
        i++;
    }
    return (1);
}

void frombin(char *str)
{
    int i = 0;
    int n = 0;
    unsigned char c = 0;
 
    while (str[i])
    {
        if (str[i] != ' ')
        {
            c = (c << 1) | (str[i] - '0');
            n++;
            if (n == 8)
            {
                printf("%c", c);
                c = 0;
                n = 0;
            }
        }
        i++;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        if(ifbin(argv[1]))
            frombin(argv[1]);
        else
            tobin(argv[1]);
    }
    return(0);
}