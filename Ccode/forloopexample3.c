#include <stdio.h>
#define bool int
#define true 1
#define false 0
int forloopexample3_i;
int forloopexample3_j;
int main()
{
<<<<<<< HEAD
for(forloopexample3_i = 1;
forloopexample3_i <= 9;
forloopexample3_i++)
{
{
for(forloopexample3_j = 1;
forloopexample3_j <= forloopexample3_i;
forloopexample3_j++)
=======
for(return 1;
return  <= 9;
return ++)
{
{
for(return 1;
return  <= forloopexample3_i;
return ++)
>>>>>>> e21371d19e7c55f5a49944f181f13a2ecb16558c
{
{
printf("%d %s %d %s %d %s", forloopexample3_j, " * ", forloopexample3_i, " = ", forloopexample3_i * forloopexample3_j, "   ");
}
}
}
}
}
