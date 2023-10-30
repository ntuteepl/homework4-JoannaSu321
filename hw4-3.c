#include <stdio.h>
#include <assert.h>
#define ARRAYSIZE 50

main()
{
    int n=0, s[n+1], d[n+1], car=1, x=0, s1, d1, sf[n+1], df[n+1];
    while (scanf("%d%d", &s[n], &d[n]) != EOF)
    {
        n++;
    }
    int t[25]={0};
    for (int i = 0; i < n; i++)
    {
        for(int j=s[i]; j < d[i]; j++)
        {
            t[j]+=1;
        }

        for (int j = 1; j < 25; j++)
        {
            if (t[j]>car)
                car=t[j];
        }

    }
    printf("%d ",car);


    for(int i=0;i< n-1;i++)
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

    for(int i=0;i<n ;i++)        //備份
    {
        sf[i]=s[i];
        df[i]=d[i];
    }


        for(int i=0; i<car; i++){            //輸出班表
        printf("\nDriver %d's schedule is %d %d ",i+1,sf[x],df[x]);

            for(int j=0; j<n; j++)
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
                    for(int k=0;k<n;k++)
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


}
