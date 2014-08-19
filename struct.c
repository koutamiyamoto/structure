#include <stdio.h>
#define N 100
struct list{
  char name[50];//名前
  int age;//年齢
};
int main(void){
  struct list data[N];//N人まで
  int i,t=0;
  puts("年齢に-1を入れると入力終了");
  /*入力*/
  for(i=0;i<N;i++){
    printf("名前：");scanf("%s",data[i].name);
    printf("年齢：");scanf("%d",&data[i].age);
    if(data[i].age==-1)
      break;
    t++;
  }
  /*出力*/
  puts("list出力______________________");
  for(i=0;i<t;i++){
    printf("名前：%s\n",data[i].name);
    printf("年齢：%d\n",data[i].age);
  }
  return 0;
}
