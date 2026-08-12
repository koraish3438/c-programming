#include<stdio.h>
int main() {
    int N;
    printf("Enter the value for check Even or Odd : ");
    scanf("%d", &N);

    if(N % 2 == 0) {
        printf("The given value of N : %d is Even.", N);
    }
    else {
        printf("The given5 value of N : %d is Odd.", N);
    }

    return 0;
}