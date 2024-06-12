#include <stdio.h>

int
main ()
{
  int x, y;

  printf ("Digite dois valores inteiros: ");
  scanf ("%d%d", &x, &y);

  if (x > y)
    {
      int temp;

      temp = x;			//guardo o valor de x em temp.
      x = y;			//guardo o valor de y em x, já que y < x
      y = temp;			//atribuo o valor que está guardado em temp(valor de x) a y
    }

  printf ("Valores ordenados: %d %d\n", x, y);

  return 0;
}
