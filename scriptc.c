// First script 
#include <stdio.h>

main () {

    printf("*****************************************************************************************\n");
    printf("*************** Welcome to my first programming on language C ! *************************\n");
    printf("*****************************************************************************************\n");

    int x;
    int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int m = x * y;
  printf("A multiplicacao de %d por %d é igual a %d\n", x, y, m);
}
