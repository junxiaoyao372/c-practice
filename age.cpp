#include <stdio.h>
#include<math.h>
int main()
{
int age = 0;
scanf_s("%d",&age);
if (age >= 18 && age <= 40)
printf("允许进入");
else if (age < 18)
	printf("在等%d年吧,小妹妹",18-age);
else
printf("兄弟要节制啊，进去爽吧");
return 0;
}