
#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d" , &n , &k);
    int i, j, arr[n];
    for(i=0; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    //int maxsum=0;
    int special=0;

    for(i=0; i<n; i++){
            int count=k;
        for(j=i+1; j<n; j++){
            if(arr[j]>arr[i]){
                count--;
            }


        }
        if(count==0){
                special+=arr[i];

        }
        //maxsum=0;
        }
        printf("%d", special);

    }
    //printf("%d", maxsum);
