#include <stdio.h>

int sequence_calc(int n){
  if(n == 0){
    return 0;
  }else if(n % 3 == 0){
    return sequence_calc(n / 3) + 1;
  }else if(n % 3 == 1){
    return sequence_calc(n - 1) * 2;
  }else if(n % 3 == 2){
    return sequence_calc(n - 2) + 1;
  }
}


int main(){
  int n;
  scanf("%d",&n);
  if(n < 0){
    return 0; 
  } 
  int wynik = sequence_calc(n);
  printf("%d", wynik);
}
