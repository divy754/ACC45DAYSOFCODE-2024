#include <stdio.h>

const char* canSplitEqually(int animalCount[], int maxType) {
    for (int i = 1; i <= maxType; i++) {
        if (animalCount[i] % 2 != 0) { 
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 

        int animalCount[101] = {0}; 

        for (int i = 0; i < N; i++) {
            int type;
            scanf("%d", &type); 
            animalCount[type]++; 
        }
        printf("%s\n", canSplitEqually(animalCount, 100));
    }

    return 0;
}

