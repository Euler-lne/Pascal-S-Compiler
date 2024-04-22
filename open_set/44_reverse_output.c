#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_i;
int main_reverse_next;
void main_reverse_(int n)
{
if (n <= 1)
{
{
scanf("%d", &(main_reverse_next));
printf("%d", main_reverse_next);
}
}
else
{
{
scanf("%d", &(main_reverse_next));
main_reverse_(n - 1);
printf("%d", main_reverse_next);
}
}
}
int main()
{
main_i = 200;
main_reverse_(main_i);
}
