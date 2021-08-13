#include <stdio.h>

double recursive_pow(double base, int exponent) {
  if (exponent == 0)
    return 1;
  else
    return base * recursive_pow(base, exponent - 1);
}

int main(void) {
  double base;
  int exponent;

  printf("Digite o número da base:    ");
  scanf("%lf", &base);

  printf("Digite o número do expoente:    ");
  scanf("%d", &exponent);

  double pow_result = recursive_pow(base, exponent);
  printf("O resultado é: %.2lf\n", pow_result);

  return 0;
}