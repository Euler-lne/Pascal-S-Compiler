#include <stdio.h>
#define bool int
#define true 1
#define false 0
int clusters;
int i;
int m;
int n;
int p;
int parent[1005];
int q;
int main_find_(int root);
int main_getint_();
void main_merge_(int p, int q);
int main_find_(int root)
{
    if (parent[root - (0)] == root)
    {
        return root;
    }
    else
    {
        {
            parent[root - (0)] = main_find_(parent[root - (0)]);
            return parent[root - (0)];
        }
    }
}
int main_getint_()
{
    int __main_getint___;
    scanf("%d", &(__main_getint___));
    return __main_getint___;
}
void main_merge_(int p, int q)
{
    int rootAp;
    int rootAq;
    rootAp = main_find_(p);
    rootAq = main_find_(q);
    if (rootAp != rootAq)
    {
        {
            parent[rootAq - (0)] = rootAp;
        }
    }
}
int main()
{
    n = main_getint_();
    m = main_getint_();
    for (i = 0;
         i <= n - 1;
         i++)
    {
        {
            parent[i - (0)] = i;
        }
    }
    for (i = 0;
         i <= m - 1;
         i++)
    {
        {
            p = main_getint_();
            q = main_getint_();
            main_merge_(p, q);
        }
    }
    clusters = 0;
    for (i = 0;
         i <= n - 1;
         i++)
    {
        {
            if (parent[i - (0)] == i)
            {
                clusters = clusters + 1;
            }
        }
    }
    printf("%d", clusters);
    scanf("%d", &(clusters));
}
