#include <stdio.h>
#define bool int
#define true 1
#define false 0
const double main_e = 2.1718281828459045;
const char main_split[] = "--";
int i;
int num;
double x;
double y;
double main_asr4_(double a, double b, double eps, int flag);
double main_asr5_(double a, double b, double eps, double aa, int flag);
double main_eee_(double x);
double main_f1_(double x);
double main_f2_(double x);
double main_getfloat_();
double main_myAexp_(double x);
double main_myAfabs_(double x);
double main_myAln_(double x);
double main_myAlog_(double a, double n);
double main_myApow_(double a, int n);
double main_myApowf_(double a, double x);
double main_myAsqrt_(double x);
void main_putfloat_(double f);
double main_simpson_(double a, double b, int flag);
double main_asr4_(double a, double b, double eps, int flag)
{
return main_asr5_(a, b, eps, main_simpson_(a, b, flag), flag);
}
double main_asr5_(double a, double b, double eps, double aa, int flag)
{
double c;
double l;
double r;
c = a + (b - a) * 1.0 / 2;
l = main_simpson_(a, c, flag);
r = main_simpson_(c, b, flag);
if (main_myAfabs_(l + r - aa) <= (15 * eps))
{
return l + r + (l + r - aa) * 1.0 / 15.0;
}
else
{
return main_asr5_(a, c, eps * 1.0 / 2, l, flag) + main_asr5_(c, b, eps * 1.0 / 2, r, flag);
}
}
double main_eee_(double x)
{
double ee;
if (x > 0.001)
{
{
ee = main_eee_(x * 1.0 / 2);
return ee * ee;
}
}
else
{
return 1 + x + x * x * 1.0 / 2 + main_myApow_(x, 3) * 1.0 / 6 + main_myApow_(x, 4) * 1.0 / 24 + main_myApow_(x, 5) * 1.0 / 120;
}
}
double main_f1_(double x)
{
return 1 * 1.0 / x;
}
double main_f2_(double x)
{
return 1 * 1.0 / main_myAsqrt_(1 - x * x);
}
double main_getfloat_()
{
float __main_getfloat___;
scanf("%lf", &(__main_getfloat___));
return __main_getfloat___;}
double main_myAexp_(double x)
{
double e1;
double e2;
int n;
if (x < 0)
{
return 1 * 1.0 / main_myAexp_( -x);
}
else
{
{
n = 1;
x = x - 1.0;
e1 = main_myApow_(main_e, n);
e2 = main_eee_(x);
return e1 * e2;
}
}
}
double main_myAfabs_(double x)
{
if (x > 0)
{
return x;
}
else
{
return  -x;
}
}
double main_myAln_(double x)
{
return main_asr4_(1, x, 0.00000001, 1);
}
double main_myAlog_(double a, double n)
{
return main_myAln_(n) * 1.0 / main_myAln_(a);
}
double main_myApow_(double a, int n)
{
int i;
double res;
if (n < 0)
{
return 1 * 1.0 / (main_myApow_(a,  -n));
}
else
{
{
res = 1.0;
for(i = 0;
i <= n - 1;
i++)
{
res = res * a;
}
return res;
}
}
}
double main_myApowf_(double a, double x)
{
return main_myAexp_(x * main_myAln_(a));
}
double main_myAsqrt_(double x)
{
int c;
double t;
if (x > 100)
{
return 10.0 * main_myAsqrt_(x * 1.0 / 100);
}
else
{
{
t = x * 1.0 / 8 + 0.5 + 2 * x * 1.0 / (4 + x);
for(c = 0;
c <= 9;
c++)
{
t = (t + x * 1.0 / t) * 1.0 / 2;
}
return t;
}
}
}
void main_putfloat_(double f)
{
printf("%lf", f);
}
double main_simpson_(double a, double b, int flag)
{
double c;
c = a + (b - a) * 1.0 / 2;
return 0;
if (flag == 1)
{
return (main_f1_(a) + 4 * main_f1_(c) + main_f1_(b)) * (b - a) * 1.0 / 6;
}
else
{
return (main_f2_(a) + 4 * main_f2_(c) + main_f2_(b)) * (b - a) * 1.0 / 6;
}
}
int main()
{
num = 2;
for(i = 0;
i <= num - 1;
i++)
{
{
x = main_getfloat_();
y = main_getfloat_();
main_putfloat_(main_myAfabs_(x));
main_putfloat_(main_myApow_(x, 2));
main_putfloat_(main_myAsqrt_(x));
main_putfloat_(main_myAexp_(x));
if (x > 0.0)
{
main_putfloat_(main_myAln_(x));
}
else
{
printf("%s", main_split);
}
if ((x > 0.0) && (y > 0.0))
{
main_putfloat_(main_myAlog_(x, y));
}
else
{
printf("%s", main_split);
}
if (x > 0.0)
{
main_putfloat_(main_myApowf_(x, y));
}
else
{
printf("%s", main_split);
}
}
}
}
