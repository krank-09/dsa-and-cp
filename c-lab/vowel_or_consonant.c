// Vowel or consonant.

#include<stdio.h>
int main(){
    char ch;
    printf("enter character : ");
    scanf("\n%c", &ch);
    switch (ch)
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
        printf("The alphabet is a vowel");
        break;
    default:
        printf("The alphabet is a consonant");
    }
return 0;
}
