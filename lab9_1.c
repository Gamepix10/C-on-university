#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100], s_new[100];
    char c;
    int i,j,f;
    gets(s);
    for (i = 1,j = 1,f = 0; i< strlen(s); i++) {
        c = s[0];
        s_new[0] = c;
        if ( c != s[i] && s[i] != ' ')
        {
            s_new[j++] = s[i];
            f++;
        }
        if ( s[i] == ' ')
        {
            s_new[j++] = s[i];
            f++;
        }
    }
    puts(s_new);
    return 0;
}
