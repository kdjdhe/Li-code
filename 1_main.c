//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;
    *p += 10;
    printf("%d,%d\n", a, *p);
    return 0;
}
