#include <stdio.h>
int main() {
int arr[10]={6,12,0,18,11,99,55,45,34,2};
int n= sizeof(arr)/sizeof(int);
int i, j, position, swap;
for (i = 0; i < (n - 1); i++) {
position = i;
for (j = i + 1; j < n; j++) {
if (arr[position] > arr[j])
position = j;
}
if (position != i) {
swap = arr[i];
arr[i] = arr[position];
arr[position] = swap;
}
}
for (i = 0; i < n; i++)
printf("%d\t", arr[i]);
printf("\n\n");
}
