#include <stdio.h>

int main() {
  /* code */
  int g;
  g = getchar();
  while (g != EOF){
    putchar(g);
    g = getchar();
  }

  printf("%d\n", g );
  return 0;
}
