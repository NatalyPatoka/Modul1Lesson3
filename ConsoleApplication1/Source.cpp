#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	/*printf("5 10\t 100t\n");
	printf("7 смn\t 1949 v\n");*/

	int y=0, x=0;
	printf("введите х: ");
	scanf("%d", &x);

	y = (7 * (x * x)) - (3 * x) + 6;
	printf("значение y = %d\n", y);
		

}