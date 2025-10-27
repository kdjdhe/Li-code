//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int in,i;
    scanf("%d", &in);
    for ( i = 2; i * i <=in; i++)
    {
        if (in % i == 0)
        {
            printf("密钥不安全，请重新输入\n");
            return 0;
        }
        else
        {
            printf("密钥安全，密码设置成功\n");
        }
        
    }
    return 0;
}
