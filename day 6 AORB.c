#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int X, Y; 
        scanf("%d %d", &X, &Y);

        int points_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));

        int points_B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        
        int max_points = max(points_A_first, points_B_first);

        printf("%d\n", max_points);
    }

    return 0;
}

