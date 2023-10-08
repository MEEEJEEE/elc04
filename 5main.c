#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int x;
	int b = 0; // 변수 b를 초기화

	printf("Input a number : ");
	scanf("%ui", &x);

	for (b=0; x !=0; x>>=1)
	{
		if (x & 1)
		{
			b++;
		}
	}

	printf("The result is : %i\n", b);
	return 0;
}