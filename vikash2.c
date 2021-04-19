#include<stdio.h>
struct distance
{
    int feet;
    float inches;
};
void dist(struct distance d1,struct distance d2)
{
    int tf=d1.feet+d2.feet;
    float ti=d1.inches+d2.inches;
    if(ti>=12)
    {

        ti=ti-12;
        tf++;
    }
    printf("\n %d : %f",tf,ti);
}
void main()
{
    struct distance d1,d2;
    printf("\n DISTANCE");
    printf("\n  feet");
    scanf("%d",&d1.feet);
    printf("\n inches");
    scanf("%f",&d1.inches);

    printf("\n DISTANCE");
    printf("\n  feet");
    scanf("%d",&d2.feet);
    printf("\n inches");
    scanf("%f",&d2.inches);
    dist(d1,d2);

}
