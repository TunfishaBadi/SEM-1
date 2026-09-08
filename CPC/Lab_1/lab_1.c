#include <stdio.h>
int main(){

  int i,j,k,num;

  printf("Enter the value num:");
  scanf("%d",&num);

  for(i=1; i<=num;i++){
    for(k=num; k<=1; k++){
      printf(" ");
    }
    for(j=1; j<=i; j++){
      printf(" *");
    }
    printf("\n");
  }

   for(i=num-1; i>=1;i--){
    for(k=1; k<=num-1; k++){
      printf(" ");
    }
    for(j=1; j<=i; j++){
      printf(" *");
    }
    printf("\n");
  }

  return 0;
}