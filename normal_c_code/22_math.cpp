#include <stdio.h>
#define bool int
#define true 1
#define false 0
const float main_e = 2.1718281828459045;
const char main_split[] = "--";
int i;
int num;
float x;
float y;
float main_asr4_(float a, float b, float eps, int flag);
float main_asr5_(float a, float b, float eps, float aa, int flag);
float main_eee_(float x);
float main_f1_(float x);
float main_f2_(float x);
float main_getfloat_();
float main_myAexp_(float x);
float main_myAfabs_(float x);
float main_myAln_(float x);
float main_myAlog_(float a, float n);
float main_myApow_(float a, int n);
float main_myApowf_(float a, float x);
float main_myAsqrt_(float x);
void main_putfloat_(float f);
float main_simpson_(float a, float b, int flag);
float main_asr4_(float a, float b, float eps, int flag)
{
    float __main_asr4___;
    __main_asr4___ = main_asr5_(a, b, eps, main_simpson_(a, b, flag), flag);
    return __main_asr4___;
}
float main_asr5_(float a, float b, float eps, float aa, int flag)
{
    float c;
    float l;
    float r;
    float __main_asr5___;
    c = a + (b - a) * 1.0 / 2;
    l = main_simpson_(a, c, flag);
    r = main_simpson_(c, b, flag);
    if (main_myAfabs_(l + r - aa) <= (15 * eps))
    {
        __main_asr5___ = l + r + (l + r - aa) * 1.0 / 15.0;
    }
    else
    {
        __main_asr5___ = main_asr5_(a, c, eps * 1.0 / 2, l, flag) + main_asr5_(c, b, eps * 1.0 / 2, r, flag);
    }
    return __main_asr5___;
}
float main_eee_(float x)
{
    float ee;
    float __main_eee___;
    if (x > 0.001)
    {
        {
            ee = main_eee_(x * 1.0 / 2);
            __main_eee___ = ee * ee;
        }
    }
    else
    {
        __main_eee___ = 1 + x + x * x * 1.0 / 2 + main_myApow_(x, 3) * 1.0 / 6 + main_myApow_(x, 4) * 1.0 / 24 + main_myApow_(x, 5) * 1.0 / 120;
    }
    return __main_eee___;
}
float main_f1_(float x)
{
    float __main_f1___;
    __main_f1___ = 1 * 1.0 / x;
    return __main_f1___;
}
float main_f2_(float x)
{
    float __main_f2___;
    __main_f2___ = 1 * 1.0 / main_myAsqrt_(1 - x * x);
    return __main_f2___;
}
float main_getfloat_()
{
    float __main_getfloat___;
    scanf("%f", &(__main_getfloat___));
    return __main_getfloat___;
}
float main_myAexp_(float x)
{
    float e1;
    float e2;
    int n;
    float __main_myAexp___;
    if (x < 0)
    {
        __main_myAexp___ = 1 * 1.0 / main_myAexp_(-x);
    }
    else
    {
        {
            n = 1;
            x = x - 1.0;
            e1 = main_myApow_(main_e, n);
            e2 = main_eee_(x);
            __main_myAexp___ = e1 * e2;
        }
    }
    return __main_myAexp___;
}
float main_myAfabs_(float x)
{
    float __main_myAfabs___;
    if (x > 0)
    {
        __main_myAfabs___ = x;
    }
    else
    {
        __main_myAfabs___ = -x;
    }
    return __main_myAfabs___;
}
float main_myAln_(float x)
{
    float __main_myAln___;
    __main_myAln___ = main_asr4_(1, x, 0.00000001, 1);
    return __main_myAln___;
}
float main_myAlog_(float a, float n)
{
    float __main_myAlog___;
    __main_myAlog___ = main_myAln_(n) * 1.0 / main_myAln_(a);
    return __main_myAlog___;
}
float main_myApow_(float a, int n)
{
    int i;
    float res;
    float __main_myApow___;
    if (n < 0)
    {
        __main_myApow___ = 1 * 1.0 / (main_myApow_(a, -n));
    }
    else
    {
        {
            res = 1.0;
            for (i = 0;
                 i <= n - 1;
                 i++)
            {
                res = res * a;
            }
            __main_myApow___ = res;
        }
    }
    return __main_myApow___;
}
float main_myApowf_(float a, float x)
{
    float __main_myApowf___;
    __main_myApowf___ = main_myAexp_(x * main_myAln_(a));
    return __main_myApowf___;
}
float main_myAsqrt_(float x)
{
    int c;
    float t;
    float __main_myAsqrt___;
    if (x > 100)
    {
        __main_myAsqrt___ = 10.0 * main_myAsqrt_(x * 1.0 / 100);
    }
    else
    {
        {
            t = x * 1.0 / 8 + 0.5 + 2 * x * 1.0 / (4 + x);
            for (c = 0;
                 c <= 9;
                 c++)
            {
                t = (t + x * 1.0 / t) * 1.0 / 2;
            }
            __main_myAsqrt___ = t;
        }
    }
    return __main_myAsqrt___;
}
void main_putfloat_(float f)
{
    printf("%f", f);
}
float main_simpson_(float a, float b, int flag)
{
    float c;
    float __main_simpson___;
    c = a + (b - a) * 1.0 / 2;
    __main_simpson___ = 0;
    if (flag == 1)
    {
        __main_simpson___ = (main_f1_(a) + 4 * main_f1_(c) + main_f1_(b)) * (b - a) * 1.0 / 6;
    }
    else
    {
        __main_simpson___ = (main_f2_(a) + 4 * main_f2_(c) + main_f2_(b)) * (b - a) * 1.0 / 6;
    }
    return __main_simpson___;
}
int main()
{
    num = 2;
    for (i = 0;
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
