#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') ?
    printf("%c is a vowel", ch): printf("%c is a consonant",ch);
    return 0;
}