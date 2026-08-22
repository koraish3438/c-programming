#include <stdio.h>
int main() {
    int n, num;
    int even = 0, odd = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        
        if(num % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }5
    }

    printf("Even : %d\n", even);
    printf("Odd : %d", odd);

    return 0;
}