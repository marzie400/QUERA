#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_KEY_LEN 100
#define MAX 100
char copy(char* key,char* reshte,int count){
int n,i;

scanf("%s",reshte);
//printf("enter key string\n");
printf("copy ");scanf("%s ",key);scanf("%d",&count);
//printf("enter count\n");

char newk[MAX_KEY_LEN*count + 1];
memset(newk, 0, MAX_KEY_LEN*count + 1);
 for (i=0;i<=count-1;i++){
	strcat(newk,key);
 }
 if (strlen(newk)<=strlen(reshte)){
 n=strlen(newk);
 memcpy(reshte,newk,n);
 
return 0; 
}
     }


char compare(char* key2,char* reshte,int* khubi){
int result;
khubi[MAX]=0;
printf("compare ");scanf("%s",key2);

result=strcmp(reshte,key2);
if (result==0) {
khubi[MAX]=khubi[MAX]+1;
//printf("compare %s \n",reshte);
return 0;
}
}


char substr(char* key3,char* reshte,int* khubi){

int counter=0;
int count3=0;
char *where=reshte;
printf("substr ");scanf("%s",key3);scanf(" %d",&count3);

int key_len=strlen(key3);
//printf("enter count\n");

// (key_len)
    if (( where = strstr(where,key3))){
      where+=key_len;
            counter++;
                   if (count3 == counter) {
                  khubi[MAX]=khubi[MAX]+1;
             //printf("substr %s %d \n", key3,count3);
      return 0;
      }
  return 0;
}
}
char attach(int count4,char* reshte,int* khubi,char* key4,char* str){
int key_len2=strlen(key4);
int counter=0;
count4=0;
 printf("attach "); scanf("%s",key4);scanf("%d",&count4); scanf("%s",str);

 //printf("enter str:");

strcat(key4,str); 
 //printf("enter count4\n");

 if (( reshte = strstr(reshte,key4))){
reshte+=key_len2;
 counter++;
          if (count4 == counter) {   
khubi[MAX]=khubi[MAX]+1;
            printf("attach %s %d in\n", key4,count4);
      return 0;
           }
      } 
}


char length(int count,char* reshte,int* khubi){

int reshte_len=strlen(reshte);
printf("length ");scanf("%d",&count);

if (count == reshte_len){
//count=count+1;
khubi[MAX]=khubi[MAX]+1;
             //printf("length %d \n", count);
             return 0;
}
}


int main(){
char str[MAX_KEY_LEN*10 + 1];;
char key[MAX_KEY_LEN + 1] = {0};
char key2[MAX_KEY_LEN + 1]= {0};
char key3[MAX_KEY_LEN + 1]= {0};
char key4[MAX_KEY_LEN + 1]= {0};
char reshte[MAX_KEY_LEN*10 + 1];
int khubi[MAX]={0}, count = 0 ,count3,count4;

copy(key,reshte,count);
compare(key2,reshte,khubi);
substr(key3,reshte,khubi);
attach(count4,reshte,khubi,key4,str);
length(count,reshte,khubi);
printf("Is it right or not?\n");
if (khubi[MAX]>5 || khubi[MAX]>=2.5){
printf("Eyval\n");
} else { printf("HeifShod\n"); }
}
