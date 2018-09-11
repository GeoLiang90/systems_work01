//George Liang
//Systems Level Programming Pd.5
//2018-09-10
//euler02
#include <stdio.h>
int main(){
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
    printf("sum: %d \n",sum);
    }
    printf("sum: %d \n",sum);
    return sum;
}
