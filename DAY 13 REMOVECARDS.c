#include <stdio.h>

#define MAX_CARDS 100
#define MAX_VALUE 10

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N;  
        int frequency[MAX_VALUE + 1] = {0};
        int maxFrequency = 0;  

        scanf("%d", &N); 
        
        for (int i = 0; i < N; i++) {
            int cardNumber;
            scanf("%d", &cardNumber);
            frequency[cardNumber]++;
            if (frequency[cardNumber] > maxFrequency) {
                maxFrequency = frequency[cardNumber];
            }
        }
        int minMoves = N - maxFrequency;
        printf("%d\n", minMoves);
    }

    return 0;
}


