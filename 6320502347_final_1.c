#include<stdio.h>
int main(){
    const int maxn=32750;
    int k,c,n;
    scanf("%d %d",&n,&c);
    for(k=n;k<maxn;k++)
        if(k%10==c)
            break;
    printf("%d",k);

}
