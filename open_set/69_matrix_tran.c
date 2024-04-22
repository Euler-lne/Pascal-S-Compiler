#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_a0[3];
int main_a1[3];
int main_a2[3];
int main_b0[3];
int main_b1[3];
int main_b2[3];
int main_c0[3];
int main_c1[3];
int main_c2[3];
int main_i;
int main_l;
int main_m;
int main_n;
int main_x;
int main_tran_i;
int main_tran_()
{
for(main_tran_i = 0;
main_tran_i <= main_m - 1;
main_tran_i++)
{
{
main_c1[2-(0)] = main_a2[1-(0)];
main_c2[1-(0)] = main_a1[2-(0)];
main_c0[1-(0)] = main_a1[0-(0)];
main_c0[2-(0)] = main_a2[0-(0)];
main_c1[0-(0)] = main_a0[1-(0)];
main_c2[0-(0)] = main_a0[2-(0)];
main_c1[1-(0)] = main_a1[1-(0)];
main_c2[2-(0)] = main_a2[2-(0)];
main_c0[0-(0)] = main_a0[0-(0)];
}
}
return 0;
}
int main()
{
main_n = 3;
main_m = 3;
main_l = 3;
for(main_i = 0;
main_i <= main_m - 1;
main_i++)
{
{
main_a0[main_i-(0)] = main_i;
main_a1[main_i-(0)] = main_i;
main_a2[main_i-(0)] = main_i;
main_b0[main_i-(0)] = main_i;
main_b1[main_i-(0)] = main_i;
main_b2[main_i-(0)] = main_i;
}
}
main_tran_();
for(main_i = 0;
main_i <= main_n - 1;
main_i++)
{
{
printf("%d", main_c0[main_i-(0)]);
}
}
for(main_i = 0;
main_i <= main_n - 1;
main_i++)
{
{
printf("%d", main_c1[main_i-(0)]);
}
}
for(main_i = 0;
main_i <= main_n - 1;
main_i++)
{
{
printf("%d", main_c2[main_i-(0)]);
}
}
}
