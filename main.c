#include<stdio.h>

void Check(int day, int month, int year)
{
    if(day < 1 || day > 31)
    {
        printf("Khong ton tai ngay!\n");
        return 1;
    } else if( month < 1 || month > 12)
    {
        printf("Khong ton tai thang nay!\n");
        return 1;
    }else if(month == 2 && day > 29)
    {
        printf("Khong ton tai ngay nay trong thang 2\n");
        return 1;
    }else if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        printf("Thang %d co 30 ngay!\n");
        return 1;
    }else if(year > 2022)
    {
        printf("Nam sinh khong hop le\n");
        return 1;
    }else 
    {
        return 0;
    }
}
void Dateofbirth(int day, int month, int year)
{
    int daynow = 18;
    int monthnow = 10;
    int yearnow = 2022;
    int age = yearnow - year;
    if(month > monthnow)
    {
        age = age - 1;
        return age;
    }
    if (month <= monthnow)
    {
        age = age;
        return age;
    }
}
int main(int argc, char const *argv[])
{
    int day,month,year;
    do
    {
        printf("Nhap ngay sinh: \n");
        scanf("%d",&day);
        printf("Nhap thang sinh: \n");
        scanf("%d",&month);  
        printf("Nhap nam sinh: \n");
        scanf("%d", &year);
         /* code */
    } while (Check(day,month,year));
    printf("Ngay sinh cua ban: %d%d%d",day, month, year);
    printf("Tuoi cua ban: %d\n", Dateofbirth(day,month,year));
    
}
