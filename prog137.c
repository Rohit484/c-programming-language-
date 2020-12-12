#include<stdint.h>
struct patient
{
    int pno;
    char pname[20],disease[12];
};
void add()
{
    FILE *fp;
    fp=fopen("Hosp","a");
    struct patient p;
    printf("\n Patient code ");
    scanf("%d",&p.pno);
    printf("\n Name ");
    scanf("%s",&p.pname);
    printf("\n Disease ");
    scanf("%s",&p.disease);
    fwrite(&p.sizeof(struct patient),1,fp);
    printf("\n New patient Added ");
    fclose(fp);
}
void display()
{
    FILE *fp;
    fp=fopen("Hosp","r");
    struct patient p;
    while(fread(&p,sizeof(p),1,fp)==1)
    {
        printf("\n Patient code %d",p.pno);
        printf("\n Name %d",p.pname);
        printf("\n Suffering from %s",p.disease);
    }
}
void main()
{
    int c;
    do
    {
        printf("\n 1.Add A NEW PATIENT ");
        printf("\n 2.Display all patients ");
        printf("\n 3.Select your choice ");
        scanf("%d",&c);
        if(c==1)
        {
            add();
        }
        else if(c==2)
            display();
    }
    while(c!=3);

}
