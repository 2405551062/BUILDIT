#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void compare_strings(char s1[], char s2[]) 
{
    if (strcmp(s1, s2) == 0) 
    {
        printf("IDENTIK\n");
    } 
    else 
    {
        int i;
        int length1 = strlen(s1);
        int length2 = strlen(s2);
        
        if (length1 != length2) 
        {
            printf("BERBEDA\n");
            return;
        }
        
        for (i = 0; i < length1; i++) 
        {
            if (tolower(s1[i]) != tolower(s2[i])) 
            {
                printf("BERBEDA\n");
                return;
            }
        }
        
        printf("MIRIP\n");
    }
}

int main() 
{
    char str1[100], str2[100];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    compare_strings(str1, str2);
    
    return 0;
}