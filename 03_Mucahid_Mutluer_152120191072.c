#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
	int increment, skip, end;
	
	printf("Please insert three integers as incrementing value, number that program will skip and end point\n");
	printf("First incrementing value:\n");
	scanf_s("%d", &increment);
	printf("Then skipping value:\n");
	scanf_s("%d", &skip);
	printf("And lastly end value:\n");
	scanf_s("%d", &end);

	int i=0;
	
	for (i; i <= end; i = i + increment)
	{
		if (i != skip)
		{
			printf("%d\t", i);
		}
	}
	
	_getch();




}