#include <stdio.h>

int main() {
    int n, k;
    float area, total_cost = 0;
    scanf("%d", &n);  
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        scanf("%f", &area);
        total_cost += area * 18;  
    }
    for (int i = 0; i < k; i++) {
        scanf("%f", &area);
        total_cost += area * 12;  
    }  
    printf("Total estimated Cost : %.1f INR\n", total_cost);
    return 0;
}

