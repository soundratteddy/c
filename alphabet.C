#include <stdio.h>  
   
void main() {  
    char a;
    printf("Enter a Character\n");  
    scanf("%c", &a);  
       
    if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z')){
        printf("%c is an Alphabet\n", a);  
    } else {  
        printf("%c is Not an Alphabet\n", a);  
    }
   
}
