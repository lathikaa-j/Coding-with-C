#include<stdio.h>
int main()
{
    char a;
    printf("Enter any alphabet:");
    scanf("%c",&a);

    switch(a)
    {
        case 'a': printf("The alphabet is a vowel");
        break;

        case 'e': printf("The alphabet is a vowel");
        break;

        case 'i': printf("The alphabet is a vowel");
        break;

        case 'o': printf("The alphabet is a vowel");
        break;

        case 'u': printf("The alphabet is a vowel");
        break;

        default: printf("The alphabet is a consonant");
    }

    return 0;
}
