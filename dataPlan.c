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
    if(remainingPackage!=0){
     remainingPackage=remainingPackage/remainingDays;
     float exceedDailyUsed=dailyUsedPackage-averagePackageUsedDaily;
     packageExceeding=30*dailyUsedPackage;
     printf("________________________________________\n");
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailyUsedPackage);
     printf("You are EXCEEDING your average daily use ( %f GB/day)\n",exceedDailyUsed);
     printf("Continuing this high usage, you'll exceed your data plan by %f GB\n",packageExceeding);
     printf("To stay below your data plan, use no more than %f GB/day\n", remainingPackage);
    } else if(usedPackage==0){
     averagePackageUsedDaily=monthlyPackage/30;
     printf("_____________________________________________\n");
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailyUsedPackage);
     printf("You are at or below your average daily use (%f GB/day)\n",averagePackageUsedDaily);
     printf("You can use up to %f GB/day and stay below your data plan limit\n",remainingPackageUsedDaily);
    }else if(remainingPackage==0){
     printf("_______________________________________________\n");   
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailyUsedPackage);
     printf("You have already met your limit for this month.  Looks like you're getting some overage charges\n");
    }

    return 0;
}