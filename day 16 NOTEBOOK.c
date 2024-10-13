#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Weight of the pulp in kg
        scanf("%d", &N);

        // 1 kg of pulp makes 1000 pages, and 1 notebook requires 100 pages
        int notebooks = (N * 1000) / 100;
        printf("%d\n", notebooks);
    }

    return 0;
}


