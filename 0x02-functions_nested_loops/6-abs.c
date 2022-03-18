#include "main.h"
/**
 *_abs - absolute value of a number.
 *@n: input.
 *
 *Return: absolute value
 *
 */
int _abs(int n)
{
int valeurAbsolue;
if (n > 0)
{
valeurAbsolue = n;
return (valeurAbsolue);
}
else if (n == 0)
{
valeurAbsolue = 0;
return (valeurAbsolue);
}
else
{
valeurAbsolue = n * (-1);
return (valeurAbsolue);
}
}


