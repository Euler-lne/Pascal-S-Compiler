#include <stdio.h>
#define bool int
#define true 1
#define false 0
int nqueens_ans[51];
int nqueens_i;
int nqueens_k;
int nqueens_line1[51];
int nqueens_line2[101];
int nqueens_n;
int nqueens_row[51];
int nqueens_sum;
int nqueens_f_i;
void nqueens_f_(int step)
{
for(nqueens_f_i = 1;
nqueens_f_i <= nqueens_n;
nqueens_f_i++)
{
{
if ((nqueens_row[nqueens_f_i-(1)] != 1) and (nqueens_line1[step + nqueens_f_i-(1)] == 0) and (nqueens_line2[nqueens_n + step - nqueens_f_i-(1)] == 0))
{
{
nqueens_ans[step-(1)] = nqueens_f_i;
if (step == nqueens_n)
{
nqueens_printans_();
}
nqueens_row[nqueens_f_i-(1)] = 1;
nqueens_line1[step + nqueens_f_i-(1)] = 1;
nqueens_line2[nqueens_n + step - nqueens_f_i-(1)] = 1;
nqueens_f_(step + 1);
nqueens_row[nqueens_f_i-(1)] = 0;
nqueens_line1[step + nqueens_f_i-(1)] = 0;
nqueens_line2[nqueens_n + step - nqueens_f_i-(1)] = 0;
}
}
}
}
}
int nqueens_printans_i;
void nqueens_printans_()
{
nqueens_sum = nqueens_sum + 1;
for(nqueens_printans_i = 1;
nqueens_printans_i <= nqueens_n;
nqueens_printans_i++)
{
{
printf("%d", nqueens_ans[nqueens_printans_i-(1)]);
if (nqueens_printans_i == nqueens_n)
;
}
}
}
int main()
{
nqueens_sum = 0;
scanf("%d", &(nqueens_k));
for(nqueens_i = 1;
nqueens_i <= nqueens_k;
nqueens_i++)
{
{
scanf("%d", &(nqueens_n));
nqueens_f_(1);
}
}
printf("%d", nqueens_sum);
}
