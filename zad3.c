#include <stdio.h>

int calculate_score(const char *str){
  int mnoz = 1;
  int suma = 0;
  for(int i = 0; str[i] != '\0'; i++){
    char ch = str[i];
    if(ch >= 'a' && ch <= 'z'){
      suma += ch * mnoz;
    }else if(ch >= '0' && ch <= '9'){
      mnoz = -mnoz;
    }else if(ch >= 'A' && ch <= 'Z'){
      suma = 0;
    }
  }
  return suma;
}

int main(){
  char c[1000];
  scanf("%1000s", c);
  int wynik = calculate_score(c);
  printf("%d", wynik);
}
