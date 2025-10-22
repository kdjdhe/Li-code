//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int a,b;
    char op; 
    scanf("%d %d %c",&a, &b, &op);
    switch (op){
    case '+':
        printf("%d", a + b);
        break;
    
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        if(b != 0)
            printf("%d", a / b);
        else
            printf("重修小学二年级");
        break;
    default:
        printf("重修小学二年级");
    }
    ;
    return 0;
}
