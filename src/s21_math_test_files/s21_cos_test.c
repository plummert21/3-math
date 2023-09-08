#include "s21_math_test.h"

START_TEST(cos_PI) {
  double a = S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_PI) {
  double a = -S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0) {
  double a = 0;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_3_4_PI) {
  double a = 3.0 / 4.0 * S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_5_2_PI) {
  double a = 5.0 / 2.0 * S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_nan) {
  double a = s21_nan;
  double result_s21 = s21_cos(a);
  double result = cos(a);
  ck_assert(s21_isnan(result));
  ck_assert(s21_isnan(result_s21));
}
END_TEST

START_TEST(cos_inf) {
  double a = s21_inf;
  double result_s21 = s21_cos(a);
  double result = cos(a);
  ck_assert(s21_isnan(result));
  ck_assert(s21_isnan(result_s21));
}
END_TEST

START_TEST(cos_negative_inf) {
  double a = -s21_inf;
  double result_s21 = s21_cos(a);
  double result = cos(a);
  ck_assert(s21_isnan(result));
  ck_assert(s21_isnan(result_s21));
}
END_TEST

START_TEST(cos_PI_half) {
  double a = S21_M_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_PI_half) {
  double a = -S21_M_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_1) {
  double a = 0.1;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_2) {
  double a = 0.2;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_3) {
  double a = 0.3;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_4) {
  double a = 0.4;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_5) {
  double a = 0.5;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_6) {
  double a = 0.6;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_7) {
  double a = 0.7;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_8) {
  double a = 0.8;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_0_9) {
  double a = 0.9;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_1) {
  double a = 1.0;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_1) {
  double a = -0.1;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_2) {
  double a = -0.2;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_3) {
  double a = -0.3;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_4) {
  double a = -0.4;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_5) {
  double a = -0.5;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_6) {
  double a = -0.6;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_7) {
  double a = -0.7;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_8) {
  double a = -0.8;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_0_9) {
  double a = -0.9;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_negative_1) {
  double a = -1.0;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(cos_min) {
  double a = DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_cos(a), cos(a), S21_EPS_TEST_6);
}
END_TEST

Suite *cos_suite() {
  Suite *s = suite_create("s21_cos");
  TCase *tc = tcase_create("core_cos");

  tcase_add_test(tc, cos_PI);
  tcase_add_test(tc, cos_negative_PI);
  tcase_add_test(tc, cos_0);
  tcase_add_test(tc, cos_3_4_PI);
  tcase_add_test(tc, cos_5_2_PI);
  tcase_add_test(tc, cos_nan);
  tcase_add_test(tc, cos_inf);
  tcase_add_test(tc, cos_negative_inf);
  tcase_add_test(tc, cos_PI_half);
  tcase_add_test(tc, cos_negative_PI_half);
  tcase_add_test(tc, cos_0_1);
  tcase_add_test(tc, cos_0_2);
  tcase_add_test(tc, cos_0_3);
  tcase_add_test(tc, cos_0_4);
  tcase_add_test(tc, cos_0_5);
  tcase_add_test(tc, cos_0_6);
  tcase_add_test(tc, cos_0_7);
  tcase_add_test(tc, cos_0_8);
  tcase_add_test(tc, cos_0_9);
  tcase_add_test(tc, cos_1);
  tcase_add_test(tc, cos_negative_0_1);
  tcase_add_test(tc, cos_negative_0_2);
  tcase_add_test(tc, cos_negative_0_3);
  tcase_add_test(tc, cos_negative_0_4);
  tcase_add_test(tc, cos_negative_0_5);
  tcase_add_test(tc, cos_negative_0_6);
  tcase_add_test(tc, cos_negative_0_7);
  tcase_add_test(tc, cos_negative_0_8);
  tcase_add_test(tc, cos_negative_0_9);
  tcase_add_test(tc, cos_negative_1);
  tcase_add_test(tc, cos_min);
  suite_add_tcase(s, tc);
  return s;
}
