//iferati22
#include <stdio.h>
#include <stdlib.h>
float getAvg()
{
    int grade,sum=0,cnt=0;


    while(1)
    {

        scanf("%d",&grade);

        if(grade==-999)
            break;
        sum+=grade;
        cnt++;
    }


    return(float)sum/cnt;
}
void getdata(int n,float avg[],char name[][15])
{

    for(int i=0; i<n; i++)
    {
        scanf("%s",name[i]);
        avg[i]=getAvg();
    }

}
int findMax(float avg[],int n)
{

    int max=avg[0];
    int mIndex=0;

    for(int i=0; i<n; i++)
    {
        if(avg[i]>max)
        {
            mIndex=i;
            max=avg[i];
        }

    }
    return mIndex;
}



int main()
{

    int n;
    scanf("%d",&n);
    char name[n][15];
    float avg[n];


    getdata(n,avg, name);

    int mIndex = findMax(avg, n);
    printf("%s %.3f", name[mIndex], avg[mIndex]);

    return 0;
}