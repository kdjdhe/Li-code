//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main()
{   int i = 1;
    int j;
    scanf("%d", &j);
    while (j < 1 || j > 50)
    {
        return 1;
    }
    while (i <= 50 || i >= 1)
    {
        i++;
        if (j%i == 0)
        {
            printf("密钥不安全，请重新输入\n");
            break;
        }
        else
        {
            printf("密钥安全，密码设置成功\n");
            break;
        }
        
    }
    return 0;
}
