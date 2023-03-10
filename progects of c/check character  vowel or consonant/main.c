#include <stdio.h>
#include <stdlib.h>

int main()
{
 char ch;
    int small_vowel, captial_vowel;
    printf("Enter the character: ");
    scanf("%c", &ch);
    small_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    captial_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (small_vowel || captial_vowel)
        printf("%c is a vowel.", ch);
    else
        printf("%c is a consonant.", ch);
    return 0;
}
