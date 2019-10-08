#include <stdlib.h>

char* ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if(s[i] == c)
            return (&s[i]);
        i++;
    }
    return (NULL);
}

int main() {
  char* x = ft_strchr("test",(int)'s');
  printf("ft : %p",x);
  return (0);
}
