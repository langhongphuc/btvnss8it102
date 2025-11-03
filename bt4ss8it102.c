#include <stdio.h>
int main() {
    int n;
    int i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
  
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(", ");
        }
    }
     return 0;
}

