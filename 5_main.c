//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int arr[5];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];
    for (int i = 0; i < 5; i++)
    {if (i < 5)
    {
        printf("%d ", arr[i]);
    }
    else if (i == 5)
    {
        printf("%d",arr[i]);
    }
    }
    return 0;
}
