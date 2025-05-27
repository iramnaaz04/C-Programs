// 5]Accept length and breath of rectangle and calculate length and perimeter of rectangle.
#include <stdio.h>
   void main(){
    int length,breath;
    printf("Enter length of rectangle: ");
     scanf("%d",&length);
     printf("Enter breath of rectangle: ");
     scanf("%d",&breath);
    
     float area,perimeter;
    //area=length*breath;
     printf("Area of rectangle is: %d\n",length*breath);
    
    //perimeter=2*(length+breath);
   printf("Perimeter of rectangle is: %d\n",2*(length*breath));
   
}