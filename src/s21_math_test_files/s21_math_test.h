#ifndef S21_MATH_TEST_H
#define S21_MATH_TEST_H

#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "../s21_math.h"

Suite *abs_suite();
Suite *fabs_suite();
Suite *ceil_suite();
Suite *floor_suite();
Suite *fmod_suite();
Suite *exp_suite();
Suite *log_suite();
Suite *pow_suite();
Suite *sqrt_suite();
Suite *sin_suite();
Suite *cos_suite();
Suite *tan_suite();
Suite *acos_suite();
Suite *asin_suite();
Suite *atan_suite();

void case_test(Suite *s, int *fail);

#endif /* S21_MATH_TEST_H */
