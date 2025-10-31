//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main()
{
    int a,b,c,i;
    int d = 0;
    for ( i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = (i/10)%10;
        c = i % 10;
        if (a*a*a + b*b*b + c*c*c == i)
        {
            if (d >0)
            {
                printf(" ");
            }
            printf("%d",i);
            d++;
        }
        
    }
    return 0;
}
