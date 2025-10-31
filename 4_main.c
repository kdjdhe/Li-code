//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int i = 100;
    int a,b,c;
    while (i < 999)
    {
        i++;
        a = i /100;          
        b = (i / 10) % 10;    
        c = i % 10;           
        if (i == a*a*a + b*b*b + c*c*c){
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
