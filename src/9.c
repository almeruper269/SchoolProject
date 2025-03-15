
#include <stdio.h>

int main() {
  int age = 25;
  char name[] = "John Doe";

  if (age >= 18) {
    printf("Hello %s, you are eligible to vote.\n", name);
  } else {
    printf("Sorry %s, you are not eligible to vote yet.", name);
  }

  return 0;
}