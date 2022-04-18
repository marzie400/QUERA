#include<stdio.h>
#include<stdlib.h>

int main(){
int m,j,k,i,t,n=30000;
 int  count=0;
 scanf("%d",&m);
for (i = 1; i <= n; i++){
        k=i*(i+1)/2;
        t=k;
        for(j=1;j<=100000;j++){
        if((t % j)== 0){
            count=count+1; 
              if (count==m){
                      printf("%d\n ",t);
                      return 0;
              }
              }  
         continue;
           }
              count=0;
                        }
}

