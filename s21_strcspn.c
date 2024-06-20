
#include "lib_string.h"


size_t s21_strcspn(const char *str1, const char *str2) {
  size_t first_arrival = 0;
  int size_str1 = s21_strlen(str1);
  int size_str2 = s21_strlen(str2);
  int flag = 0;
  if (size_str2 != 0) {
    int i, j;
    for (i = 0; i < size_str1; i++) {
      for (j = 0; j < size_str2; j++) {
        if (str1[i] == str2[j]) {
          first_arrival = (size_t)i;
          flag = -1;
          break;
        }
      }
      if (flag == -1) {
        break;
      }
    }

  } else {
    first_arrival = (size_t)size_str1;
  }
  return first_arrival;
}
