#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_ans;
int main_cns[20];
int main_dp[18][18][18][18][18][7];
int main_h;
int main_i;
int main_j;
int main_k;
int main_l;
int main_list[200];
int main_m;
int main_n;
int main_dfs_anss;
int main_dfs_(int a, int b, int c, int d, int e, int last)
{
if (main_dp[a-(0)][b-(0)][c-(0)][d-(0)][e-(0)][last-(0)] !=  -1)
{
return main_dp[a-(0)][b-(0)][c-(0)][d-(0)][e-(0)][last-(0)];
}
if (a + b + c + d + e == 0)
{
return 1;
}
else
{
{
main_dfs_anss = 0;
if (a != 0)
{
main_dfs_anss = (main_dfs_anss + (a - main_equal_(last, 2)) * main_dfs_(a - 1, b, c, d, e, 1)) % main_modn;
}
if (b != 0)
{
main_dfs_anss = (main_dfs_anss + (b - main_equal_(last, 3)) * main_dfs_(a + 1, b - 1, c, d, e, 2)) % main_modn;
}
if (c != 0)
{
main_dfs_anss = (main_dfs_anss + (c - main_equal_(last, 4)) * main_dfs_(a, b + 1, c - 1, d, e, 3)) % main_modn;
}
if (d != 0)
{
main_dfs_anss = (main_dfs_anss + (d - main_equal_(last, 5)) * main_dfs_(a, b, c + 1, d - 1, e, 4)) % main_modn;
}
if (e != 0)
{
main_dfs_anss = (main_dfs_anss + e * main_dfs_(a, b, c, d + 1, e - 1, 5)) % main_modn;
}
main_dp[a-(0)][b-(0)][c-(0)][d-(0)][e-(0)][last-(0)] = main_dfs_anss % main_modn;
return main_dp[a-(0)][b-(0)][c-(0)][d-(0)][e-(0)][last-(0)];
}
}
}
int main_equal_(int a, int b)
{
if (a == b)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
scanf("%d", &(main_n));
for(main_i = 0;
main_i <= 17;
main_i++)
{
{
for(main_j = 0;
main_j <= 17;
main_j++)
{
{
for(main_k = 0;
main_k <= 17;
main_k++)
{
{
for(main_l = 0;
main_l <= 17;
main_l++)
{
{
for(main_m = 0;
main_m <= 17;
main_m++)
{
{
for(main_h = 0;
main_h <= 6;
main_h++)
{
main_dp[main_i-(0)][main_j-(0)][main_k-(0)][main_l-(0)][main_m-(0)][main_h-(0)] =  -1;
}
}
}
}
}
}
}
}
}
}
}
for(main_i = 0;
main_i <= main_n - 1;
main_i++)
{
{
scanf("", &(main_list[main_i-(0)]));
main_cns[main_list[main_i-(0)]-(1)] = main_cns[main_list[main_i-(0)]-(1)] + 1;
}
}
main_ans = main_dfs_(main_cns[1-(1)], main_cns[2-(1)], main_cns[3-(1)], main_cns[4-(1)], main_cns[5-(1)], 0);
printf("%d", main_ans);
}
