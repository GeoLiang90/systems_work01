//George Liang
//Systems Level Programming Pd.5
//2018-09-12
//Work01
#include <stdio.h>
//Problem 1
int one(){
  int sum = 0;
  for (int i = 3; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}
//Problem 2
int two(){
  //Initial Values for fibonacci sequence
  int temp1 = 1;
  int temp2 = 2;
  //Holder for temp2 value before it gets changed
  int holder = 0;
  int sum = 0;
  while(temp2 <= 4000000){
    //If I were to check for temp1's eveness I would be double counting
    if(temp2 % 2 == 0){
      sum += temp2;
    }
    //Hold current biggest value
    holder = temp2;
    //Make temp2 the bigger value
    temp2 = temp1 + temp2;
    //Give temp1 the now smaller value
    temp1 = holder;
    }
    return sum;
}
//Problem 6
int six(){
  int sum_squares = 0;
  int square_sum = 0;
  int difference = 0;
  for (int i = 0; i < 100; i++){
    sum_squares += ((i+1) * (i+1));
    square_sum += (i+1);
  }
  square_sum *= square_sum;
  difference = square_sum - sum_squares;
  return difference;
}

void main(){
  printf("Problem One \n");
  printf("sum: %d \n", one());
  printf("Problem Two \n");
  printf("sum: %d \n",two());
  printf("Problem Six \n");
  printf("The Difference is: %d \n",six());
}
