#include<stdio.h>
int main(){
int a,b;
int max;

scanf("%d %d",&a,&b);
     if(a>b){
    max=a;
    }else if(a==b){
          printf("So nay bang nhau");
          return 0;
    }
     else{
      max=b;
    }
printf("%d la so lon nhat",max);


return 0;
}
