#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); 

int sum = 0;
int hyp = 0;
if(a==b && a==c){
  if(b==c){
	 printf("Equilateral Triangle"); 
  }
}
else if(a==0 || c==0 || b==0){
	 printf("Triangle is not possible");
}
else if(a!=b && a!=c){
  if(b!=c){
  	sum = ((a*a) + (b*b));
    hyp = c*c;
    if(sum == hyp){
    	printf("Right-angle Triangle");
    }
    else{
    	printf("Scalene Triangle");
    }
  }
}
else if(a == b || a == c || b == c){
	printf("Isosceles Triangle");
}
else{
printf("Triangle is not possible");
}
return 0;
}
