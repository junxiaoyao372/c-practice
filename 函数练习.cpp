#include<stdio.h>
#include<string.h>
#include<math.h>
/*
int jh(int i)
{
	if (i == 1)
		return 1;
	else 
		return i * jh(i - 1);
}
int main()
{
	int i;
	scanf_s("%d", &i);
	if (i <= 0)
	{
		printf("输入错误");
	}
	else
	{
	printf("%d\n", jh(i));
	}
	return 0;
}
*/

int fbnq(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fbnq(n - 1) + fbnq(n - 2);
}
int main()
{
	int n, j;
	scanf_s("%d", &n);
	for (j = 1; j <= n; j++)
	{
		printf(" % d", fbnq(j));
	}
	return 0;
}
/*
int shushu(char dj[])
{
	if (dj[0] == '\0')
		return 0;
	return 1 + shushu(dj + 1);
}
int main()
{
		char dj[100];
	gets_s(dj, 100);
	
	printf("%d", shushu(dj));
	return 0;
}
*/
/*
int shushu2(char dj2[])
{
	if (dj2[0] == '\0')
		return 0;
	return 1 + (shushu2(dj2 + 1));
}
int main()
{
	char dj2[100];
	gets_s(dj2, 100);
	printf("%d", shushu2(dj2));
	return 0;
}
*/
/*
void jxy(int n)
{
if (n == 0)
	return ;
printf("%d",n%10);
jxy(n / 10);
}
int main()
{
	int i;
	scanf_s("%d",&i);
	jxy(i);
	return 0;
}
*/