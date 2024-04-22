#include <stdio.h>
#define bool int
#define true 1
#define false 0
int testprocandfunc_a;
int testprocandfunc_b;
int testprocandfunc_gcd_(int a, int b)
{
if (b == 0)
{
return a;
}
else
{
return testprocandfunc_gcd_(b, a % b);
}
}
int testprocandfunc_swap_temp;
void testprocandfunc_swap_(int *x, int *y)
{
testprocandfunc_swap_temp = (*x);
(*x) = (*y);
(*y) = testprocandfunc_swap_temp;
}
int testprocandfunc_testfunc_()
{
printf("%s", "before testFunc := 54");
return 54;
printf("%s", "after testFunc := 54");
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
testprocandfunc_a = testprocandfunc_testfunc_();
testprocandfunc_b = 24;
printf("%d", testprocandfunc_gcd_(testprocandfunc_a, testprocandfunc_b) + 1);
testprocandfunc_swap_(&(testprocandfunc_a), &(testprocandfunc_b));
printf("%d %s %d", testprocandfunc_a, " ", testprocandfunc_b);
scanf("%d", &(testprocandfunc_a));
scanf("%d", &(testprocandfunc_b));
}
