#include<stdio.h>


int main() {
    int i, n;
    int result = 0;

    printf("Put down the size of vectors below\n");
    scanf("%d", &n);

    int vect_A[n], vect_B[n];

    printf("Write vector A:\t");
    for (i = 0; i < n; i++)
    {
        printf("Term %d = ", i);
        scanf("%d", &vect_A[i]);
    }

    printf("Write vector B:\t");
    for (i = 0; i < n; i++)
    {
        printf("Term %d = ", i);
        scanf("%d", &vect_B[i]);
    }

    for (i = 0; i < n; i++)
    {
        result += vect_A[i] * vect_B[i];
    }
    printf("The inner product of these two vectors is %d\n", result);
}