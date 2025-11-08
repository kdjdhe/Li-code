//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int product_array(int arr[], int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int sum_result = sum_array(arr, 5);
    int product_result = product_array(arr, 5);
    printf("%d %d\n", sum_result, product_result);
    return 0;
}

