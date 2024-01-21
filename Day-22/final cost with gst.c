#include<stdio.h>
int main(){
    float cost[3];

    printf("Enter cost of first item");
    scanf("%f",&cost[0]);

    printf("Enter cost of second item");
    scanf("%f",&cost[1]);

    printf("Enter cost of third item");
    scanf("%f",&cost[2]);

    float totalcost= cost[0] + cost[1] + cost[2];
  float   finalcost = totalcost + 0.18*totalcost;

  printf("Finalcost with gst is %f",finalcost);
return 0;
}
