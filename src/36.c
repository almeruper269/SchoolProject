#include <stdio.h>

void print_odd_numbers(int n) {
    for (int i = 1; i <= n; i += 2)
        printf("%d ", i);
}

int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 != 0)
        print_odd_numbers(num);
    else
        printf("This is an even number.\n");
    return 0;
}
