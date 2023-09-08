#include "s21_math.h"

#include <stdio.h>

int s21_abs(int x) { return x < 0 ? -x : x; }

long double s21_fabs(double x) {
  return x < 0 ? -(long double)x : (long double)x;
}

long double s21_ceil(double x) {
  long long intX = (long long int)x;
  if (intX >= x) {
    return intX;
  } else {
    return intX + 1;
  }
}

long double s21_floor(double x) {
  long double result = 0;
  if (x >= 0.0) {
    result = (long double)((long long int)x);
  } else {
    if ((long long int)(x)-x != 0) {
      result = (long double)((long long int)(x - 1.0));
    } else {
      result = (long double)((long long int)x);
    }
  }
  return result;
}

long double s21_fmod(double x, double y) {
  long double res = 0;
  if (y == 0.0) {
    res = s21_nan;
  } else if (s21_isinf(x) || s21_isnan(x) || s21_isnan(y)) {
    res = s21_nan;
  } else if (s21_isinf(y)) {
    res = x;
  } else {
    res = (long double)x - (long double)y * (long long int)(x / y);
  }
  return res;
}

long double s21_exp(double x) {
  long double result = 1.0;
  long double term = 1.0;
  int n = 1;
  if (s21_isnan(x)) {
    result = s21_nan;
  } else if (s21_isinf(x)) {
    result = x < 0 ? 0 : x;
  } else {
    while (term > S21_EPS) {
      term *= (long double)s21_fabs(x) / n;
      result += term;
      n++;
      if (result > DBL_MAX) {
        result = s21_inf;
        break;
      }
    }
    result = x < 0 ? 1.0 / result : result;
  }
  return result;
}

long double s21_log(double x) {
  long double result = 0.0;
  if (s21_isnan(x)) {
    result = s21_nan;
  } else if (s21_isinf(x)) {
    result = x < 0 ? s21_nan : s21_inf;
  } else if (x < 0.0) {
    result = s21_nan;
  } else if (x == 0.0) {
    result = -s21_inf;
  } else if ((x > 0.0) && (x < 1.0)) {
    result = -s21_log(1.0 / x);
  } else if (x == 1.0) {
    result = 0.0;
  } else {
    int e_pow = 0;
    for (; x >= S21_E; e_pow++) x /= S21_E;
    long double term = ((long double)x - 1.0) / (long double)x;
    long double power = term;
    int n = 1;
    while (power > S21_EPS) {
      result += power;
      n++;
      power *= term * (n - 1) / n;
    }
    result += e_pow;
  }
  return result;
}

long double s21_pow(double base, double exp) {
  long double result = 0;
  if (s21_isnan(base)) {
    result = -base;
  } else if (s21_isinf(base) && exp < 0) {
    result = 0.0;
  } else if (exp == 0 || base == 1) {
    result = 1;
  } else if (base == 0 && exp < 0) {
    result = s21_inf;
  } else if ((base < 0) && (s21_floor(exp) != exp)) {
    result = s21_isinf(exp) ? s21_inf : -s21_nan;
  } else if (base < 0) {
    result = s21_pow(-base, exp);
    if (s21_fmod(exp, 2) != 0) result = -result;
  } else {
    result = s21_exp(s21_log(base) * exp);
  }
  return result;
}

long double s21_sqrt(double x) {
  if (x < 0) return s21_nan;
  if (x == 0) return 0;
  return s21_pow((long double)x, 0.5);
}

long double s21_sin(double x) {
  long double result = 0.0;
  if (s21_isinf(x)) {
    result = s21_nan;
  } else {
    x = s21_change_range_X(x, 2 * S21_M_PI);
    if (x == S21_M_PI || x == -S21_M_PI) {
      result = 0;
    } else if (x == S21_M_PI / 2) {
      result = 1;
    } else if (x == -S21_M_PI / 2) {
      result = -1;
    } else {
      long double term = 1.0;
      int n = 0;
      int check = 0;
      while (term > S21_EPS) {
        n++;
        term *= (long double)s21_fabs(x) / n;
        if (n % 2 == 1) {
          if (check == 0) {
            result += term;
            check = 1;
          } else {
            result -= term;
            check = 0;
          }
        }
      }
      result = x < 0 ? -result : result;
    }
  }
  return result;
}

long double s21_cos(double x) {
  double angle = (long double)x + S21_M_PI / 2;
  return s21_sin(angle);
}

long double s21_tan(double x) {
  long double result = 0;
  if (s21_isinf(x)) {
    result = s21_nan;
  } else if (x == 0) {
    result = 0;
  } else if (x == S21_M_PI || x == -S21_M_PI) {
    result = 0;
  } else if (s21_fabs(x) == 3.0 / 4.0 * S21_M_PI) {
    result = x > 0 ? -1 : 1;
  } else {
    x = s21_change_range_X(x, S21_M_PI / 2);
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}

long double s21_atan(double x) {
  long double result = 0;
  if (s21_isinf(x)) {
    result = S21_M_PI / 2;
  } else if (x == 1) {
    result = S21_M_PI / 4;
  } else if (x == -1) {
    result = -S21_M_PI / 4;
  } else if (s21_isnan(x)) {
    result = s21_nan;
  } else if (-1. < x && x < 1.) {
    for (int i = 0; i < 700; i++) {
      result += s21_pow(-1, i) * s21_pow(x, 1 + (2 * i)) / (1 + (2 * i));
    }
  } else {
    for (int i = 0; i < 700; i++) {
      result += s21_pow(-1, i) * s21_pow(x, -1 - (2 * i)) / (1 + (2 * i));
    }
    result = (S21_M_PI / 2) * (s21_sqrt(s21_pow(x, 2)) / x) - result;
  }
  return result;
}

long double s21_acos(double x) {
  long double result = 0;
  if (s21_isinf(x) || s21_isnan(x)) {
    result = s21_nan;
  } else if (s21_abs(x) > 1) {
    result = s21_nan;
  } else if (x == -1) {
    result = S21_M_PI;
  } else if (x == 0) {
    result = S21_M_PI / 2;
  } else if (0. < x && x < 1.) {
    result = s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
  } else if (-1. < x && x < 0.) {
    result = S21_M_PI + s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
  }
  return result;
}

long double s21_asin(double x) {
  long double result = 0;
  if (s21_isnan(x) || s21_isnan(x)) {
    result = s21_nan;
  } else if (s21_fabs(x) == 1) {
    result = x > 0 ? S21_M_PI / 2 : -S21_M_PI / 2;
  } else if (s21_abs(x) < 1) {
    result = s21_atan(x / s21_sqrt(1 - s21_pow(x, 2)));
  } else {
    result = s21_nan;
  }
  return result;
}

// ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ

int s21_isnan(double x) { return x != x; }

int s21_isinf(double x) { return (x == 1.0 / 0.0 || x == -1.0 / 0.0); }

double s21_change_range_X(double x, double lim) {
  while (x < -lim || lim < x) {
    if (x > lim) {
      x -= lim;
    } else {
      x += lim;
    }
  }
  return x;
}