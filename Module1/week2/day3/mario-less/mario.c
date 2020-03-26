#include <cs50.h>
#include <stdio.h>

int main(void){
  int tower;
  do {
    tower = 0;
    printf("What is the tower's height? ");
    scanf("%d", &tower);//asks for an value
    printf("\n");//prints a new line to avoid printing the first line with the value asked 
  }
  while((tower <= 0) || (tower >= 9));
  for(int i = 1; i<(tower+1); ++i){
    for(int b = tower; b>i; --b){
      printf(" ");//makes space to write the first block
    }
    for(int a = 0; a<i; ++a){
      printf("#");//prints the block
    }
    printf("\n");//prints a new line for the next row of blocks
  }
  return 0;
}
