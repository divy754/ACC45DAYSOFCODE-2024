#include <stdio.h>

int calculateBags(int N, int K, int M) {
    int candiesPerBag = K * M; 
    int bags = (N + candiesPerBag - 1) / candiesPerBag; 
    return bags;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M); 
        int result = calculateBags(N, K, M);
        printf("%d\n", result); 
    }

    return 0;
}
