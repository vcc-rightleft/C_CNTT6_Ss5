#include<stdio.h>
int main() {
float score;
    printf("Enter the score :");
    scanf("%f",&score);
if(score<0||score>10){
    printf("Diem khong hop le");
    return 0;
}else{
     if (score>=8) {
        printf("hoc sinh gioi");
    }else if (score>=6.5) {
        printf("hoc sinh kha");
    }else if (score>=5) {
        printf("hoc sinh trung binh");
    }else if (score<5) {
        printf("hoc sinh yeu");
    }else {
        printf("kho dien ta");
    }
return 0;
}
