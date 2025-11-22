//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}
void bubble_sort(int *arr, int len) {
   for(int i=0; i<len-1; i++) {
       for(int j=0; j<len-1-i; j++) {
           if(*(arr+j) > *(arr+j+1)) {
               swap(arr+j, arr+j+1);
           }
       }
   }
}
int main() {
   int arr[10];
   for(int i=0; i<10; i++) scanf("%d", arr+i);
   bubble_sort(arr, 10);
   for(int i=0; i<10; i++) printf("%d ", *(arr+i));
   return 0;
}
