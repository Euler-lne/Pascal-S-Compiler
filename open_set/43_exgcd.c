#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_a;
int main_b;
int main_x[1];
int main_y[1];
int main_exgcd_r;
int main_exgcd_t;
int main_exgcd_(int a, int b, int *x, int *y)
{
if (b == 0)
{
{
(*x) = 1;
(*y) = 0;
return a;
}
}
else
{
{
main_exgcd_r = main_exgcd_(b, a % b, (*x), (*y));
main_exgcd_t = (*x);
(*x) = (*y);
(*y) = (main_exgcd_t - (a / b) * (*y));
return main_exgcd_r;
}
}
}
int main()
{
main_a = 7;
main_b = 15;
main_x[0-(0)] = 1;
main_y[0-(0)] = 1;
main_exgcd_(main_a, main_b, main_x[0-(0)], main_y[0-(0)]);
main_x[0-(0)] = ((main_x[0-(0)] % main_b) + main_b) % main_b;
printf("%d", main_x[0-(0)]);
}
