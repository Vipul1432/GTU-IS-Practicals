#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char p[100], k[30], q[30], c[100], d[100];
    int i, j;
    printf("Enter plain text: ");
    gets(p);
    for (i = 0; i < 26; i++)
    {
        q[i] = i + 97;
        printf("\t %c", q[i]);
        // k[i]=getche();
        k[i] = getch();
        printf("%c", k[i]);
    }
    for (i = 0; p[i] != NULL; i++)
    {
        int index = p[i] - 97;
        c[i] = k[index];
    }
    printf("\nCipher text is: ");
    puts(c);
    for (i = 0; c[i] != NULL; i++)
    {
        for (j = 0; k[j] != NULL; j++)
        {
            if (c[i] == k[j])
            {
                d[i] = q[j];
            }
        }
    }
    printf("Decripted text is: ");
    puts(d);
    getch();
}
