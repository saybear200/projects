#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

long ft_calc(int s1, char s2, int s3)
{
    long i;

    i = 1;    
    if(s2 == '+')
        i = s1 + s3;
    if(s2 == 'x')
        i = s1 * s3;
    if(s2 == '/' && s3 != 0)
    {
        i = s1 / s3;
        
    }
    if(s2 == '-')
        i = s1 - s3;
    if(s2 == '!')
    {
        while(s1 > 0)
        {
            i = i * s1;
            s1--;
        }
    }
    if(s2 == '^')
    {
        while(s3 > 0)
        {
            i = i * s1;
            s3--;   
        }
    }
    if(s2 == 'v')
    {
        while(i < s1 / i)
        {
            i = i * 1;
            i++;
        }
    }
    return(i);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%ld\n", ft_calc(atoi(argv[1]), argv[2][0], atoi(argv[3])));
    return(0);
}