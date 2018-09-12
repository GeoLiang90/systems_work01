//George Liang
//Systems Level Programming Pd.5
//2018-09-12
//euler06
#include <stdio.h>
int main(){
  int sum_squares = 0;
  int square_sum = 0;
  for (int i = 0; i < 100; i++){
    sum_squares += ((i+1) * (i+1));
    square_sum += (i+1);
  }
  square_sum *= square_sum;
  printf("The Difference is: %d \n",square_sum - sum_squares);
}
