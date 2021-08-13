#include <stdio.h>

void recursive_desc_count(int n) {
  if (n == 0) {
    return;
  }
  printf("%d \n", n);
  recursive_desc_count(n-1);
}

int main(void) {
  int n;

  printf("Digite o número inicial:    ");
  scanf("%d", &n);

  recursive_desc_count(n);

  return 0;
}