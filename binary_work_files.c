#include <stdio.h>
int main() {
    int arr[100];
    int max_pos = 0, min_pos = 0, count = 0;
    int x , min, max;
    while (x != -1) {
        if(scanf("%d", &x)) {
            arr[count] = x;
            count++;
        }
    }
    min = max = arr[0];
    for(int i = 0; i < (count - 1); i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_pos = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }
    for(int i = 0; i < (count - 1); i++) {
        if(i == max) {
            printf("%d", arr[min_pos]);
        } else if (i == min_pos) {
            printf("%d", arr[max_pos]);
        } else {
            printf("%d", arr[i]);
        }
        if(i != (count - 1)) printf(" ");
    }
    return 0;
    
}
