//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
void incrementArray(int *arr, int size) {
   for(int i = 0; i < size; i++) {
       (*(arr + i))++;
   }
}
int main() {
   int arr[5];
   for(int i = 0; i < 5; i++) {
       scanf("%d", &arr[i]);
   }
   incrementArray(arr, 5);
   for(int i = 0; i < 5; i++) {
       printf("%d ", arr[i]);
   }
   return 0;
}
