#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_g;
int main_i;
int main_func_(int n)
{
main_g = main_g + n;
printf("%d", main_g);
return main_g;
}
int main()
{
main_i = 11;
if ((main_i > 10) and (main_func_(main_i) != 0))
{
main_i = 1;
}
else
{
main_i = 0;
}
printf("%d", main_i);
main_i = 10;
if ((main_i > 11) and (main_func_(main_i) != 0))
{
main_i = 1;
}
else
{
main_i = 0;
}
printf("%d", main_i);
main_i = 100;
if ((main_i <= 99) or (main_func_(main_i) != 0))
{
main_i = 1;
}
else
{
main_i = 0;
}
printf("%d", main_i);
main_i = 99;
if ((main_i <= 100) or (main_func_(main_i) != 0))
{
main_i = 1;
}
else
{
main_i = 0;
}
if ((main_func_(99) == 0) and (main_func_(100) != 0))
{
main_i = 1;
}
else
{
main_i = 0;
}
}
