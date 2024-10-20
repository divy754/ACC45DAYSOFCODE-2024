#include <stdio.h>


int calculateTotalTime(int N, int A, int B) {
    int rounds = 0;
    int totalTime = 0;

    
    while (N > 1) {
        rounds++;
        N /= 2;
    }


    totalTime = (rounds * A) + ((rounds - 1) * B);

    return totalTime;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); // Read N, A, and B for each test case
        printf("%d\n", calculateTotalTime(N, A, B)); 
        
    }

    return 0;
}



