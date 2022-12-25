#include <stdio.h>
int main()
{
    int N, gcd=0;
    int array[100];
    int T;
    scanf("%d",&T);
    for(int p=0;p<T;p++){
    int count=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            gcd=0;
            int k=1;
            if(i==j){
                continue;
            }
for(;((k<=array[i]) && (k<=array[j])); k+=1)
    {
        if(array[i]%k==0 && array[j]%k==0)
            {
                gcd+=k;

            }

    }
    if(gcd==1) count++;
        }
    }
printf("%d\n",count);
    }


    return 0;
}
