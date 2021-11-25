#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void stroka(char s[])
{
    char s_new[100];
    char c;
    int i,j;
    j = 0;
    for (i=0; i< strlen(s); i++)
    {
        c = s[i];
        if (strchr(s_new,c) == NULL && c != ' ')
        {
            s_new[j] = c;
            j += 1;
        }
        if ( c == ' ')
        {
            s_new[j] = c;
            j += 1;
        }
    }
    puts(s_new);
}

int main()
{
    char s[100];
    gets(s);
    stroka(s);
    return 0;
}
