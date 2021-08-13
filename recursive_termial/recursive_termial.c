#include <stdio.h>

// termial é o "fatorial com soma"
int recursive_termial(double n) {
  if (n == 0)
    return 0;
  else
    return n + recursive_termial(n - 1);
}

int main(void) {
  int n;

  printf("Digite o número:    ");
  scanf("%d", &n);

  int termial_result = recursive_termial(n);
  printf("O resultado do termial de %d é: %d\n", n, termial_result);

  return 0;
}