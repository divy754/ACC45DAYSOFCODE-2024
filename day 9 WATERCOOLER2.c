#include <stdio.h>

int main()   {
    int t,x,y;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d %d",&x,&y);
        printf("%d\n",(y-1) /x);
    
    }  
    return 0;
}


