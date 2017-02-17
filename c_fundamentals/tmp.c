#include <stdio.h>

int main(void){

quiz(5);

}

int quiz(int i){
if (i > 1){
  quiz(i/2);
  quiz(i/2);
}
printf("*");
}
