#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_c1[25];
int main_c2[25];
int main_i;
int main_j;
int main_len1;
int main_len2;
int main_mult1[20];
int main_mult2[20];
int main_n;
int main_result[40];
int main_t;
int main_temp;
int main()
{
main_len1 = main_len;
main_len2 = main_len;
for(main_i = 0;
main_i <= 8;
main_i++)
{
main_mult1[main_i-(0)] = main_i + 1;
}
main_mult1[9-(0)] = 0;
for(main_i = 10;
main_i <= 18;
main_i++)
{
main_mult1[main_i-(0)] = main_i - 9;
}
main_mult1[19-(0)] = 0;
main_mult2[0-(0)] = 2;
main_mult2[1-(0)] = 3;
main_mult2[2-(0)] = 4;
main_mult2[3-(0)] = 2;
main_mult2[4-(0)] = 5;
main_mult2[5-(0)] = 7;
main_mult2[6-(0)] = 9;
main_mult2[7-(0)] = 9;
main_mult2[8-(0)] = 0;
main_mult2[9-(0)] = 1;
main_mult2[10-(0)] = 9;
main_mult2[11-(0)] = 8;
main_mult2[12-(0)] = 7;
main_mult2[13-(0)] = 6;
main_mult2[14-(0)] = 4;
main_mult2[15-(0)] = 3;
main_mult2[16-(0)] = 2;
main_mult2[17-(0)] = 1;
main_mult2[18-(0)] = 2;
main_mult2[19-(0)] = 2;
for(main_i = 0;
main_i <= main_len1 - 1;
main_i++)
{
main_c1[main_i-(0)] = main_mult1[main_i-(0)];
}
for(main_i = 0;
main_i <= main_len2 - 1;
main_i++)
{
main_c2[main_i-(0)] = main_mult2[main_i-(0)];
}
main_n = main_len1 + main_len2 - 1;
for(main_i = 0;
main_i <= main_n;
main_i++)
{
main_result[main_i-(0)] = 0;
}
main_temp = 0;
for(main_i = 0;
main_i <= main_len2 - 1;
main_i++)
{
{
main_t = main_c2[main_len2 - 1 - main_i-(0)];
for(main_j = 0;
main_j <= main_len1 - 1;
main_j++)
{
{
main_temp = main_result[main_n-(0)] + main_t * main_c1[main_len1 - 1 - main_j-(0)];
if (main_temp >= 10)
{
{
main_result[main_n-(0)] = main_temp;
main_result[main_n - 1-(0)] = main_result[main_n - 1-(0)] + main_temp / 10;
}
}
else
{
{
main_result[main_n-(0)] = main_temp;
}
}
main_n = main_n - 1;
}
}
main_n = main_n + main_len1 - 1;
}
}
if (main_result[0-(0)] != 0)
;
for(main_i = 1;
main_i <= (main_len1 + main_len2 - 1);
main_i++)
{
}
}
