#include "s21_math_test.h"

START_TEST(pow_1) {
  double a = 6;
  double b = 0;
  ck_assert_ldouble_eq_tol(s21_pow(a, b), pow(a, b), S21_EPS_TEST_6);
}
END_TEST

START_TEST(pow_2) {
  double a = 1;
  double b = 25;
  ck_assert_ldouble_eq_tol(s21_pow(a, b), pow(a, b), S21_EPS_TEST_6);
}
END_TEST

START_TEST(pow_3) {
  double a = 0;
  double b = -2.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_4) {
  double a = 0;
  double b = 2.5;
  ck_assert_ldouble_eq_tol(s21_pow(a, b), pow(a, b), S21_EPS_TEST_6);
}
END_TEST

START_TEST(pow_5) {
  double a = -2.5;
  double b = -3;
  ck_assert_ldouble_eq_tol(s21_pow(a, b), pow(a, b), S21_EPS_TEST_6);
}
END_TEST

START_TEST(pow_6) {
  double a = -2.5;
  double b = -3.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_7) {
  double a = s21_nan;
  double b = 12.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_8) {
  double a = s21_inf;
  double b = 12.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_9) {
  double a = s21_nan;
  double b = -12.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_10) {
  double a = s21_inf;
  double b = -12.5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_11) {
  double a = s21_inf;
  double b = 0;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_12) {
  double a = 12.5;
  double b = s21_nan;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_13) {
  double a = 12.5;
  double b = s21_inf;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_14) {
  double a = -12.5;
  double b = s21_nan;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_15) {
  double a = -12.5;
  double b = s21_inf;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_16) {
  double a = 0;
  double b = s21_nan;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_17) {
  double a = 0;
  double b = s21_inf;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_18) {
  double a = s21_nan;
  double b = s21_nan;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_19) {
  double a = s21_nan;
  double b = s21_inf;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_20) {
  double a = s21_inf;
  double b = s21_nan;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isnan(result_s21_pow));
  ck_assert(s21_isnan(result_pow));
}
END_TEST

START_TEST(pow_21) {
  double a = s21_inf;
  double b = s21_inf;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_22) {
  double a = 0;
  double b = -32.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_23) {
  double a = DBL_MAX;
  double b = 5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_24) {
  double a = DBL_MAX;
  double b = -5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_25) {
  double a = DBL_MAX;
  double b = 5.5;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_26) {
  double a = DBL_MAX;
  double b = -5.5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_27) {
  double a = DBL_MAX;
  double b = DBL_MIN;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_28) {
  double a = DBL_MAX;
  double b = DBL_MAX;
  double result_s21_pow = s21_pow(a, b);
  double result_pow = pow(a, b);
  ck_assert(s21_isinf(result_s21_pow));
  ck_assert(s21_isinf(result_pow));
}
END_TEST

START_TEST(pow_29) {
  double a = DBL_MIN;
  double b = 5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_30) {
  double a = DBL_MIN;
  double b = -5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_31) {
  double a = DBL_MIN;
  double b = 5.5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_32) {
  double a = DBL_MIN;
  double b = -5.5;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_33) {
  double a = DBL_MIN;
  double b = DBL_MIN;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_34) {
  double a = DBL_MIN;
  double b = DBL_MAX;
  ck_assert_ldouble_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(pow_35) {
  double a = 73.2;
  double b = 10.3e-21;
  ck_assert_ldouble_eq_tol(pow(a, b), s21_pow(a, b), S21_EPS_TEST_6);
}

START_TEST(pow_36) {
  double a = 2.5;
  double b = 3e-10;
  ck_assert_ldouble_eq_tol(s21_pow(a, b), pow(a, b), S21_EPS_TEST_6);
}
END_TEST

START_TEST(pow_37) {
  double a = 2;
  double b = 3;
  ck_assert_ldouble_eq_tol(s21_pow(a, b), pow(a, b), S21_EPS_TEST_6);
}
END_TEST

Suite *pow_suite() {
  Suite *s = suite_create("s21_pow");
  TCase *tc = tcase_create("core_pow");

  tcase_add_test(tc, pow_1);
  tcase_add_test(tc, pow_2);
  tcase_add_test(tc, pow_3);
  tcase_add_test(tc, pow_4);
  tcase_add_test(tc, pow_5);
  tcase_add_test(tc, pow_6);
  tcase_add_test(tc, pow_7);
  tcase_add_test(tc, pow_8);
  tcase_add_test(tc, pow_9);
  tcase_add_test(tc, pow_10);
  tcase_add_test(tc, pow_11);
  tcase_add_test(tc, pow_12);
  tcase_add_test(tc, pow_13);
  tcase_add_test(tc, pow_14);
  tcase_add_test(tc, pow_15);
  tcase_add_test(tc, pow_16);
  tcase_add_test(tc, pow_17);
  tcase_add_test(tc, pow_18);
  tcase_add_test(tc, pow_19);
  tcase_add_test(tc, pow_20);
  tcase_add_test(tc, pow_21);
  tcase_add_test(tc, pow_22);
  tcase_add_test(tc, pow_23);
  tcase_add_test(tc, pow_24);
  tcase_add_test(tc, pow_25);
  tcase_add_test(tc, pow_26);
  tcase_add_test(tc, pow_27);
  tcase_add_test(tc, pow_28);
  tcase_add_test(tc, pow_29);
  tcase_add_test(tc, pow_30);
  tcase_add_test(tc, pow_31);
  tcase_add_test(tc, pow_32);
  tcase_add_test(tc, pow_33);
  tcase_add_test(tc, pow_34);
  tcase_add_test(tc, pow_35);
  tcase_add_test(tc, pow_36);
  tcase_add_test(tc, pow_37);

  suite_add_tcase(s, tc);
  return s;
}