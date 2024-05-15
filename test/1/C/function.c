#include <stdio.h>
#define bool int
#define true 1
#define false 0
int a;
int b;
int testprocandfunc_gcd_(int a, int b);
void testprocandfunc_swap_(int *x, int *y);
int testprocandfunc_testfunc_();
void testprocandfunc_testpro1_();
void testprocandfunc_testpro2_(int n);
int testprocandfunc_gcd_(int a, int b)
{
int __testprocandfunc_gcd___;
if (b == 0)
{
__testprocandfunc_gcd___ = a;
}
else
{
__testprocandfunc_gcd___ = testprocandfunc_gcd_(b, a % b);
}
return __testprocandfunc_gcd___;
}
void testprocandfunc_swap_(int *x, int *y)
{
int temp;
temp = (*x);
(*x) = (*y);
(*y) = temp;
}
int testprocandfunc_testfunc_()
{
int __testprocandfunc_testfunc___;
printf("%s", "before testFunc := 54");
__testprocandfunc_testfunc___ = 54;
printf("%s", "after testFunc := 54");
return __testprocandfunc_testfunc___;
}
void testprocandfunc_testpro1_()
{
printf("%d", 2023);
}
void testprocandfunc_testpro2_(int n)
{
printf("%d", n + 1);
}
int main()
{
printf("%s", "procedure-test");
testprocandfunc_testpro1_();
testprocandfunc_testpro2_(2022);
printf("%s", "function-test");
a = testprocandfunc_testfunc_();
b = 24;
printf("%d", testprocandfunc_gcd_(a, b) + 1);
testprocandfunc_swap_(&(a), &(b));
printf("%d%c%d", a, ' ', b);
}
