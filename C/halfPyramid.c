#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,l,rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("the pyramid for alphabets is:\n");
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(j+65-1));
		}
		for(l=i-1;l>=1;l--)
		{
			printf("%c",(l+65-1));
		}
		printf("\n");
	}
	return 0;
}