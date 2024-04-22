#include <stdio.h>
#define bool int
#define true 1
#define false 0
int subtraction_a0[3];
int subtraction_a1[3];
int subtraction_a2[3];
int subtraction_b0[3];
int subtraction_b1[3];
int subtraction_b2[3];
int subtraction_c0[6];
int subtraction_c1[3];
int subtraction_c2[3];
int subtraction_i;
int subtraction_l;
int subtraction_m;
int subtraction_n;
int subtraction_x;
int subtraction_sub_()
{
for(subtraction_i = 0;
subtraction_i <= 2;
subtraction_i++)
{
{
subtraction_c0[subtraction_i-(0)] = subtraction_a0[subtraction_i-(0)] - subtraction_b0[subtraction_i-(0)];
subtraction_c1[subtraction_i-(0)] = subtraction_a1[subtraction_i-(0)] - subtraction_b1[subtraction_i-(0)];
subtraction_c2[subtraction_i-(0)] = subtraction_a2[subtraction_i-(0)] - subtraction_b2[subtraction_i-(0)];
}
}
return 0;
}
int main()
{
subtraction_n = 3;
subtraction_m = 3;
subtraction_l = 3;
for(subtraction_i = 0;
subtraction_i <= 2;
subtraction_i++)
{
{
subtraction_a0[subtraction_i-(0)] = subtraction_i;
subtraction_a1[subtraction_i-(0)] = subtraction_i;
subtraction_a2[subtraction_i-(0)] = subtraction_i;
subtraction_b0[subtraction_i-(0)] = subtraction_i;
subtraction_b1[subtraction_i-(0)] = subtraction_i;
subtraction_b2[subtraction_i-(0)] = subtraction_i;
}
}
subtraction_sub_();
for(subtraction_i = 0;
subtraction_i <= 2;
subtraction_i++)
{
{
subtraction_x = subtraction_c0[subtraction_i-(0)];
printf("%d", subtraction_x);
}
}
for(subtraction_i = 0;
subtraction_i <= 2;
subtraction_i++)
{
{
subtraction_x = subtraction_c1[subtraction_i-(0)];
printf("%d", subtraction_x);
}
}
for(subtraction_i = 0;
subtraction_i <= 2;
subtraction_i++)
{
{
subtraction_x = subtraction_c2[subtraction_i-(0)];
printf("%d", subtraction_x);
}
}
}
