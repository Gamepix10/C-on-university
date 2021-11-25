#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100], s_new[100], s1[100] ;
    char *slova;
    char c;
    int i,j;
    const char *separator = " ";
    gets(s);
    j = 0;
    for (i = 0; i< strlen(s); i++){
        s1[i] = s[i];
    }
    for (i = 0; i< strlen(s); i++)
    {
        slova = strtok(s,separator);
        c = s[i];
        if (strchr(slova,c) == NULL)
        {
            s_new[j] = c;
            j += 1;
        }
        for (i = 0; i < strlen(s); i++)
        {

        }
        slova = strtok(s,separator);
        c = s[i];
        if (strchr(slova,c) == NULL)
        {
            s_new[j] = c;
            j += 1;
        }


    //puts(slova);
    printf("%s", slova);
    return 0;
}
