#include <stdio.h>
int main()
{
    int level,ca1=1000,ca2=750,ca3=500,ca4=250,ea1=500,ea2=200,ea3=100,n,i;
    float gs,bp,hr,ns;

    int tax()
    {
        if (gs<=2000)
        {
            printf("NO TAX REDUCTION:SALARY=%f\n",gs);
        }
        else if (gs<=4000)
        {
             ns=gs-(0.03*gs);
             printf("Salary after 3% reduction:%f\n",ns);
        }
        else if (gs<=5000)
        {
            ns=gs-(0.05*gs);
            printf("Salary after 5% reduction:%f\n",ns);
        }
        else if (gs>5000)
        {
            ns=gs-(0.08*gs);
            printf("Salary after 8% reduction:%f\n",ns);
        }
    }
    printf("Enter the number of entries:");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        i=i+1;
        printf("Enter level:");
        scanf("%d",&level);
        printf("Enter basic pay:");
        scanf("%f",&bp);
        hr=0.25*bp;
        if (level==1)
        {
            gs=bp+ca1+ea1+hr;
            tax();
        }
        else if (level==2)
        {
            gs=bp+ca2+ea2+hr;
            tax();
        }
        else if (level==3)
        {
            gs=bp+ca3+ea3+hr;
            tax();
        }
        else if (level==4)
        {
            gs=bp+ca4+hr;
            tax();
        }
    }
}
