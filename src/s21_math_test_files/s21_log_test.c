#include "s21_math_test.h"

START_TEST(log_nan) {
  double a = s21_nan;
  double result_s21_log = s21_log(a);
  double result_log = log(a);
  ck_assert(s21_isnan(result_s21_log));
  ck_assert(s21_isnan(result_log));
}
END_TEST

START_TEST(log_minus_nan) {
  double a = -s21_nan;
  double result_s21_log = s21_log(a);
  double result_log = log(a);
  ck_assert(s21_isnan(result_s21_log));
  ck_assert(s21_isnan(result_log));
}
END_TEST

START_TEST(log_inf) {
  double a = s21_inf;
  double result_s21_log = s21_log(a);
  double result_log = log(a);
  ck_assert(s21_isinf(result_s21_log));
  ck_assert(s21_isinf(result_log));
}
END_TEST

START_TEST(log_minus_inf) {
  double a = -s21_inf;
  double result_s21_log = s21_log(a);
  double result_log = log(a);
  ck_assert(s21_isnan(result_s21_log));
  ck_assert(s21_isnan(result_log));
}
END_TEST

START_TEST(log_0) {
  double a = 0.0;
  double result_s21_log = s21_log(a);
  ck_assert(s21_isinf(result_s21_log));
}
END_TEST

START_TEST(log_1_1) {
  double a = 1;
  ck_assert_ldouble_eq(s21_log(a), log(a));
}
END_TEST

START_TEST(log_1) {
  double a = 3;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(log_2) {
  double a = 13;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(log_3) {
  double a = 23;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(log_4) {
  double a = 33;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6 * 10000);
}
END_TEST

START_TEST(log_5) {
  double a = 43;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), 1000);
}
END_TEST

START_TEST(log_6) {
  double a = -3.0;
  double result_s21_log = s21_log(a);
  ck_assert(s21_isnan(result_s21_log));
}
END_TEST

START_TEST(log_7) {
  double a = 0.1;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(log_8) {
  double a = 0.5;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(log_9) {
  double a = 15.145;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(log_10) {
  double a = 27.125;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), (S21_EPS_TEST_6 * 1000));
}
END_TEST

START_TEST(max) {
  double a = DBL_MAX;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(min) {
  double a = DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_log(a), log(a), S21_EPS_TEST_6);
}
END_TEST

Suite *log_suite() {
  Suite *s = suite_create("s21_log");
  TCase *tc = tcase_create("core_log");

  tcase_add_test(tc, log_nan);
  tcase_add_test(tc, log_minus_nan);
  tcase_add_test(tc, log_inf);
  tcase_add_test(tc, log_minus_inf);
  tcase_add_test(tc, log_0);
  tcase_add_test(tc, log_1_1);
  tcase_add_test(tc, log_1);
  tcase_add_test(tc, log_2);
  tcase_add_test(tc, log_3);
  tcase_add_test(tc, log_4);
  tcase_add_test(tc, log_5);
  tcase_add_test(tc, log_6);
  tcase_add_test(tc, log_7);
  tcase_add_test(tc, log_8);
  tcase_add_test(tc, log_9);
  tcase_add_test(tc, log_10);
  tcase_add_test(tc, max);
  tcase_add_test(tc, min);
  suite_add_tcase(s, tc);
  return s;
}