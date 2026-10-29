// Prime check.

#include <stdio.h>
int main() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        flag = 1;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1) {
        printf("%d is not a prime number.", num);
    } else {
        printf("%d is a prime number.", num);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.", num);
    } else {
        printf("%d is odd.", num);
    }
    return 0;
}
