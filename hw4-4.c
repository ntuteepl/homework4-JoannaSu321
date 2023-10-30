#include <stdio.h>
#include <assert.h>
#define ARRAYSIZE 10

main()
{
    int n;
    scanf("%d", &n);
    assert(n >= 1 && n <= ARRAYSIZE);

    int f[n][n], a, b, max=0, boy, girl ;
    for (int i = 0; i < n; i++){
        for(int j=0; j < n; j++){
        scanf("%d", &(f[i][j]));
        }
    }
    for (int k = 0; k < n; k++){
        max=0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (f[i][j] > max) {
                    max=f[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        boy=a+1;
        girl=b+1;
        printf("boy %d pair with girl %d\n",boy, girl);
        for (int i = 0; i < n; i++){
            f[a][i]=0;
            f[i][b]=0;
        }
    }
}

