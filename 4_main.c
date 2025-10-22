//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %c",&a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
        printf("可以组成三角形\n");
    else
        printf("不能组成三角形\n");
    return 0;
}
