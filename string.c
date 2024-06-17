#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
const char  *str1 ="sFerst string";
const char  *str2 ="sMAMA mila ramu";
size_t var;
var = size_t strcspn(const char *str1, const char *str2);
 printf ("%s\n", str1);
  printf ("%s\n", str2);

printf("%ld", var);

  return 0;
}

size_t strcspn(const char *str1, const char *str2){
  size_t first_arrival;
  size_t size_str1=strlen (str1);
  size_t size_str2=strlen (str2);
  int i, j;
  i=j=0;
for (i=0; i<size_str1;i++ ){
 for (j=0; j<size_str2; j++);
 {  if (str1[i]==str2[j])
    {return first_arrival;}
    if (i==size_str1)
    {
    return first_arrival;
    }

 }

}

  return first_arrival;
  
}