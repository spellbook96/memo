#include <stdio.h>

int main()
{
  char c, *p;
  char s[12] = "Ritsumeikan";

  c = 'A';
  p = &c;
  printf("c: %c\n", c);
  printf("&c: %p\n\n", &c);
  printf("p: %p\n", p);
  printf("*p: %c\n\n", *p);

  *p = 'B';
  printf("c: %c\n", c);
  printf("&c: %p\n\n", &c);
  printf("p: %p\n", p);
  printf("*p: %c\n\n", *p);

  printf("s: %s\n", s);
  printf("s[0]: %c\n", s[0]);
  printf("s[1]: %c\n", s[1]);
  printf("s: %p\n", s);
  printf("&s[0]: %p\n", &s[0]);
  printf("*s: %c\n", *s);
  printf("*(s+1): %c\n\n", *(s+1));

  *(s+2) = 'T';
  printf("s: %s\n", s);

  return 0;
}
