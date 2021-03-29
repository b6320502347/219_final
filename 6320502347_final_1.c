#include<stdio.h>
int main(){
    int k,c,n;
    scanf("%d %d",&n,&c);
    for(k=n;;k++)
        if(k%10==c)
            break;
    printf("%d",k);

}
