#include<stdio.h>
int main(){
    float monthlyPackage,usedPackage,averagePackageUsedDaily,dailyUsedPackage,remainingPackageUsedDaily,packageExceeding,remainingPackage;
    int days,remainingDays;
      printf("Enter your monthly package:");
    scanf("%f",&monthlyPackage);
    printf("How many days you used Package:");
    scanf("%i",&days);
    printf("How much Gb of your Package you used:");
    scanf("%f",&usedPackage);
    remainingDays=30-days;
    remainingPackage=monthlyPackage-usedPackage;
    dailyUsedPackage=usedPackage/days;
}