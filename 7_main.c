//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>

int main() {
    int record[5];  
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%d", &record[i]);
    }
    for (i = 4; i > 0; i--) {
        record[i] = record[i - 1];
    }
    record[0] = 0;
    for (i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", record[i]);
    }
    printf("\n");
    
    return 0;
}
