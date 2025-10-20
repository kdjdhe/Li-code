//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int value;
    scanf("%d", &value); 
    if (value < 0 || value > 100)
    {
        printf("拜托0-100");
    }
    else{
        if (value >= 90)
        {
            printf("A\n");
        }
        else if (value >= 80)
        {
            printf("B\n");
        }
        else if (value >= 70)
        {
            printf("C\n");
        }
        else if (value >= 60)
        {
            printf("D\n");
        }
        else
        {
            printf("E\n");
        }
        
    }
    return 0;
}
