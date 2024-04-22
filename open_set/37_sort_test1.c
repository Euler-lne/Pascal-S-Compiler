#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_arr[10];
int main_i;
int main_n;
int main_bubblesort_i;
int main_bubblesort_j;
int main_bubblesort_tmp;
int main_bubblesort_()
{
for(main_bubblesort_i = 0;
main_bubblesort_i <= main_n - 2;
main_bubblesort_i++)
{
{
for(main_bubblesort_j = 0;
main_bubblesort_j <= (main_n - 2 - main_bubblesort_i);
main_bubblesort_j++)
{
{
if (main_arr[main_bubblesort_j-(0)] > main_arr[main_bubblesort_j + 1-(0)])
{
{
main_bubblesort_tmp = main_arr[main_bubblesort_j + 1-(0)];
main_arr[main_bubblesort_j + 1-(0)] = main_arr[main_bubblesort_j-(0)];
main_arr[main_bubblesort_j-(0)] = main_bubblesort_tmp;
}
}
}
}
}
}
return 0;
}
int main()
{
main_n = 10;
main_arr[0-(0)] = 4;
main_arr[1-(0)] = 3;
main_arr[2-(0)] = 9;
main_arr[3-(0)] = 2;
main_arr[4-(0)] = 0;
main_arr[5-(0)] = 1;
main_arr[6-(0)] = 6;
main_arr[7-(0)] = 5;
main_arr[8-(0)] = 7;
main_arr[9-(0)] = 8;
for(main_i = main_bubblesort_();
main_i <= main_n - 1;
main_i++)
{
{
printf("%d", main_arr[main_i-(0)]);
}
}
}
