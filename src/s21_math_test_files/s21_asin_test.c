#include "s21_math_test.h"

START_TEST(asin_1) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), S21_EPS_TEST_6);
}
END_TEST

START_TEST(asin_2) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(asin_3) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(asin_4) {
  ck_assert_double_nan(s21_asin(s21_nan));
  ck_assert_double_nan(asin(s21_nan));
}
END_TEST

START_TEST(asin_4_1) { ck_assert_double_nan(s21_asin(1.5)); }
END_TEST

START_TEST(asin_5) {
  ck_assert_double_nan(s21_asin(-s21_inf));
  ck_assert_double_nan(asin(-s21_inf));
}
END_TEST

START_TEST(asin_6) {
  ck_assert_double_nan(s21_asin(s21_inf));
  ck_assert_double_nan(asin(s21_inf));
}
END_TEST

START_TEST(asin_7) {
  ck_assert_double_eq_tol(s21_asin(0.2), asin(0.2), S21_EPS_TEST_6);
}
END_TEST

START_TEST(asin_8) {
  ck_assert_double_eq_tol(s21_asin(-0.2), asin(-0.2), S21_EPS_TEST_6);
}
END_TEST

Suite *asin_suite() {
  Suite *s = suite_create("s21_asin");
  TCase *tc = tcase_create("core_asin");

  tcase_add_test(tc, asin_1);
  tcase_add_test(tc, asin_2);
  tcase_add_test(tc, asin_3);
  tcase_add_test(tc, asin_4);
  tcase_add_test(tc, asin_4_1);
  tcase_add_test(tc, asin_5);
  tcase_add_test(tc, asin_6);
  tcase_add_test(tc, asin_7);
  tcase_add_test(tc, asin_8);

  suite_add_tcase(s, tc);
  return s;
}