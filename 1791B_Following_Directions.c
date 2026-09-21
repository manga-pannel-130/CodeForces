#include <stdio.h>
#include <string.h>
 
int main() {
    int t, j;
    scanf("%d", &t);
 
    for (j = 0; j < t; j++) {
        int n;
        char s[51];
        scanf("%d", &n);
        scanf("%s", s);
 
        // Initialize Alperen's position
        int x = 0, y = 0;
        
        // Initialize flag to check if Alperen passed the candy
        int passed_candy = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                x--;
            } else if (s[i] == 'R') {
                x++;
            } else if (s[i] == 'U') {
                y++;
            } else if (s[i] == 'D') {
                y--;
            }
 
            // Check if Alperen is at the candy's position
            if (x == 1 && y == 1) {
                passed_candy = 1;
                break;
            }
        }
 
        if (passed_candy) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
 
    return 0;
}