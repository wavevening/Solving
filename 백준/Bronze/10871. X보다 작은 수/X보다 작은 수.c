#include <stdio.h>
int main(void){
  int N = 0;
  int X = 0;

  scanf("%d %d", &N, &X);

  int A[N];
  for (int i = 0; i < N; i++){
    scanf("%d", &A[i]);

    if (A[i] < X) {
        printf("%d ", A[i]);
    }
  }
  return 0;
}