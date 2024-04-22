#include <stdio.h>
#define bool int
#define true 1
#define false 0
int selectsort_arr[10];
int selectsort_i;
int selectsort_n;
int selectsort_selectsort_i;
int selectsort_selectsort_j;
int selectsort_selectsort_min;
int selectsort_selectsort_tmp;
void selectsort_selectsort_()
{
for(selectsort_selectsort_i = 0;
selectsort_selectsort_i <= selectsort_n - 2;
selectsort_selectsort_i++)
{
{
selectsort_selectsort_min = selectsort_selectsort_i;
for(selectsort_selectsort_j = selectsort_selectsort_i + 1;
selectsort_selectsort_j <= selectsort_n - 1;
selectsort_selectsort_j++)
{
{
if (selectsort_arr[selectsort_selectsort_min-(0)] > selectsort_arr[selectsort_selectsort_j-(0)])
{
selectsort_selectsort_min = selectsort_selectsort_j;
}
}
}
if (selectsort_selectsort_min != selectsort_selectsort_i)
{
{
selectsort_selectsort_tmp = selectsort_arr[selectsort_selectsort_min-(0)];
selectsort_arr[selectsort_selectsort_min-(0)] = selectsort_arr[selectsort_selectsort_i-(0)];
selectsort_arr[selectsort_selectsort_i-(0)] = selectsort_selectsort_tmp;
}
}
}
}
}
int main()
{
selectsort_n = 10;
selectsort_arr[0-(0)] = 4;
selectsort_arr[1-(0)] = 3;
selectsort_arr[2-(0)] = 9;
selectsort_arr[3-(0)] = 2;
selectsort_arr[4-(0)] = 0;
selectsort_arr[5-(0)] = 1;
selectsort_arr[6-(0)] = 6;
selectsort_arr[7-(0)] = 5;
selectsort_arr[8-(0)] = 7;
selectsort_arr[9-(0)] = 8;
selectsort_selectsort_();
for(selectsort_i = 0;
selectsort_i <= selectsort_n - 1;
selectsort_i++)
{
{
printf("%d", selectsort_arr[selectsort_i-(0)]);
}
}
}
