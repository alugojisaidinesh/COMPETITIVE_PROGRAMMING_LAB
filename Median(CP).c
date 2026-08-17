#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a1[n], a2[m];
    for (int i = 0; i < n; i++)
        scanf("%d", &a1[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &a2[i]);
    int total = n + m;
    int merged[total];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a1[i] < a2[j])
            merged[k++] = a1[i++];
        else
            merged[k++] = a2[j++];
    }
    while (i < n)
        merged[k++] = a1[i++];
    while (j < m)
        merged[k++] = a2[j++];
    float median;
    if (total % 2 == 0) {
        int mid = total / 2;
        median = (merged[mid - 1] + merged[mid]) / 2.0;
    } else {
        float mid = total / 2;
        median = merged[(int)mid];
    }
    printf("%.1f", median);
    return 0;
}
