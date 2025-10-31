//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int i = 100;
    int a,b,c;
    int d = 0;
    while (i < 999)
    {
        i++;
        a = i /100;          
        b = (i / 10) % 10;    
        c = i % 10;           
        if (i == a*a*a + b*b*b + c*c*c){
            if (d > 0)
            {
                printf(" ");
            }
            printf("%d", i);
            d++;
        }
        
    }
    
    return 0;
}
