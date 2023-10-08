//사칙연산 계산기
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b;
	
	printf("Input two integers : ");
	
	// 입력값이 정수가 아닐때 에러 처리
	if (scanf("%i %i", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return EXIT_FAILURE;
    }
	
	printf("%i + %i = %i \n", a, b, a+b);
	printf("%i - %i = %i \n", a, b, a-b);
	printf("%i * %i = %i \n", a, b, a*b);
	
	// 분모가 0인 경우 에러 처리
	if (b != 0) {
		printf("%i / %i = %i \n", a, b, a/b);
		printf("%i %% %i = %i \n", a, b, a%b);
	} else {
		printf("Division by zero is not allowed.\n");
		return EXIT_FAILURE;
	}
	
	system("PAUSE");
	return 0;
}
