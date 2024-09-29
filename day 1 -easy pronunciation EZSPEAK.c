#include <stdio.h>

#include <string.h>

int is_vowel(char ch) {
    return (ch == 'a' || ch == 'e' ||
        ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    int T;
    scanf("%d", & T);

    while (T--) {
        int N;
        scanf("%d", & N);
        char S[101];

        scanf("%100s", S);
        N = strlen(S);
        if (N < 4) {
            printf("YES\n");
            continue;
        }
        int
        consecutive_consonants = 0;
        int is_hard = 0;

        for (int i = 0; i < N; i++)
        {
            if (!is_vowel(S[i]))
            {
                consecutive_consonants++;
                if (consecutive_consonants >= 4) {
                    is_hard =
                        1;
                    break;
                }
            } else {
                consecutive_consonants = 0;
            }
        }
        if (is_hard) {
            printf("No\n");
        } else {
            printf("yes\n");
        }
    }
    return 0;
}