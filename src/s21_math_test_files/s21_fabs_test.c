#include "s21_math_test.h"

START_TEST(fabs_1) {
  double a = -5.3;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(fabs_2) {
  double a = -0.1;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(fabs_3) {
  double a = 0;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(fabs_4) {
  double a = 0.1;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(fabs_5) {
  double a = 5.3;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

Suite *fabs_suite() {
  Suite *s = suite_create("s21_fabs");
  TCase *tc = tcase_create("core_fabs");

  tcase_add_test(tc, fabs_1);
  tcase_add_test(tc, fabs_2);
  tcase_add_test(tc, fabs_3);
  tcase_add_test(tc, fabs_4);
  tcase_add_test(tc, fabs_5);

  suite_add_tcase(s, tc);
  return s;
}