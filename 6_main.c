//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>

int main() {
    int arr[5];
    int i, j;
    for (i = 0; i < 5; i++) {
        while (1) {
            if (scanf("%d", &arr[i]) == 1 && arr[i] % 2 == 0) {
                break;  
            } else {
                while (getchar() != '\n');
            }
        }
    }
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    return 0;
}
