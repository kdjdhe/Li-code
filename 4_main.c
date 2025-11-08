//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
long long power(int a, int b) {
    long long result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    long long sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += power(i, 2);
    }
    printf("%d\n", sum); 
    return 0;
}

