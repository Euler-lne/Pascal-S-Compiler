#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_arr[6];
int main_i;
int main_sum;
int main()
{
main_arr[0-(0)] = 1;
main_arr[1-(0)] = 2;
main_arr[2-(0)] = 33;
main_arr[3-(0)] = 4;
main_arr[4-(0)] = 5;
main_arr[5-(0)] = 6;
main_sum = 0;
for(main_i = 0;
main_i <= 5;
main_i++)
{
{
main_sum = main_sum + main_arr[main_i-(0)];
}
}
printf("%d", main_sum);
}
