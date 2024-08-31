
#include<stdio.h>
union book{
int num;
char name[50];
float price;
};
int main(){
  union book hp;
  hp.num=1;
  hp.price=177.7;
  strcpy(hp.name,"robert keyosaki");
  printf("book numeber is %d\n",hp.num);
  printf("book name is %s\n",hp.name);
  printf("book price is %f\n",hp.price);

}
