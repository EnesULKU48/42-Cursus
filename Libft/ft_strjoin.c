#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int len;
    int i;
    int j;

    len = ft_strlen(s1) + ft_strlen(s2);

    str = (char *)malloc((len + 1) * sizeof(char));

    if (!str)
        return (NULL);

    i = 0;
    j = 0;
    while (s1[i])
        str[j++] = s1[i++];

    i = 0;
    while (s2[i])
        str[j++] = s2[i++];

    str[j] = '\0';

    return (str);
}
/*char a[] = "Enes \n";
    char b[] = "ÜLKÜ";
    printf("%s", ft_strjoin(a, b));*/