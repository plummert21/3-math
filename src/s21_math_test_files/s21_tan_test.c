#include "s21_math_test.h"

START_TEST(tan_PI) {
  double a = S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(a), tan(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(tan_negative_PI) {
  double a = -S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(a), tan(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(tan_0) {
  double a = 0;
  ck_assert_ldouble_eq_tol(s21_tan(a), tan(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(tan_3_4_PI) {
  double a = 3.0 / 4.0 * S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(a), tan(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(tan_nan) {
  double a = s21_nan;
  double result_s21 = s21_tan(a);
  double result = tan(a);
  ck_assert(s21_isnan(result_s21));
  ck_assert(s21_isnan(result));
}
END_TEST

START_TEST(tan_negative_nan) {
  double a = -s21_nan;
  double result_s21 = s21_tan(a);
  double result = tan(a);
  ck_assert(s21_isnan(result_s21));
  ck_assert(s21_isnan(result));
}
END_TEST

START_TEST(tan_inf) {
  double a = s21_inf;
  double result_s21 = s21_tan(a);
  double result = tan(a);
  ck_assert(s21_isnan(result_s21));
  ck_assert(s21_isnan(result));
}
END_TEST

START_TEST(tan_negative_inf) {
  double a = -s21_inf;
  double result_s21 = s21_tan(a);
  double result = tan(a);
  ck_assert(s21_isnan(result_s21));
  ck_assert(s21_isnan(result));
}
END_TEST

Suite *tan_suite() {
  Suite *s = suite_create("s21_tan");
  TCase *tc = tcase_create("core_tan");

  tcase_add_test(tc, tan_PI);
  tcase_add_test(tc, tan_negative_PI);
  tcase_add_test(tc, tan_0);
  tcase_add_test(tc, tan_3_4_PI);
  tcase_add_test(tc, tan_nan);
  tcase_add_test(tc, tan_negative_nan);
  tcase_add_test(tc, tan_inf);
  tcase_add_test(tc, tan_negative_inf);
  suite_add_tcase(s, tc);
  return s;
}