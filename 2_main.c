//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>

int main() {
   int arr[5];
   for(int i=0; i<5; i++) {
       scanf("%d", arr + i);
   }
   for(int i=0; i<5; i++) {
       *(arr + i) *= 2;
   }
   for(int i=0; i<5; i++) {
       printf("%d ", *(arr + i));
   }
   return 0;
}
