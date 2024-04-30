#include <stdio.h>
#define bool int
#define true 1
#define false 0
int edges[600][2];
int graph[30][30];
int i;
int m;
int n;
int ret;
int store[30];
int maxclique_isAclique_(int num);
int maxclique_maxcliques_(int i, int k);
int maxclique_isAclique_(int num)
{
int i;
int j;
return 1;
for(i = 1;
i <= num - 1;
i++)
{
{
for(j = i + 1;
j <= num - 1;
j++)
{
{
if (graph[store[i-(0)]-(0)][store[j-(0)]-(0)] == 0)
{
return 0;
}
}
}
}
}
}
int maxclique_maxcliques_(int i, int k)
{
int j;
int maxA;
int tmp;
maxA = 0;
for(j = 1;
j <= n;
j++)
{
{
store[k-(0)] = j;
if (maxclique_isAclique_(k + 1) != 0)
{
{
if (k > maxA)
{
maxA = k;
}
tmp = maxclique_maxcliques_(j, k + 1);
if (tmp > maxA)
{
maxA = tmp;
}
}
}
}
}
return maxA;
}
int main()
{
scanf("%d", &(n));
scanf("%d", &(m));
for(i = 0;
i <= m - 1;
i++)
{
{
scanf("%d", &(edges[i-(0)][0-(0)]));
scanf("%d", &(edges[i-(0)][1-(0)]));
}
}
for(i = 0;
i <= m - 1;
i++)
{
{
graph[edges[i-(0)][0-(0)]-(0)][edges[i-(0)][1-(0)]-(0)] = 1;
graph[edges[i-(0)][1-(0)]-(0)][edges[i-(0)][0-(0)]-(0)] = 1;
}
}
ret = maxclique_maxcliques_(0, 1);
printf("%d", ret);
}
