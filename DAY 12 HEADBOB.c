#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);  

    for (int i = 0; i < T; i++) {
        int N; 
        scanf("%d", &N);  

        char gestures[N + 1];  
        scanf("%s", gestures); 

        int isIndian = 0; 
        int hasYes = 0;

        for (int j = 0; j < N; j++) {
            if (gestures[j] == 'I') {
                isIndian = 1; 
                break;      
            }
            if (gestures[j] == 'Y') {
                hasYes = 1;   
            }
        }
        if (isIndian) {
            printf("INDIAN\n");
        } else if (hasYes) {
            printf("NOT INDIAN\n");
        } else {
            printf("NOT SURE\n");
        }
    }

    return 0;
}

