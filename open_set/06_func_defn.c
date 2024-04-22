#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_a;
int main_b;
int main_func_(int p)
{
p = p - 1;
return p;
}
int main()
{
main_a = 10;
main_b = main_func_(main_a);
printf("%d", main_b);
}
