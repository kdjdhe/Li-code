//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
void reverse_array(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int length = 5;
    reverse_array(arr, length);
    print_array(arr, length);
    return 0;
}
