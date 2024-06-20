
// #include <string.h>
#include "lib_string.h"

size_t s21_strcspn(const char *str1, const char *str2);
size_t s21_strlen(const char *str);
int main() {
  char *str1 = "Ferst string";
  char *str2 = "s";

  size_t var = s21_strcspn(str1, str2);
  printf("%sn", str1);
  printf("%sn\n", str2);

  printf("%ld\n", var);

  // var = strcspn (str1, str2);
  // printf("TRUe %ld\n", var);

  var = s21_strlen(str1);
  printf("%ld\n", var);

  // var = strlen(str1);
  // printf("TRUe %ld\n", strlen(str1));
  char *a=s21_strerror(3);

  printf(" %s", a);

  return 0;
}


size_t s21_strlen(const char *str) {
  size_t str_len = 0;
  int i = 0;
  if (str[0] != '\0') {
    while (str[i] != '\0') {
      str_len++;
      i++;
    }
  }
  return str_len;
}
