#include "libft.h"

static  int ft_computesize(const char *s, char c)
{
    size_t  i;
    int     ok;
    int     cnt;

    i = 0;
    ok = 0;
    cnt = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            ok = 0;
            while(s[i] == c && s[i] != '\0')
                i++;
        }
        if(s[i] != c)
        {
            if(ok == 0)
            {
                ok = 1;
                cnt++;
            }
            while(s[i] != c && s[i] != '\0')
                i++;
        }
    }
    return (cnt);
}

static  int ft_wordlen(const char *s, char c)
{
    int i;

    i = 0;
    while (s[i] != c && i < (int)ft_strlen(s))
        i++;
    return(i);
}

char        **ft_strsplit(const char *s, char c)
{
    char    **tokens;
    size_t  words;
    size_t  i;

    i = 0;
    words = ft_computesize(s, c);
    tokens = (char**)malloc(sizeof(char*) * words + 1);
    while(words--)
    {
            while(*s == c)
                s++;
            tokens[i] = ft_strnew(ft_wordlen(s, c));
            tokens[i] = ft_strsub(s, 0, ft_wordlen(s, c));
            s += ft_wordlen(s, c);
            i++;
    }
    tokens[i] = NULL;
    return (tokens);
}
