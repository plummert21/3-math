#include "s21_math_test.h"

START_TEST(abs_1) {
  int a = -5;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(abs_2) {
  int a = 0;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(abs_3) {
  int a = 5;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

Suite *abs_suite() {
  Suite *s = suite_create("s21_abs");
  TCase *tc = tcase_create("core_abs");

  tcase_add_test(tc, abs_1);
  tcase_add_test(tc, abs_2);
  tcase_add_test(tc, abs_3);

  suite_add_tcase(s, tc);
  return s;
}