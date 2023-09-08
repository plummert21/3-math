#include "s21_math_test.h"

START_TEST(fmod_1) {
  double a = -55.387;
  double b = 21.25;
  ck_assert_ldouble_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

START_TEST(fmod_2) {
  double a = -145.3;
  double b = -32.5;
  ck_assert_ldouble_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

START_TEST(fmod_3) {
  double a = -75.3;
  double b = 0.0;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_4) {
  double a = 785.543;
  double b = 23.98;
  ck_assert_ldouble_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

START_TEST(fmod_5) {
  double a = 985.653;
  double b = -71.75;
  ck_assert_ldouble_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

START_TEST(fmod_6) {
  double a = 85.63;
  double b = 0.0;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_7) {
  double a = s21_nan;
  double b = 12.5;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_8) {
  double a = s21_inf;
  double b = 12.5;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_9) {
  double a = 12.5;
  double b = s21_nan;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_10) {
  double a = 12.5;
  double b = s21_inf;
  ck_assert_ldouble_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

START_TEST(fmod_11) {
  double a = s21_nan;
  double b = s21_nan;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_12) {
  double a = s21_nan;
  double b = s21_inf;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_13) {
  double a = s21_inf;
  double b = s21_nan;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_14) {
  double a = s21_inf;
  double b = s21_inf;
  double result_s21_fmod = s21_fmod(a, b);
  double result_fmod = fmod(a, b);
  ck_assert(s21_isnan(result_s21_fmod));
  ck_assert(s21_isnan(result_fmod));
}
END_TEST

START_TEST(fmod_15) {
  double a = 0;
  double b = -32.5;
  ck_assert_ldouble_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

Suite *fmod_suite() {
  Suite *s = suite_create("s21_fmod");
  TCase *tc = tcase_create("core_fmod");

  tcase_add_test(tc, fmod_1);
  tcase_add_test(tc, fmod_2);
  tcase_add_test(tc, fmod_3);
  tcase_add_test(tc, fmod_4);
  tcase_add_test(tc, fmod_5);
  tcase_add_test(tc, fmod_6);
  tcase_add_test(tc, fmod_7);
  tcase_add_test(tc, fmod_8);
  tcase_add_test(tc, fmod_9);
  tcase_add_test(tc, fmod_10);
  tcase_add_test(tc, fmod_11);
  tcase_add_test(tc, fmod_12);
  tcase_add_test(tc, fmod_13);
  tcase_add_test(tc, fmod_14);
  tcase_add_test(tc, fmod_15);

  suite_add_tcase(s, tc);
  return s;
}