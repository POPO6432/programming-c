#include <stdio.h>

int main() {
    double mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, h;
    for (i = 0; i < 3; i++) {
        for (h = 0; h < 3; h++) { 
            printf("%lf\t", mat[i][h]); 
        }
        
        printf("\n"); 
    }
    double a1;
    printf("SUM\n");
    for (i = 0; i < 3; i++) {
        for (h = 0; h < 3; h++) {
            a1+=mat[i][h];
        }}
    printf("%lf",a1,"\n");
        

    return 0;
}
