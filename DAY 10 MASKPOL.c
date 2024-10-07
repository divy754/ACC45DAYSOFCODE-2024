#include <stdio.h>

int minimumMasks(int N, int A) {
    int uninfected = N - A; 
    return (A < uninfected) ? A : uninfected; 
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, A;
        scanf("%d %d", &N, &A); 

        int result = minimumMasks(N, A);
        printf("%d\n", result);
    }

    return 0;
}