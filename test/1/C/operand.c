#include <stdio.h>
#define bool int
#define true 1
#define false 0
bool a;
bool b;
int c;
int d;
float e;
float f;
char g;
char h;
int main()
{
a = true;
b = false;
c = 10;
d = 3;
e = 10.5;
f = 2.5;
g = 'a';
h = 'b';
printf("%s", "bool operand");
printf("%d", a && b);
printf("%d", a || b);
printf("%d",  !a);
printf("%d", a == b);
printf("%d", a != b);
printf("%s", "int operand");
printf("%d",  +c);
printf("%d",  -c);
printf("%d", c + d);
printf("%d", c - d);
printf("%d", c * d);
printf("%d", c * 1.0 / d);
printf("%d", c % d);
printf("%d", c / d);
printf("%d", c == d);
printf("%d", c != d);
printf("%d", c < d);
printf("%d", c > d);
printf("%d", c <= d);
printf("%d", c >= d);
printf("%s", "real operand");
printf("%f", e + f);
printf("%f", e - f);
printf("%f", e * f);
printf("%f", e * 1.0 / f);
printf("%d", e == f);
printf("%d", e != f);
printf("%d", e < f);
printf("%d", e > f);
printf("%d", e <= f);
printf("%d", e >= f);
printf("%s", "char operand");
printf("%d", g == h);
printf("%d", g != h);
printf("%s", "real int operand");
printf("%f", e + c);
printf("%f", e - c);
printf("%f", e * c);
printf("%f", e * 1.0 / c);
printf("%d", e == c);
printf("%d", e != c);
printf("%d", e < c);
printf("%d", e > c);
printf("%d", e <= c);
printf("%d", e >= c);
printf("%s", "int real operand");
printf("%f", c + e);
printf("%f", c - e);
printf("%f", c * e);
printf("%f", c * 1.0 / e);
printf("%d", c == e);
printf("%d", c != e);
printf("%d", c < e);
printf("%d", c > e);
}
