#include <stdio.h>
#include <string.h>


void main(){
  int A, B, S, N, l;

  printf("Enter worth of Dolar A:");
  scanf("%d", &A);
  printf("\nEnter worth of Dolar B:");
  scanf("%d", &B);


  printf("\n\nEnter total of dolars S:");
  scanf("%d", &S);
  printf("\n\nEnter total of banknotes N:");
  scanf("%d", &N);
  banknotes(A, B, S, N);
}

  int banknotes(int A,int B,int S,int N){

    int l;   //l = NUMBER OF A BANKNOTES


  l = (S-B*N)/(A-B);

  if((l<0)||(N>S) || (l<0)){
    printf("-1");
  }
  else{
    printf("\nnumber of banknotes worth A dolars:%d", l);
  }
  }



