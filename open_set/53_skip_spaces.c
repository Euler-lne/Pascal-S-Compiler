#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_arr[100];
int main_i;
int main_j;
int main_sum;
int main_t;
int main()
{
main_t = 5;
main_i = 0;
main_sum = 0;
for(main_j = 0;
main_j <= main_t - 1;
main_j++)
{
{
main_i = main_i + 1;
main_arr[main_j-(0)] = main_i;
}
}
for(main_j = 0;
main_j <= main_i - 1;
main_j++)
{
{
main_sum = main_sum + main_arr[main_j-(0)];
}
}
printf("%d", main_sum % 79);
}
