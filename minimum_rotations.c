#include<stdio.h>

int main(){
    int queries;
    scanf("%d", &queries);

    while(queries>=0){
        int n, f, k;
        char ch;
        scanf("%d %d %d %c", &n, &f, &k, &ch);
        char s[n];
        scanf("%s", &s);
        //printf("%s",s);
        int i, rot=0, j, l;
        for(i=0; i<strlen(s); i++){
            int count=0;
            for(l=0; l<k; l++)
            {
                if(s[l]==ch)
                count++;
            }
            if(count>=f){
                break;
            }
        char temp=s[strlen(s)-1];
        rot++;
        for(j=strlen(s)-1; j>0; j--)
        {
            s[j]=s[j-1];
        }
        s[0]=temp;
        //printf("%s\t" , s);
        }

        if(rot<=(strlen(s)-1)){
            printf("%d", rot);
        }
        else{
            printf("-1");
        }
        printf("\n");
        queries--;
    }

}
