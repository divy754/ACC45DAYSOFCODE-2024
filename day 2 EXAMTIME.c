#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int dragon[3], sloth[3];
        
        scanf("%d %d %d", &dragon[0], &dragon[1], &dragon[2]);
        
        scanf("%d %d %d", &sloth[0], &sloth[1], &sloth[2]);
        
        int dragon_total = dragon[0] + dragon[1] + dragon[2];
        int sloth_total = sloth[0] + sloth[1] + sloth[2];

        if (dragon_total > sloth_total) {
            printf("Dragon\n");
        } else if (sloth_total > dragon_total) {
            printf("Sloth\n");
        } else { 
            if (dragon[0] > sloth[0]) { 
                printf("Dragon\n");
            } else if (sloth[0] > dragon[0]) {
                printf("Sloth\n");
            } else { 
                if (dragon[1] > sloth[1]) { 
                    printf("Dragon\n");
                } else if (sloth[1] > dragon[1]) {
                    printf("Sloth\n");
                } else { 
                    printf("Tie\n");
                }
            }
        }
    }

    return 0;
}


