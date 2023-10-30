#include <stdio.h>
#include <assert.h>
#define ARRAYSIZE 50

main()
{
    int n, x=0, array[6][3] = {{123, 456, 9000}, {456, 789, 5000}, {789, 888, 6000}, {336, 558, 10000}, {775, 666, 12000}, {566, 221, 7000}};
    scanf("%d", &n);
    assert(n >= 1 && n <= ARRAYSIZE);

    int account[n], password[n];
    for (int i = 0; i < n; i++){
        scanf("%d%d", &account[i],  &password[i]);
    }

    for (int i = 0; i < n; i++) {
        for(int j=0; j < 6; j++){
            if(array[j][0]==account[i]){
                if(array[j][1]==password[i]){
                    x=array[j][2];
                    break;
                }
                else
                    x=1;
            }
            else
                x=1;
        }

        if (x==1)
            printf("error ");
        else
            printf("%d ",x);
    }
}

