#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int input;
	int sec, min,hour;
	printf("Input second : ");
	scanf("%d", &input);
	
	//입력값이  음수일때 에러처리
	if (input < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
	sec = input%60;
	min = (input%3600)/60;
	hour = input/3600;
	
	printf("The time is %d : %d : %d\n", hour, min, sec);
	
	//종료
	printf("\n");
	printf("Press Enter to exit...");
    getchar(); 
	return 0;
}