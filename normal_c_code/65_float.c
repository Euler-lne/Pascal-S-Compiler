#include <stdio.h>
#define bool int
#define true 1
#define false 0
const double main_radius = 5.5;
const double main_pi = 03.141595653589793;
const double main_eps = 0.000001;
const double main_eval1 = 95.033188;
const int main_conv1 = 233;
const int main_max = 1000000000;
const double main_two = 2.9;
const int main_three = 3;
const int main_five = 5;
const char main_e = 'e';
const char main_o = 'o';
double area;
double areaAtrunc;
double arr[10];
double input;
int p;
void main_assert_(int cond);
double main_circleAarea_(int radius);
void main_error_();
double main_floatAabs_(double x);
int main_floatAeq_(double a, double b);
void main_ok_();
void main_assert_(int cond)
{
    if (cond == 0) {
        main_error_();
    } else {
        main_ok_();
    }
}
double main_circleAarea_(int radius)
{
    return (main_pi * radius * radius + (radius * radius) * main_pi) * 1.0 / 2;
}
void main_error_()
{
    printf("%c", main_e);
}
double main_floatAabs_(double x)
{
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}
int main_floatAeq_(double a, double b)
{
    if (main_floatAabs_(a - b) < main_eps) {
        return 1;
    } else {
        return 0;
    }
}
void main_ok_()
{
    printf("%c", main_o);
}
int main()
{
    main_assert_(main_floatAeq_(main_circleAarea_(5), main_circleAarea_(main_five)));
    if (1.5 != 0.0) {
        main_ok_();
    }
    if ((!(3.3 == 0.0))) {
        main_ok_();
    }
    if ((0.0 != 0.0) && (3 != 0.0)) {
        main_error_();
    }
    if ((0 != 0.0) || (0.3 != 0.0)) {
        main_ok_();
    }
    p = 0;
    arr[0 - (0)] = 1.0;
    arr[1 - (0)] = 2.0;
    input = 0.520;
    area = main_pi * input * input;
    areaAtrunc = main_circleAarea_(0);
    arr[p - (0)] = arr[p - (0)] + input;
    printf("%lf", area);
    printf("%lf", areaAtrunc);
    printf("%lf", arr[0 - (0)]);
}
