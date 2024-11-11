/*WAP to accept a coordinate point in a XY coordinate system and determine in which quadrant the 
coordinate point lies.*/

#include<stdio.h>

int main() {
    int x,y;
    printf("Enter x-coordinate: ");
    scanf("%d", &x);

    printf("Enter y-coordinate: ");
    scanf("%d", &y);

    if(x==0 && y==0){
        printf("Origin");
    }
    else if(x>=0 && y>=0) {
        printf("Quadrant 1");
    }
    else if(x<0 && y<=0) {
        printf("Quadrant 2");
    }
    else if(x<=0 && y<=0) {
        printf("Quadrant 3");
    }
    else{
        printf("Quadrant 4");
    }
    
    return 0;
}