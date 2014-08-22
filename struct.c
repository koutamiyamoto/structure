#include <stdio.h>
#include <stdlib.h>
struct list{
char name[50];//名前
int age;//年齢
  struct list *next;
};
int main(void){
  int t=1;
  struct list *data;//初期構造体
  data = (struct list *)malloc(sizeof(struct list));//領域確保
   struct list *tmp = data;//保存用
 /*入力*/
  puts("入力_______________________________________");
  while(t){
    printf("名前入力：");scanf("%s",tmp->name);
    printf("年齢入力：");scanf("%d",&tmp->age);
    printf("続行(y/n:1/0)：");scanf("%d",&t);
      tmp->next = NULL;
    if(t==1){
      struct list *data2;//新しい領域
      data2 = (struct list *)malloc(sizeof(struct list));
      tmp->next = data2;
      tmp = tmp->next;
    }
  }
  /*出力*/
  puts("データ___________________________________");
   tmp = data;
   while(tmp){
     printf("%s、%d歳\n",tmp->name,tmp->age);
     tmp = tmp->next;
   }
  return 0;
}
