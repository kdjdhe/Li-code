//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main()
{   int i = 2;
    int num;
    scanf("%d", &num);
    while (num >50 || num <1)
    {
        return 1;
    }
    while (num == 1)
    {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }
    while (i * i <= num)
    {
        if (num % i == 0)
        {
            printf("密钥不安全，请重新输入") ;
            return 0 ;
        }
        i++;
        
    }
    printf ("密钥安全，密码设置成功");
    
    
    return 0;
}
