#include <stdio.h>


int canGroup(int N, int P[]) {
    int count[100005] = {0}; 


    for (int i = 0; i < N; i++) {
        count[P[i]]++;
    }


    for (int i = 1; i <= N; i++) {
        if (count[i] % i != 0) {
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

        int P[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
        }

        
        if (canGroup(N, P)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

