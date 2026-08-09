#include <stdio.h>

int main() {
    int year;

    printf("Enter the yera : ");
    scanf("%d", &year);

    // if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    //     printf("Leap Year\n");
    // } else {
    //     printf("Not a Leap Year\n");
    // }

    // if (year % 100 != 0 && year % 4 == 0) {
    //     printf("Leap Yera");
    // }
    // else if (year % 400 == 0) {
    //     printf("Leap Year");
    // }
    // else {
    //     printf("Not a Leap Year");
    // }

    if (year % 4 == 0) {
    
        if (year % 100 == 0) {
            
            if (year % 400 == 0) {
                printf("Leap Year");
            }
            else {
                printf("Not a Leap Year");
            }
            
        }
        else {
            printf("Leap Year");
        }
        
    }
    else {
        printf("Not a Leap Year");
    }


    return 0;
}