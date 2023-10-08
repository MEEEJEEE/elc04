
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b;
	
	printf("Input two integers : ");
	scanf("%i %i", &a, &b);
	
	printf("%i + %i = %i \n", a, b, a+b);
	printf("%i - %i = %i \n", a, b, a-b);
	printf("%i * %i = %i \n", a, b, a*b);
	printf("%i / %i = %i \n", a, b, a/b);
	printf("%i %% %i = %i \n", a, b, a%b);
	
	system("PAUSE");
	return 0;
}