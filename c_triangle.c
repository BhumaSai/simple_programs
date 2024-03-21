#include <stdio.h>


void right_angle_triangle();
// triangle
void main(){
    // variables
    int i,j,n=5,constant_value=n;
    // loop
    printf("----------------triangle-----------------\n");
    for(i=1;i<=n;i++){
        // inner loop
       for(j=0;j<=constant_value;j++){
        // checking the condition j value is equal to the n or not,if the condition is true print the values.
         if(j>=n){
            printf("%d ",i);//if you  want to print the star just replace the value i to "*".
        }else{//if the condition is false print the space.
            printf(" ");
        }
       }
       printf("\n");//new line for print the values from the next line.
    // decreasing the n value to print the left side.
       n=n-1;
    }
    printf("---------right angle triangle-------------\n");
    right_angle_triangle();
}

// right angle triangle
void right_angle_triangle(){
    int i , j , n = 5;
    // loop
    for(i=0;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
