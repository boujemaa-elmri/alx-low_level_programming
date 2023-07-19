 #include "main.h"
 /**
 * main - function that computes the absolute value of an integer.
 *Returns :absolute value
 */
int print_last_digit(int n)
{
  int l;
  l=n % 10;
  if(l < 0 )
  {
    _putchar(-l + 48);
    return (-l);  
  }
  else
  {
    _putchar(-l + 48);
    return (l);  
  }
  
}

