#include <stdio.h>
#include <string.h>
// #include "lib_string.h"

size_t my_strcspn();

int main() {
  char  *str1 ="Ferst string";
  char  *str2 ="sMAMA mila ramu";

  size_t var = my_strcspn(str1, str2);  
  printf ("%sn", str1);
  printf ("%sn\n", str2);

  printf("%ldn", var);  

  return 0;
}

size_t my_strcspn(const char *str1,const  char *str2){
  size_t first_arrival=0;
  int size_str1=strlen (str1);  
  int size_str2=strlen (str2); 
  int i, j;
  for (i=0; i<size_str1;i++ ){
    for (j=0; j<size_str2; j++) { 
      if (str1[i]==str2[j]) {
        return first_arrival;
      }
    }
    first_arrival++;  
  }
  return first_arrival;
}

