#include <stdio.h>
 
int main() {
    const char constantString[] = "codeforces";  // Define the constant string
    
    char strings[1000][100];  // 2D array to store the strings, each of max length 100
    int i, j, diff_count,a;
    scanf("%d",&a);
 
    for(i = 0; i < a; i++) {
       
        scanf("%s", strings[i]);
        
        // Compare the entered string with the constant string
        diff_count = 0;
        for(j = 0; constantString[j] != '\0' && strings[i][j] != '\0'; j++) {
            if(constantString[j] != strings[i][j]) {
                diff_count++;
            }
        }
 
        printf(" %d\n", diff_count);
    }
 
    return 0;
}