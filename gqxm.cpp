/*
#include<stdio.h>
#include<math.h>
#include <iostream>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <=i; j++)
        {
            printf("%d*%d=%-3d  ", j, i, j*i);
         }
         printf("\n");
    }
   
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
#include <iostream>
int main()
{
    int arr[3];
    int sum = 0;
    for (int i = 0;i < 3;i++)
    {
        scanf_s("%d",&arr[i]);
    }
    for (int i = 0;i < 3;i++)
    {
        sum += arr[i];
}
    printf("%d\n", sum);
return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS    // 让VS闭嘴
#include<stdio.h>
#include<math.h>
#include <string.h>
int main()
{
    char a[10] = "123";
    char b[10] = "123";
    printf("%d\n", strcmp(a, b));
    strcat(a, b);
    printf("%d\n", strcmp(a, b));
    printf("%s\n", a);
    return 0;
}
*/