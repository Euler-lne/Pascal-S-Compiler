#include <stdio.h>
#define bool int
#define true 1
#define false 0
int a[10001];
int n;
void testqsort_printdata_();
void testqsort_quicksort_(int l, int r);
void testqsort_readdata_();
void testqsort_printdata_()
{
int i;
for(i = 0;
i <= n - 1;
i++)
{
printf("%d%c", a[i-(0)], ' ');
}
}
void testqsort_quicksort_(int l, int r)
{
int i;
int j;
int pivot;
if (l < r)
{
{
i = l;
j = r;
pivot = a[i-(0)];
while(i < j)
{
{
while((i < j) && (a[j-(0)] >= pivot))
{
j = j - 1;
}
a[i-(0)] = a[j-(0)];
while((i < j) && (a[i-(0)] <= pivot))
{
i = i + 1;
}
a[j-(0)] = a[i-(0)];
}
}
a[i-(0)] = pivot;
testqsort_quicksort_(l, i - 1);
testqsort_quicksort_(i + 1, r);
}
}
}
void testqsort_readdata_()
{
int i;
scanf("%d", &(n));
for(i = 0;
i <= n - 1;
i++)
{
scanf("%d", &(a[i-(0)]));
}
}
int main()
{
testqsort_readdata_();
testqsort_quicksort_(0, n - 1);
testqsort_printdata_();
}
