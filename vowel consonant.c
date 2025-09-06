#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        switch(ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The entered character is vowel.");
            break;

        default:
            printf("The entered character is consonant.");
            break;
        }
    }

    else printf("The entered character is not an alphabet.");

    return 0;
}
