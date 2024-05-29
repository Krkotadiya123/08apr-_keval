//Q.10 Vowel or Consonant using switch case //

#include <stdio.h>

main() 
 {
    char a;
    
    printf("Enter any alphabet: ");
    scanf("%c", &a);
   
    switch (a) {
        case 'a'||'e'||'i'||'o'||'u':
        
            printf("%c is a vowel.\n", a);
            break;
        default:
            printf("%c is a consonant.\n", a);
    }
}
