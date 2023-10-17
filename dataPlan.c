#include<stdio.h>
int main(){
    // declare variable
    float monthlyPackage,usedPackage,averagePackageUsedDaily,dailyUsedPackage,remainingPackageUsedDaily,packageExceeding,remainingPackage;
    int days,remainingDays;
    //prompt msg to user
    printf("Enter your monthly package:");
    scanf("%f",&monthlyPackage);
    printf("How many days you used Package:");
    scanf("%i",&days);
    printf("How much Gb of your Package you used:");
    scanf("%f",&usedPackage);
    //using different variable to get result
    //from input find remaining days and remaining package,daily used package    
    remainingDays=30-days;
    remainingPackage=monthlyPackage-usedPackage;
    dailyUsedPackage=usedPackage/days;
    //there condition used if data remaining give information to customer how to use remain data to reached your monthly plan
    if(remainingPackage!=0){
     // declare varaible to find how much you exceeding your daily used  data     
     remainingPackage=remainingPackage/remainingDays;
     float exceedDailyUsed=dailyUsedPackage-averagePackageUsedDaily;
     packageExceeding=30*dailyUsedPackage;
     //output show
     printf("________________________________________\n");
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailyUsedPackage);
     printf("You are EXCEEDING your average daily use ( %f GB/day)\n",exceedDailyUsed);
     printf("Continuing this high usage, you'll exceed your data plan by %f GB\n",packageExceeding);
     printf("To stay below your data plan, use no more than %f GB/day\n", remainingPackage);
     //user use zero data of his package give information how to use it
    } else if(usedPackage==0){
     averagePackageUsedDaily=monthlyPackage/30;
     printf("_____________________________________________\n");
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailyUsedPackage);
     printf("You are at or below your average daily use (%f GB/day)\n",averagePackageUsedDaily);
     printf("You can use up to %f GB/day and stay below your data plan limit\n",remainingPackageUsedDaily);
     }
     //if all package use completly then give information
     else if(remainingPackage==0){
     printf("_______________________________________________\n");   
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailyUsedPackage);
     printf("You have already met your limit for this month.  Looks like you're getting some overage charges\n");
    }

    return 0;
}