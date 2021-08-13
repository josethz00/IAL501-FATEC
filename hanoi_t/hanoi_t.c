#include <stdio.h>

void make_hanoi_t(int nDisks, char origin, char aux, char destiny) {
  if (nDisks == 0)
    return;
  make_hanoi_t(nDisks - 1, origin, destiny, aux);
  printf("%c ---> %c\n", origin, destiny);
  make_hanoi_t(nDisks - 1, aux, origin, destiny);
}

int main(void) {
  int nDisks;
  printf("Digite o número de discos que deseja:    ");
  scanf("%d", &nDisks);

  make_hanoi_t(nDisks, 'A', 'B', 'C');
  return 0;
}