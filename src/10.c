#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 25;
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s, and you are %d years old.\n", name, age);
    return 0;
}
