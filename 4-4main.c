#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    int year;

    // 년도를 정수로 입력 받음 
    printf("Input the year: ");
    scanf("%i", &year);

    // 년도가 4로 나누어 떨어지면서 100으로 나누어떨어지지 않거나 
	// 400으로 나누어 떨어지면 윤년임
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // 윤년일떄 
        printf("%i is leap year\n", year);
    } else {
        // 윤년이 아닐떄
        printf("%i is not leap year\n", year);
    }
    system("PAUSE");
    return 0;
}