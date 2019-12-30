#include <stdio.h>
#include <string.h>

int main() {
    int year;

    printf("Enter year : ");
    scanf("%d", &year);
   
    int num[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000}; 
    
    char sym[13][3] = { "I", "IV", "V","IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    char roman[40] = "";
    int i = 12;
    int repetitions = 0;
    
    while (  year > 0) {
        repetitions = year / num[i];
        
        while(repetitions > 0 ) {
            
            strcat (roman, sym[i] );
            repetitions--;
        }
        year = year % num[i];
        i--;
    }
    
    printf("\nYear in Roman numerals : %s\n", roman);
    return 0;
}
