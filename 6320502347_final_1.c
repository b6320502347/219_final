#include<stdio.h>
int main(){
    int k,c,n,i,num;
    scanf("%d %d",&n,&c);
    if(n>0&&n<32750&&c>=0&&c<=9){
    int x[5];
    for(k=n+1;;k++){
        for(i=0,num=k;num>0;i++)
        num=num/10;
    if(i==1){
            for(num=k,i=1;i>0;i--,num/=10)
            x[1-i]=num%10;
            if(c==x[0])
            break;
            }
    else if(i==2){
        for(num=k,i=2;i>0;i--,num/=10)
            x[2-i]=num%10;
        if(c==x[0]||c==x[1])
            break;
    }
    else if(i==3){
        for(num=k,i=3;i>0;i--,num/=10)
            x[3-i]=num%10;
            if(c==x[0]||c==x[1]||c==x[2])
            break;
            }
        else if(i==4){
        for(num=k,i=4;i>0;i--,num/=10)
            x[4-i]=num%10;
            if(c==x[0]||c==x[1]||c==x[2]||c==x[3])
            break;
            }
        else if(i==5){
        for(num=k,i=5;i>0;i--,num/=10)
            x[5-i]=num%10;
            if(c==x[0]||c==x[1]||c==x[2]||c==x[3]||c==x[4])
            break;
            }
    }
    printf("%d",k);
    }

}
