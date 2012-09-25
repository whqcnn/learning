#include <stdio.h>

int main()
{
    int i, n[10], k;

    for(i = 0; i < 3; i++)
        scanf("%d", &n[i]);
    k = n[0];
    if (n[0] < n[1] && n[1] > n[2] && n[0]>n[2]){
        n[0] = n[2];
        n[2] = n[1];
        n[1] = k;}
    if (n[0] < n[1] && n[1] > n[2] && n[0]<n[2]){
        k = n[1];
        n[1] = n[2];
        n[2] = k;}
    if (n[0] > n[1] && n[1] > n[2]){
        n[0] = n[2];
        n[2] = k;}
    if (n[0] > n[1] && n[1] < n[2] && n[0]>n[2]){
        n[0] = n[1];
        n[1] = n[2];
        n[2] = k;}
    if (n[0] > n[1] && n[1] < n[2] && n[0]<n[2]){
        n[0] = n[1];
        n[1] = k;}
    for(i = 0; i < 3; i++)
    printf("%d\t", n[i]);
    printf("\n");
}
