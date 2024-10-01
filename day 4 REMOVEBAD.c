#include <stdio.h>

int maxFrequency(int arr[], int n) {

    int freq[100001] = {0}; 
    int maxFreq = 0;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
        }
    }

    return maxFreq;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N);  
        
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); 
        }

        int maxFreq = maxFrequency(A, N);

        printf("%d\n", N - maxFreq);
    }

    return 0;
}


