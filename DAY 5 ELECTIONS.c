#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int XA, XB, XC; 
        scanf("%d %d %d", &XA, &XB, &XC);
        
        if (XA > 50) {
            printf("A\n");
        } else if (XB > 50) {
            printf("B\n");
        } else if (XC > 50) {
            printf("C\n");
        } else {
            printf("NOTA\n"); 
        }
    }

    return 0;
}

