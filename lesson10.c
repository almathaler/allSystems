#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char *s = "hello";
  char s1[10] = "hello";
  printf("s points to: %p\n", s);
  printf("s1 points to: %p\n", s1);
  printf("address of \"hello\": %p\n", &"hello");

  int x;
  for (x=0; x<10; x++){
    printf("This is what is in s1[%d]: %d \n", x, s1[x]);
  }

//

    printf("Now onto the excersizes: \nStrcpy: \n");
    char almaArray[10] = "alma";
    char *alma = almaArray;
    char copyAlmaArray[5];
    char *copyAlma = copyAlmaArray;
    strcpy(copyAlma, alma);
    //howcome you don't need the dereference operator here?
    printf("copyAlma: %s \n", copyAlma);
    printf("almaArray: %s \n", alma);
    //
    printf("strcat: \n");
    strcat(almaArray, copyAlma);
    printf("almaArray: %s \n", alma);
    //
    printf("strcmp: \n");
    printf("comparing almaArray (almaalma) and almaCopy (alma) : %d \n", strcmp(alma, copyAlma));
    //
    printf("strchr: \n");
    char *l = strchr(copyAlma, 'l');
    char *lC = strchr(almaArray, 'l');
    printf("the first instance of 'l' in the almaCopy: %s \n", l);
    printf("the first instance of 'l' in almaArray: %s \n", lC);
  return 0;
}
