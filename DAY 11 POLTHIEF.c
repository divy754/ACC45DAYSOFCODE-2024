#include <stdio.h>
#include <stdlib.h>

int catchThiefTime(int X, int Y) {
    return abs(X - Y);
}

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        printf("%d\n", catchThiefTime(X, Y));
    }

    return 0;
};
