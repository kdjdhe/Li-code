//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int main() {
    int a, b, sum;
    int mtx[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            if (j < 2)
            {
                printf("%d ", mtx[j][i]);
            }
            else
            {
                printf("%d", mtx[j][i]);
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
