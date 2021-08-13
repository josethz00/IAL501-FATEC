#include <stdio.h>

void recursive_asc_count(int n) {
  if (n == 0) {
    return;
  }
  recursive_asc_count(n-1);
  printf("%d \n", n);
}

int main(void) {
  int n;

  printf("Digite o número inicial:    ");
  scanf("%d", &n);

  recursive_asc_count(n);

  return 0;
}