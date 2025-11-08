//202510125218
//qwertyuiop43796@outlook.com
//李小鹏
#include<stdio.h>
int sum(int a1, int an,int step)
{
	int i = 0;
	int result = 0;
	for (i = a1; i <= an; i = i + step)
	{
		result += i;
	}
	return result;
}
int main()
{
	int a = sum(1,100,1);
	printf("%d", a);
	return 0;
}
