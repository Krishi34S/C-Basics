//Program to divide a String into two new strings whenever encounters a space.

#include<stdio.h>
#include<string.h>
int main()
{
    char ch, str[100], s1[100], s2[100];
    int i=0, j=0, len;
    printf("Input a string:\n");
    scanf("%[^\n]",str);

    len = strlen(str); //Length of the string is determined.

    //The first one of the new string is taken by copying the original string till it encounters a space using while loop
    while(str[i] != ' ') 
    {
        s1[j] = str[i];
        i++;
        j++;
    }
    s1[j] = '\0';

    //The later part of the original string after the space is taken by revsering the original string till it encounters a space.
    i = len - 1;
    for (j = 0; str[i] != ' '; j++)
    { 
        s2[j] = str[i];
        i--;
    }
    s2[j] = '\0';

    //The reversed string is reversed again to get the straight output.
    strrev(s2);

    printf("1st part: %s\n2nd part: %s", s1,s2);

    return 0;
}