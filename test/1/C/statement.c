#include <stdio.h>
#define bool int
#define true 1
#define false 0
char ch;
bool m;
int n;
int main()
{
n = 3;
m = true;
ch = 'c';
printf("%s", "if .. then .. else");
if ( !m)
{
printf("%s", "n <= 0");
}
else
{
if (n >= 5)
{
{
n = n - 1;
printf("%s", "n >= 5");
}
}
else
{
{
n = n + 1;
printf("%s", "n < 5");
}
}
}
printf("%s", "while .. do");
n = 1;
while(n <= 3)
{
{
printf("%d", n);
n = n + 1;
}
}
printf("%s", "repeat .. until");
n = 1;
do
{
printf("%d", n);
n = n + 1;
}
while(!(n == 3));
printf("%s", "for .. to/downto .. do");
for(n = 3;
n >= 1;
n--)
{
printf("%d", n);
}
for(n = 1;
n <= 3;
n++)
{
printf("%d", n);
}
}
