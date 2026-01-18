#include <stdio.h>


int number_simulation(int n){
  int kroki = 0;
  while(n >= 10){
    int ost_cyfra = n % 10;
    if(ost_cyfra <= 3 && ost_cyfra >= 0){
      n += ost_cyfra * 2;
    }else if(ost_cyfra >= 4 && ost_cyfra <= 6){
      n -= 3;  
    }else{
      n /= 2;
    }
    kroki++;
  }
  return kroki;	
}


int main(){
  int n;
  scanf("%d", &n);
  int wynik = number_simulation(n);
  printf("%d", wynik);
}
