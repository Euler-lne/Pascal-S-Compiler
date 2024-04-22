#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_a;
int main_arr[10];
int main_i;
int main_i1;
int main_i2;
int main_i3;
int main_i4;
int main_func1_(int x, int y, int z)
{
if (z == 0)
{
return x * y;
}
else
{
return main_func1_(x, y - z, 0);
}
}
int main_func2_(int x, int y)
{
if (y != 0)
{
return main_func2_(x % y, 0);
}
else
{
return x;
}
}
int main_func3_(int x, int y)
{
if (y == 0)
{
return x + 1;
}
else
{
return main_func3_(x + y, 0);
}
}
int main_func4_(int x, int y, int z)
{
if (x != 0)
{
return y;
}
else
{
return z;
}
}
int main_func5_(int x)
{
return  -x;
}
int main_func6_(int x, int y)
{
if ((x != 0) and (y != 0))
{
return 1;
}
else
{
return 0;
}
}
int main_func7_(int x)
{
if (x == 0)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
main_i1 = 1;
main_i2 = 2;
main_i3 = 3;
main_i4 = 4;
for(main_i = 0;
main_i <= 9;
main_i++)
{
main_arr[main_i-(0)] = main_i + 1;
}
main_a = main_func1_(main_func2_(main_func1_(main_func3_(main_func4_(main_func5_(main_func3_(main_func2_(main_func6_(main_func7_(main_i1), main_func5_(main_i2)), main_i3), main_i4)), main_arr[0-(0)], main_func1_(main_func2_(main_func3_(main_func4_(main_func5_(main_arr[1-(0)]), main_func6_(main_arr[2-(0)], main_func7_(main_arr[3-(0)])), main_func2_(main_arr[4-(0)], main_func7_(main_arr[5-(0)]))), main_arr[6-(0)]), main_arr[7-(0)]), main_func3_(main_arr[8-(0)], main_func7_(main_arr[9-(0)])), main_i1)), main_func2_(main_i2, main_func3_(main_func7_(main_i3), main_i4))), main_arr[0-(0)], main_arr[1-(0)]), main_arr[2-(0)]), main_arr[3-(0)], main_func3_(main_func2_(main_func1_(main_func2_(main_func3_(main_arr[4-(0)], main_func5_(main_arr[5-(0)])), main_func5_(main_arr[6-(0)])), main_arr[7-(0)], main_func7_(main_arr[8-(0)])), main_func5_(main_arr[9-(0)])), main_i1));
printf("%d", main_a);
}
