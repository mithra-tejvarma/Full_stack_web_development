#include<stdio.h>
#include<conio.h>
int main()
{
    int n,bt[10],wt[10],tat[10],i,j;
    float awt=0,atat=0;
    printf("\nenter the no.of process:");
    scanf("%d",&n);
    printf("enter process burst time:\n");
    for(i=0;i<n;i++)
    {
        printf("p[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    printf("\npid\tbt\twt\ttat");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=bt[i]+wt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("\n%d\t%d\t%d\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("\naverage wt:%f",awt);
    printf("\naverage tat:%f",atat);
    return 0;
}
