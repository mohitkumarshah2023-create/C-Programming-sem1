#include<stdio.h>
#include<math.h>
//Scholarship Calculation
int main(){
int annual;
float percentage,Scholarship,netfee;
printf("Enter a Annual Fees:");
scanf("%d",&annual);
printf("Enter percentage Marks:");
scanf("%f",&percentage);
if (percentage>=85)
{
Scholarship= annual- 10.0/100*annual;
netfee= annual-Scholarship;}
printf("\nSCholarship reduce: Rs%.2f",Scholarship);
printf("\nNET FEE: Rs%2f",netfee);
return 0;
}