#include <stdio.h>

int main() {
    int totalSeconds, minutes, seconds;

    //초를 나타내는 한개의 정수를 입력 받음
    printf("Input the seconds: ");
    scanf("%d", &totalSeconds);

    //분:초를 각각 계산 
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // 계산한 값 표기 
    printf("The time is %d minutes : %d seconds\n", minutes, seconds);

    return 0; // Exit the program successfully
}