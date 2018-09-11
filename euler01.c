//George Liang
//Systems Level Programming Pd.5
//2018-09-10
#include <stdio.h>
int main(){
  int sum = 0;
  for (int i = 3; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  printf("sum: %d \n", sum);
  return sum;
}
