#include <stdio.h>
#define bool int
#define true 1
#define false 0
struct rec1
{int x;
char y;
} rec1;
struct rec2
{int x;
char y;
} rec2;
struct rec3
{struct x
{int x1;
float x2;
} x;
char y;
} rec3;
int main()
{
rec1.x = 2023;
rec1.y = 't';
rec2.x = rec1.x;
rec2.y = rec1.y;
printf("%d", rec2.x);
printf("%c", rec2.y);
rec3.x.x1 = 2023;
rec3.x.x2 = 3.14;
rec3.y = 't';
printf("%d", rec3.x.x1);
printf("%f", rec3.x.x2);
printf("%c", rec3.y);
}
