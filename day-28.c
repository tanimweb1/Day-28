#include<stdio.h>
int main(){

// print even numbers 1 to 100
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





// If else revise 

// Largest Among Three (with condition)

int a,b,c;
printf("Enter 3 number : ");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c){
printf("A is largest");

}

else if (a<b && b>c){
  printf("B is Largest");
}
else{
  printf("C is largets");
}



    

    return 0;

}


