#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_a[61][67];
int main_b[53][59];
int main_ret;
int main_func_index;
int main_func_(int aa, int c, int e, int f, int h, int i)
{
main_func_index = 0;
while((main_func_index < 10))
{
{
printf("%d", main_b[aa-(0)][main_func_index-(0)]);
main_func_index = main_func_index + 1;
}
}
printf("%d", main_a[17-(0)][c-(0)]);
while((i < 10))
{
{
main_b[6-(0)][i-(0)] = h * 128875 % 3724;
i = i + 1;
h = h + 7;
}
}
return e + f;
}
int main()
{
main_a[17-(0)][1-(0)] = 6;
main_a[17-(0)][3-(0)] = 7;
main_a[17-(0)][4-(0)] = 4;
main_a[17-(0)][7-(0)] = 9;
main_a[17-(0)][11-(0)] = 11;
main_b[6-(0)][1-(0)] = 1;
main_b[6-(0)][2-(0)] = 2;
main_b[6-(0)][3-(0)] = 3;
main_b[6-(0)][9-(0)] = 9;
main_ret = main_func_(main_a[17-(0)][1-(0)], main_a[17-(0)][3-(0)], main_b[6-(0)][3-(0)], main_b[6-(0)][0-(0)], main_b[34-(0)][4-(0)], main_b[51-(0)][18-(0)]) * 3;
printf("%d", main_ret);
}
