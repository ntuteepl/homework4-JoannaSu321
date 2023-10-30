#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0,x=0,y=1,sum=0,num=0,s[100],d[100],sf[100],df[100],s1,d1,n=0;
    while(scanf("%d%d",&s[n],&d[n])!=EOF)
    {
        n++;
    }

    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]>s[j+1])
            {
                s1=s[j];
                s[j]=s[j+1];
                s[j+1]=s1;

                d1=d[j];
                d[j]=d[j+1];
                d[j+1]=d1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        sf[i]=s[i];
        df[i]=d[i];
    }

    while(y!=0)
    {
        for(i=0;i<n;i++)
        {
            sum=0;

            if(d[x]<=s[i])
            {
                x=i;
                s[i]=0;
            }
            s[x]=0;

            if(i==n-1)
            {
                num++;
                for(j=0;j<n;j++)
                {
                    if(s[j]!=0)
                    {
                        x=j;
                        j=n;
                    }
                }
            }

            for(k=0;k<n;k++)
            sum=sum+s[k];
            if(sum==0)
            y=0;
        }
    }

    printf("%d",num);
    x=0;

    for(i=0;i<num;i++)
    {
        printf("\nDriver %d's schedule is %d %d ",i+1,sf[x],df[x]);;

        for(j=0;j<n;j++)
        {
            if(df[x]<=sf[j])
            {
                x=j;
                printf("%d %d ",sf[j],df[j]);
                sf[j]=0;
            }
            sf[x]=0;

            if(j==n-1)
            {
                for(k=0;k<n;k++)
                {
                    if(sf[k]!=0)
                    {
                        x=k;
                        k=n;
                    }
                }
            }
        }
    }
    return 0;
}
