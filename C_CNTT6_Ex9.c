#include <stdio.h>
int main() {
    float salaryCoefficient,salary;
    int workingDay,Position;
    printf("Moi nhap vao he so luong: ");
    scanf("%f",&salaryCoefficient);
    printf("Moi nhap vap ngay cong: ");
    scanf("%d",&workingDay);
    printf("Moi nhap vao chuc vu:\n");
    printf("1.Nhan vien\n");
    printf("2.To truong\n");
    printf("3.Quan li \n");
    scanf("%d",&Position);
    switch (Position) {
        case 1:
            if (workingDay>=0&&workingDay<=31) {
                if (workingDay>26) {
                    salary = workingDay*160000*salaryCoefficient+500000+(workingDay-26)*200000;
                }else {
                    salary = workingDay*160000*salaryCoefficient+500000;
                }
                printf("Luong la: %.2f\n",salary);
            }else {
                printf("Nhap ngay hop le");
            }
            break;
        case 2:
            if (workingDay>=0&&workingDay<=31) {
                if (workingDay>26) {
                    salary = workingDay*160000*salaryCoefficient+1000000+(workingDay-26)*200000;
                }else {
                    salary = workingDay*160000*salaryCoefficient+1000000;
                }
                printf("Luong la: %.2f\n",salary);
                break;
            }else {
                printf("Nhap ngay hop le");
            }
        case 3:
            if (workingDay>=0&&workingDay<=31) {
                if (workingDay>26) {
                    salary = workingDay*160000*salaryCoefficient+2000000+(workingDay-26)*200000;
                }else {
                    salary = workingDay*160000*salaryCoefficient+2000000;
                }
                printf("Luong la: %.0f\n",salary);

            }else{
            printf("Nhap ngay hop le");
            }
            break;
        default:
            printf("Loi\n");
    }
}