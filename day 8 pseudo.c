#include <stdio.h>

int isSorted(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            return 0; 
        }
    }
    return 1; 
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
        
        if (isSorted(A, N)) {
            printf("YES\n");
            continue;
        }
        
        int foundSwap = 0; 
        for (int i = 0; i < N - 1; i++) {
            if (A[i] > A[i + 1]) {
                
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                
                if (isSorted(A, N)) {
                    foundSwap = 1;
                }
                
                A[i + 1] = A[i];
                A[i] = temp;
                break; 
            }
        }
        
        if (foundSwap) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}


