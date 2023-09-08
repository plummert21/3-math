#include <float.h>

#ifndef S21_MATH_H
#define S21_MATH_H

#define S21_E 2.718281828459045
#define S21_M_PI 3.14159265358979323846
// #define S21_M_PI_2 1.57079632679489661923
// #define S21_M_PI_4 0.78539816339744830962
// #define S21_M_1_PI 0.31830988618379067154
// #define S21_M_2_PI 0.63661977236758134308

#define S21_EPS 1e-100
// #define S21_EPS_TEST_2 1e-2
#define S21_EPS_TEST_6 1e-6
#define s21_nan 0.0 / 0.0
#define s21_inf 1.0 / 0.0

int s21_abs(int x);                            // ++
long double s21_fabs(double x);                // ++
long double s21_ceil(double x);                // ++
long double s21_floor(double x);               // ++
long double s21_fmod(double x, double y);      // ++
long double s21_exp(double x);                 // ++
long double s21_log(double x);                 // ++
long double s21_pow(double base, double exp);  // ++
long double s21_sqrt(double x);                // ++

long double s21_sin(double x);   // ++
long double s21_cos(double x);   // ++
long double s21_tan(double x);   // ++
long double s21_atan(double x);  // +
long double s21_acos(double x);  // +
long double s21_asin(double x);  // +

// ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ

int s21_isnan(double x);
int s21_isinf(double x);
double s21_change_range_X(double x, double lim);

#endif