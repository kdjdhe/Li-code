//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include <stdio.h>
long long sum(int a1,int an,int step){
    int n =(an - a1 )/step + 1;
    return (long long)n * (a1 + an ) / 2;

}
int main(){
    long long result = sum(1，100,1);
    printf("%d",result);
    return 0 ;
}
