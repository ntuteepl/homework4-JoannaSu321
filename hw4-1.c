#include <stdio.h>
#include <assert.h>
#define ARRAYSIZE 50

main()
{
    int n, b;
    scanf("%d", &n);
    assert(n >= 1 && n <= ARRAYSIZE);

    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &(a[i]));
    }
    for(int i=0; i < n ; i++){
        for(int j=2; j < a[i]; j++){
            if(a[i] %j==0){
                b=1;
                break;
            }
            else if(a[i]% j!=0){
                b=0;
            }
        }
        if(b==1){
        printf("NO ");
        }
        else if (b==0){
        printf("YES ");
        }
    }

}
