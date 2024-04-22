#include <stdio.h>
#define bool int
#define true 1
#define false 0
int arrayaddition_a0[3];
int arrayaddition_a1[3];
int arrayaddition_a2[3];
int arrayaddition_b0[3];
int arrayaddition_b1[3];
int arrayaddition_b2[3];
int arrayaddition_c0[3];
int arrayaddition_c1[3];
int arrayaddition_c2[3];
int arrayaddition_i;
int arrayaddition_l;
int arrayaddition_m;
int arrayaddition_n;
int arrayaddition_x;
int arrayaddition_add_i;
int arrayaddition_add_()
{
for(arrayaddition_add_i = 0;
arrayaddition_add_i <= arrayaddition_m - 1;
arrayaddition_add_i++)
{
{
arrayaddition_c0[arrayaddition_add_i-(0)] = arrayaddition_a0[arrayaddition_add_i-(0)] + arrayaddition_b0[arrayaddition_add_i-(0)];
arrayaddition_c1[arrayaddition_add_i-(0)] = arrayaddition_a1[arrayaddition_add_i-(0)] + arrayaddition_b1[arrayaddition_add_i-(0)];
arrayaddition_c2[arrayaddition_add_i-(0)] = arrayaddition_a2[arrayaddition_add_i-(0)] + arrayaddition_b2[arrayaddition_add_i-(0)];
}
}
return 0;
}
int main()
{
arrayaddition_n = 3;
arrayaddition_m = 3;
arrayaddition_l = 3;
for(arrayaddition_i = 0;
arrayaddition_i <= arrayaddition_m - 1;
arrayaddition_i++)
{
{
arrayaddition_a0[arrayaddition_i-(0)] = arrayaddition_i;
arrayaddition_a1[arrayaddition_i-(0)] = arrayaddition_i;
arrayaddition_a2[arrayaddition_i-(0)] = arrayaddition_i;
arrayaddition_b0[arrayaddition_i-(0)] = arrayaddition_i;
arrayaddition_b1[arrayaddition_i-(0)] = arrayaddition_i;
arrayaddition_b2[arrayaddition_i-(0)] = arrayaddition_i;
}
}
arrayaddition_add_();
for(arrayaddition_i = 0;
arrayaddition_i <= arrayaddition_n - 1;
arrayaddition_i++)
{
{
arrayaddition_x = arrayaddition_c0[arrayaddition_i-(0)];
printf("%d", arrayaddition_x);
}
}
for(arrayaddition_i = 0;
arrayaddition_i <= arrayaddition_n - 1;
arrayaddition_i++)
{
{
arrayaddition_x = arrayaddition_c1[arrayaddition_i-(0)];
printf("%d", arrayaddition_x);
}
}
for(arrayaddition_i = 0;
arrayaddition_i <= arrayaddition_n - 1;
arrayaddition_i++)
{
{
arrayaddition_x = arrayaddition_c2[arrayaddition_i-(0)];
printf("%d", arrayaddition_x);
}
}
}
