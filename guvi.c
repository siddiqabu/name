#include<stdio.h>
#include<conio.h>
int main()
{
	char c[100];
	scanf("%s",&c);
	int i,s;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
