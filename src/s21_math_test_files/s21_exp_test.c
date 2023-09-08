#include "s21_math_test.h"

START_TEST(exp_nan) {
  double a = s21_nan;
  double result_s21_exp = s21_exp(a);
  double result_exp = exp(a);
  ck_assert(s21_isnan(result_s21_exp));
  ck_assert(s21_isnan(result_exp));
}
END_TEST

START_TEST(exp_minus_nan) {
  double a = -s21_nan;
  double result_s21_exp = s21_exp(a);
  double result_exp = exp(a);
  ck_assert(s21_isnan(result_s21_exp));
  ck_assert(s21_isnan(result_exp));
}
END_TEST

START_TEST(exp_inf) {
  double a = s21_inf;
  double result_s21_exp = s21_exp(a);
  double result_exp = exp(a);
  ck_assert(s21_isinf(result_s21_exp));
  ck_assert(s21_isinf(result_exp));
}
END_TEST

START_TEST(exp_minus_inf) {
  double a = -s21_inf;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_0) {
  double a = 0;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_1) {
  double a = 3;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_2) {
  double a = 13;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_3) {
  double a = 23;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_4) {
  double a = 33;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6 * 10000);
}
END_TEST

START_TEST(exp_5) {
  double a = 43;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), 1000);
}
END_TEST

START_TEST(exp_6) {
  double a = -3;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_7) {
  double a = -13;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_8) {
  double a = -23;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_9) {
  double a = -33;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_10) {
  double a = -43;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_11) {
  double a = -53;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_12) {
  double a = -63;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_13) {
  double a = -73;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_14) {
  double a = -83;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_15) {
  double a = -93;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_16) {
  double a = -103;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_17) {
  double a = -203;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_18) {
  double a = -303;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_19) {
  double a = -403;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_20) {
  double a = -503;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_21) {
  double a = 0.1;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_22) {
  double a = 0.5;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_23) {
  double a = -0.1;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_24) {
  double a = -0.5;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_25) {
  double a = 15.145;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_26) {
  double a = 27.125;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), (S21_EPS_TEST_6 * 1000));
}
END_TEST

START_TEST(exp_27) {
  double a = -15.145;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(exp_28) {
  double a = -27.125;
  ck_assert_ldouble_eq_tol(s21_exp(a), exp(a), S21_EPS_TEST_6);
}
END_TEST

START_TEST(max) {
  double a = DBL_MAX;
  ck_assert_ldouble_eq(exp(a), s21_exp(a));
}
END_TEST

START_TEST(min) {
  double a = DBL_MIN;
  ck_assert_ldouble_eq(exp(a), s21_exp(a));
}
END_TEST

Suite *exp_suite() {
  Suite *s = suite_create("s21_exp");
  TCase *tc = tcase_create("core_exp");

  tcase_add_test(tc, exp_nan);
  tcase_add_test(tc, exp_minus_nan);
  tcase_add_test(tc, exp_inf);
  tcase_add_test(tc, exp_minus_inf);
  tcase_add_test(tc, exp_0);
  tcase_add_test(tc, exp_1);
  tcase_add_test(tc, exp_2);
  tcase_add_test(tc, exp_3);
  tcase_add_test(tc, exp_4);
  tcase_add_test(tc, exp_5);
  tcase_add_test(tc, exp_6);
  tcase_add_test(tc, exp_7);
  tcase_add_test(tc, exp_8);
  tcase_add_test(tc, exp_9);
  tcase_add_test(tc, exp_10);
  tcase_add_test(tc, exp_11);
  tcase_add_test(tc, exp_12);
  tcase_add_test(tc, exp_13);
  tcase_add_test(tc, exp_14);
  tcase_add_test(tc, exp_15);
  tcase_add_test(tc, exp_16);
  tcase_add_test(tc, exp_17);
  tcase_add_test(tc, exp_18);
  tcase_add_test(tc, exp_19);
  tcase_add_test(tc, exp_20);
  tcase_add_test(tc, exp_21);
  tcase_add_test(tc, exp_22);
  tcase_add_test(tc, exp_23);
  tcase_add_test(tc, exp_24);
  tcase_add_test(tc, exp_25);
  tcase_add_test(tc, exp_26);
  tcase_add_test(tc, exp_27);
  tcase_add_test(tc, exp_28);
  tcase_add_test(tc, max);
  tcase_add_test(tc, min);
  suite_add_tcase(s, tc);
  return s;
}