#include<stdio.h>
char main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': printf("Entered character is a vowel\n");
        break;
        case 'e': printf("Entered character is a vowel\n");
        break;
        case 'i': printf("Entered character is a vowel\n");
        break;
        case 'o': printf("Entered character is a vowel\n");
        break;
        case 'u': printf("Entered character is a vowel\n");
        break;
        case 'A': printf("Entered character is a vowel\n");
        break;
        case 'E': printf("Entered character is a vowel\n");
        break;
        case 'I': printf("Entered character is a vowel\n");
        break;
        case 'O': printf("Entered character is a vowel\n");
        break;
        case 'U': printf("Entered character is a vowel\n");
        break;
        default: printf("Entered character is consonant\n");
    }
    return 0;
    
}