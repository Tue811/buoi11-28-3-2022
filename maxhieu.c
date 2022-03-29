#include<stdio.h>
#include<math.h>

int main() {
    FILE *f1;
    FILE *f2;
    f1 = fopen("SEQUENCE.INP", "r");
    f2 = fopen("SEQUENCE.OUT", "w");

    int n, a[1000], max = -99999;
    fscanf(f1, "%d", &n);
    for(int i = 0; i < n; i++) {
        fscanf(f1, "%d", &a[i]);
    }


    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if((a[j] - a[i]) >= max) {
                max = a[j] - a[i];
            }
        }
    }

    fprintf(f2, "%d", max);
    fclose(f1);
    fclose(f2);
    return 0;
}