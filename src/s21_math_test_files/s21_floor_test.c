#include "s21_math_test.h"

START_TEST(floor_1) {
  double a = -5.3;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_2) {
  double a = -0.1;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_3) {
  double a = 0;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_4) {
  double a = 0.1;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_5) {
  double a = 5.3;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_6) {
  double a = 3.0;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_7) {
  double a = -3.0;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_8) {
  double a = 0.8;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(floor_9) {
  double a = -3646546511548795681.665484148415;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

Suite *floor_suite() {
  Suite *s = suite_create("s21_floor");
  TCase *tc = tcase_create("core_floor");

  tcase_add_test(tc, floor_1);
  tcase_add_test(tc, floor_2);
  tcase_add_test(tc, floor_3);
  tcase_add_test(tc, floor_4);
  tcase_add_test(tc, floor_5);
  tcase_add_test(tc, floor_6);
  tcase_add_test(tc, floor_7);
  tcase_add_test(tc, floor_8);
  tcase_add_test(tc, floor_9);

  suite_add_tcase(s, tc);
  return s;
}