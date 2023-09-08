#include "s21_math_test.h"

START_TEST(sqrt_1) {
  double a = 6;
  ck_assert_ldouble_eq_tol(s21_sqrt(a), sqrt(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(sqrt_2) {
  double a = 1;
  ck_assert_ldouble_eq_tol(s21_sqrt(a), sqrt(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(sqrt_3) {
  double a = 0;
  ck_assert_ldouble_eq(s21_sqrt(a), sqrt(a));
}
END_TEST

START_TEST(sqrt_4) {
  double a = -2.5;
  double result_s21_sqrt = s21_sqrt(a);
  ck_assert(s21_isnan(result_s21_sqrt));
}
END_TEST

START_TEST(sqrt_5) {
  double a = s21_nan;
  double result_s21_sqrt = s21_sqrt(a);
  double result_sqrt = sqrt(a);
  ck_assert(s21_isnan(result_s21_sqrt));
  ck_assert(s21_isnan(result_sqrt));
}
END_TEST

START_TEST(sqrt_6) {
  double a = s21_inf;
  double result_s21_sqrt = s21_sqrt(a);
  double result_sqrt = sqrt(a);
  ck_assert(s21_isinf(result_s21_sqrt));
  ck_assert(s21_isinf(result_sqrt));
}
END_TEST

START_TEST(sqrt_7) {
  double a = s21_nan;
  double result_s21_sqrt = s21_sqrt(a);
  double result_sqrt = sqrt(a);
  ck_assert(s21_isnan(result_s21_sqrt));
  ck_assert(s21_isnan(result_sqrt));
}
END_TEST

START_TEST(sqrt_8) {
  double a = 12.5;
  ck_assert_ldouble_eq_tol(s21_sqrt(a), sqrt(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(sqrt_9) {
  double a = -12.5;
  double result_s21_sqrt = s21_sqrt(a);
  ck_assert(s21_isnan(result_s21_sqrt));
}
END_TEST

START_TEST(sqrt_10) {
  double a = s21_nan;
  double result_s21_sqrt = s21_sqrt(a);
  double result_sqrt = sqrt(a);
  ck_assert(s21_isnan(result_s21_sqrt));
  ck_assert(s21_isnan(result_sqrt));
}
END_TEST

START_TEST(sqrt_11) {
  double a = 10.3e-21;
  ck_assert_ldouble_eq_tol(s21_sqrt(a), sqrt(a), S21_EPS_TEST_6);
}

START_TEST(sqrt_12) {
  double a = 3e-10;
  ck_assert_ldouble_eq_tol(s21_sqrt(a), sqrt(a), S21_EPS_TEST_6);
}
END_TEST

Suite *sqrt_suite() {
  Suite *s = suite_create("s21_sqrt");
  TCase *tc = tcase_create("core_sqrt");

  tcase_add_test(tc, sqrt_1);
  tcase_add_test(tc, sqrt_2);
  tcase_add_test(tc, sqrt_3);
  tcase_add_test(tc, sqrt_4);
  tcase_add_test(tc, sqrt_5);
  tcase_add_test(tc, sqrt_6);
  tcase_add_test(tc, sqrt_7);
  tcase_add_test(tc, sqrt_8);
  tcase_add_test(tc, sqrt_9);
  tcase_add_test(tc, sqrt_10);
  tcase_add_test(tc, sqrt_11);
  tcase_add_test(tc, sqrt_12);

  suite_add_tcase(s, tc);
  return s;
}