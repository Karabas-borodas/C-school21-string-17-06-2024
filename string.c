
// #include <string.h>
#include "lib_string.h"

size_t my_strcspn(const char *str1, const char *str2);
size_t my_strlen(const char *str);
int main() {
  char *str1 = "Ferst string";
  char *str2 = "s";

  size_t var = my_strcspn(str1, str2);
  printf("%sn", str1);
  printf("%sn\n", str2);

  printf("%ld\n", var);

  // var = strcspn (str1, str2);
  // printf("TRUe %ld\n", var);

  var = my_strlen(str1);
  printf("%ld\n", var);

  // var = strlen(str1);
  // printf("TRUe %ld\n", strlen(str1));

  return 0;
}

size_t my_strcspn(const char *str1, const char *str2) {
  size_t first_arrival = 0;
  int size_str1 = my_strlen(str1);
  int size_str2 = my_strlen(str2);
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

size_t my_strlen(const char *str) {
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
