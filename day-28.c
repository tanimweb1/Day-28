#include<stdio.h>
int main(){


for(int i = 1;i<=100;i++){

if(i%2==0){
    printf("%d\n",i);
  

}
  



}







    // sum of digits practice

  int n,sum=0,remin;
scanf("%d",&n);

//for(int i = 1;i<n;i++){
while(n!=0){
remin = n%10;
sum = sum + remin;
n = n/10;

}

printf("Sum of digits is %d",sum);
//}

    return 0;

}
