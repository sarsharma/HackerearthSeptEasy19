
#include<stdio.h>
int main(){
int n, m, l , r ,k;
scanf("%d %d %d %d %d", &n, &m , &l, &r, &k);
int rem=n%m;
int i, j;
int arr[10], arrindex=0, count=0;
for(i=l; i<=r; i++){
    int temp=n%i;
    if(temp==rem&&i!=m){
        if(arrindex<k){
        arr[arrindex++]=i;
        count++;
        }
        else{

            count++;
        }
    }
}
for (i = 0; i < arrindex; i++)
	{
		for (j = i + 1; j < arrindex; j++)
		{
			if(arr[i] > arr[j])
			{
			    int	temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

printf("%d\n", count);
if(arrindex<=k){
    for(i=0 ; i<arrindex; i++){
        printf("%d ", arr[i]);
    }
}
else
    printf("-1");
}
