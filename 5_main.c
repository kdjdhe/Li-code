//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
int sum(int a1,int an,int step){
    int n =(an - a1 )/step + 1;
    int temp = n * (a1 + an ) / 2;
    return temp ;
}
int main(){
    int  result = sum(1，100,1);
    printf("%d",result);
    return 0 ;
}
