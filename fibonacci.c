#include<stdio.h>
#include<conio.h>
char p;
int k;
int fibb(int n){
    
if(n==1){
    return 1;
}
else
return n + fibb(n-1);
}
void main(){
  
printf("type the term of the sequence:\t");
scanf("%d",&k);
fibb(k);
printf("%d\n",(k));
printf("do you want to continiue Y|N\n");

}