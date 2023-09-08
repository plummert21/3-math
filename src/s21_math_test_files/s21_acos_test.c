#include "s21_math_test.h"

START_TEST(acos_pi) { ck_assert_double_nan(s21_acos(S21_M_PI)); }
END_TEST

START_TEST(acos_1) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), S21_EPS_TEST_6);
}
END_TEST

START_TEST(acos_2) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(acos_3) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(acos_4) {
  ck_assert_double_nan(s21_acos(s21_nan));
  ck_assert_double_nan(acos(s21_nan));
}
END_TEST

START_TEST(acos_5) {
  ck_assert_double_nan(s21_acos(-s21_inf));
  ck_assert_double_nan(acos(-s21_inf));
}
END_TEST

START_TEST(acos_6) {
  ck_assert_double_nan(s21_acos(s21_inf));
  ck_assert_double_nan(acos(s21_inf));
}
END_TEST

START_TEST(acos_7) {
  ck_assert_double_eq_tol(s21_acos(0.2), acos(0.2), S21_EPS_TEST_6);
}
END_TEST

START_TEST(acos_8) {
  ck_assert_double_eq_tol(s21_acos(-0.2), acos(-0.2), S21_EPS_TEST_6);
}
END_TEST

Suite *acos_suite() {
  Suite *s = suite_create("s21_acos");
  TCase *tc = tcase_create("core_acos");

  tcase_add_test(tc, acos_pi);
  tcase_add_test(tc, acos_1);
  tcase_add_test(tc, acos_2);
  tcase_add_test(tc, acos_3);
  tcase_add_test(tc, acos_4);
  tcase_add_test(tc, acos_5);
  tcase_add_test(tc, acos_6);
  tcase_add_test(tc, acos_7);
  tcase_add_test(tc, acos_8);

  suite_add_tcase(s, tc);
  return s;
}