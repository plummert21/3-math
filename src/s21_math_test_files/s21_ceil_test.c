#include "s21_math_test.h"

START_TEST(ceil_1) {
  double a = -5.3;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(ceil_2) {
  double a = -0.1;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(ceil_3) {
  double a = 0;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(ceil_4) {
  double a = 0.1;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(ceil_5) {
  double a = 5.3;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

Suite *ceil_suite() {
  Suite *s = suite_create("s21_ceil");
  TCase *tc = tcase_create("core_ceil");

  tcase_add_test(tc, ceil_1);
  tcase_add_test(tc, ceil_2);
  tcase_add_test(tc, ceil_3);
  tcase_add_test(tc, ceil_4);
  tcase_add_test(tc, ceil_5);

  suite_add_tcase(s, tc);
  return s;
}