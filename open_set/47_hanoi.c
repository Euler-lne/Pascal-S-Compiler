#include <stdio.h>
#define bool int
#define true 1
#define false 0
int hanoi_i;
int hanoi_n;
int hanoi_t;
void hanoi_hanoi_(int n, int one, int two, int three)
{
if (n == 1)
{
hanoi_move_(one, three);
}
else
{
{
hanoi_hanoi_(n - 1, one, three, two);
hanoi_move_(one, three);
hanoi_hanoi_(n - 1, two, one, three);
}
}
}
void hanoi_move_(int x, int y)
{
printf("%d %d %c", x, y, hanoi_split);
}
int main()
{
scanf("%d", &(hanoi_n));
for(hanoi_i = 1;
hanoi_i <= hanoi_n;
hanoi_i++)
{
{
scanf("%d", &(hanoi_t));
hanoi_hanoi_(hanoi_t, 1, 2, 3);
}
}
}
