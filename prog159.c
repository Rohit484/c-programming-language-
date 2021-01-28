#include<stdio.h>
void main()
{
    int total_car,toll_ammount,toll_ammount_par_car;
    toll_ammount_par_car=90;
    printf("\n Fixed of per toll cars ammont %d",toll_ammount_par_car);

    printf("\nEnter the number of passed car in tolls:-");
    scanf("%d",&total_car);
    toll_ammount_par_car*=total_car;
    printf("\n Your total toll_collection_of_passed_car:- %d",toll_ammount_par_car);
}
