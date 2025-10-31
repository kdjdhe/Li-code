//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int in,i;
    scanf("%d", &in);
    if (in > 50 || in < 1 )
    {
        return 1;
    }
    else{
        if (in == 1) {
            printf("密钥不安全，请重新输入\n");
            return 0;
        }
        int is_prime = 1;
        for ( i = 2; i * i <= in; i++)
        {
            if (in % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            printf("密钥安全，密码设置成功\n");
        }
        else
        {
            printf("密钥不安全，请重新输入\n");
        }
    }
    
    
    return 0;
}
