#include "s21_math_test.h"

START_TEST(atan_inf) {
  ck_assert_double_eq_tol(s21_atan(s21_inf), atan(s21_inf), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_1) {
  ck_assert_double_eq_tol(s21_atan(0), atan(0), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_2) {
  ck_assert_double_eq_tol(s21_atan(-1), atan(-1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_3) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_4) {
  ck_assert_double_nan(s21_atan(s21_nan));
  ck_assert_double_nan(atan(s21_nan));
}
END_TEST

START_TEST(atan_5) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_6) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_7) {
  ck_assert_double_eq_tol(s21_atan(0.2), atan(0.2), S21_EPS_TEST_6);
}
END_TEST

START_TEST(atan_8) {
  ck_assert_double_eq_tol(s21_atan(-0.2), atan(-0.2), S21_EPS_TEST_6);
}
END_TEST

Suite *atan_suite() {
  Suite *s = suite_create("s21_atan");
  TCase *tc = tcase_create("core_atan");

  tcase_add_test(tc, atan_inf);
  tcase_add_test(tc, atan_1);
  tcase_add_test(tc, atan_2);
  tcase_add_test(tc, atan_3);
  tcase_add_test(tc, atan_4);
  tcase_add_test(tc, atan_5);
  tcase_add_test(tc, atan_6);
  tcase_add_test(tc, atan_7);
  tcase_add_test(tc, atan_8);

  suite_add_tcase(s, tc);
  return s;
}