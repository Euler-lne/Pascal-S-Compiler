#include <stdio.h>
#define bool int
#define true 1
#define false 0
int a[101][101];
int b[101][101];
int i;
int j;
int k;
int m1;
int m2;
int n1;
int n2;
int res[101][101];
int main_getint_();
void main_matrixAmultiply_();
int main_getint_()
{
    int __main_getint___;
    scanf("%d", &(__main_getint___));
    return __main_getint___;
}
void main_matrixAmultiply_()
{
    for (i = 1;
         i <= m1;
         i++)
    {
        {
            for (j = 1;
                 j <= n2;
                 j++)
            {
                {
                    for (k = 1;
                         k <= n1;
                         k++)
                    {
                        {
                            res[i - (1)][j - (1)] = res[i - (1)][j - (1)] + a[i - (1)][k - (1)] * b[k - (1)][j - (1)];
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    m1 = main_getint_();
    n1 = main_getint_();
    for (i = 1;
         i <= m1;
         i++)
    {
        {
            for (j = 1;
                 j <= n1;
                 j++)
            {
                {
                    a[i - (1)][j - (1)] = main_getint_();
                }
            }
        }
    }
    m2 = main_getint_();
    n2 = main_getint_();
    for (i = 1;
         i <= m2;
         i++)
    {
        {
            for (j = 1;
                 j <= n2;
                 j++)
            {
                {
                    b[i - (1)][j - (1)] = main_getint_();
                }
            }
        }
    }
    main_matrixAmultiply_();
    for (i = 1;
         i <= m1;
         i++)
    {
        {
            for (j = 1;
                 j <= n2;
                 j++)
            {
                {
                    printf("%d", res[i - (1)][j - (1)]);
                }
            }
        }
    }
}
