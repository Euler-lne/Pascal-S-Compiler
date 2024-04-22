#include <stdio.h>
#define bool int
#define true 1
#define false 0
int forloopexample3_i;
int forloopexample3_j;
int main()
{
for(forloopexample3_i = 1;
forloopexample3_i <= 9;
forloopexample3_i++)
{
{
for(forloopexample3_j = 1;
forloopexample3_j <= forloopexample3_i;
forloopexample3_j++)
{
{
printf("%d %s %d %s %d %s", forloopexample3_j, " * ", forloopexample3_i, " = ", forloopexample3_i * forloopexample3_j, "   ");
}
}
}
}
}
