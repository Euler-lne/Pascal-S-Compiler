#include <stdio.h>
#define bool int
#define true 1
#define false 0
int countingsort_i;
int countingsort_iniarr[10];
int countingsort_n;
int countingsort_sortedarr[10];
int countingsort_tmp;
int countingsort_countingsort_countarr[10];
int countingsort_countingsort_i;
int countingsort_countingsort_j;
int countingsort_countingsort_jj;
int countingsort_countingsort_k;
int countingsort_countingsort_(int n)
{
for(countingsort_countingsort_k = 0;
countingsort_countingsort_k <= 9;
countingsort_countingsort_k++)
{
{
countingsort_countingsort_countarr[countingsort_countingsort_k-(0)] = 0;
}
}
for(countingsort_countingsort_i = 0;
countingsort_countingsort_i <= n - 1;
countingsort_countingsort_i++)
{
{
countingsort_countingsort_countarr[countingsort_iniarr[countingsort_countingsort_i-(0)]-(0)] = countingsort_countingsort_countarr[countingsort_iniarr[countingsort_countingsort_i-(0)]-(0)] + 1;
}
}
for(countingsort_countingsort_k = 1;
countingsort_countingsort_k <= 9;
countingsort_countingsort_k++)
{
{
countingsort_countingsort_countarr[countingsort_countingsort_k-(0)] = countingsort_countingsort_countarr[countingsort_countingsort_k-(0)] + countingsort_countingsort_countarr[countingsort_countingsort_k - 1-(0)];
}
}
for(countingsort_countingsort_jj = 0;
countingsort_countingsort_jj <= n - 1;
countingsort_countingsort_jj++)
{
{
countingsort_countingsort_j = n - countingsort_countingsort_jj;
countingsort_countingsort_countarr[countingsort_iniarr[countingsort_countingsort_j - 1-(0)]-(0)] = countingsort_countingsort_countarr[countingsort_iniarr[countingsort_countingsort_j - 1-(0)]-(0)] - 1;
countingsort_sortedarr[countingsort_countingsort_countarr[countingsort_iniarr[countingsort_countingsort_j - 1-(0)]-(0)]-(0)] = countingsort_iniarr[countingsort_countingsort_j - 1-(0)];
}
}
return 0;
}
int main()
{
countingsort_n = 10;
countingsort_iniarr[0-(0)] = 4;
countingsort_iniarr[1-(0)] = 3;
countingsort_iniarr[2-(0)] = 9;
countingsort_iniarr[3-(0)] = 2;
countingsort_iniarr[4-(0)] = 0;
countingsort_iniarr[5-(0)] = 1;
countingsort_iniarr[6-(0)] = 6;
countingsort_iniarr[7-(0)] = 5;
countingsort_iniarr[8-(0)] = 7;
countingsort_iniarr[9-(0)] = 8;
countingsort_countingsort_(countingsort_n);
for(countingsort_i = 0;
countingsort_i <= countingsort_n - 1;
countingsort_i++)
{
{
countingsort_tmp = countingsort_sortedarr[countingsort_i-(0)];
printf("%d", countingsort_tmp);
}
}
}
