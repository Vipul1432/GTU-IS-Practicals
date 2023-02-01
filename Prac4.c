#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char pt[100], key[100], table[26][26], c[100];
    int i = 0, j = 0, val;
    printf("Enter Plain text:");
    gets(pt);
    printf("Enter Key:");
    gets(key);
    for (i = 0, j = 0; pt[i] != NULL; i++, j++)
    {
        if (j >= strlen(key))
        {
            j = 0;
        }
        c[i] = 65 + (((toupper(pt[i]) - 65) + (toupper(key[j]) - 65)) % 26);
    }
    puts(c);
    for (i = 0, j = 0; c[i] != NULL; i++, j++)
    {
        if (j >= strlen(key))
        {
            j = 0;
        }
        val = (c[i] - toupper(key[j]));
        if (val < 0)
        {
            val = val + 26;
        }
        printf("%c", 65 + (val % 26));
    }
    getch();
}
