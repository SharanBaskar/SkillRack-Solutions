#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Check if either number is even
    if ((num1 % 2 == 0) || (num2 % 2 == 0)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
