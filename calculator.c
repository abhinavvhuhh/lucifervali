//calculator 
#include<stdio.h>
int main()
{
    int op;
    double a,b;
    int c1,c2,c3,c4;
    printf("\t\t\tWelcome to calculator :)..... \n\n\n ");
    printf("\tlet's do calculations..;)\n\n\n");

printf("\n");
printf("For addition enter:-1\n\n");
printf("For substraction enter:-2\n\n");
printf("For multiplication enter:-3\n\n");
printf("For division enter:-4\n\n\n\n\n");
printf("Enter your option :-\t");
scanf("%d",&op);
printf("\n");
printf("\n");
printf("enter numbers for operation :\n");
scanf("%lf%lf",&a,&b);


switch(op)
{
    case(1):
    printf("%.lf+%.lf=%.lf",a,b,a+b);
    break;
    case(2):
    printf("%.lf-%.lf=%.lf",a,b,a-b);
    break;
    case(3):
    printf("%.lf*%.lf=%.lf",a,b,a*b);
    break;
    case(4):
    printf("%.lf/%.lf=%.lf",a,b,b/a);
    break;
    default:printf("check your option....as it's invalid so don't do any timepass");
}
    return 0;
}
