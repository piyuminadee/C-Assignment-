#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int concat(int x,int d){

    char arr1[100];
    char arr2[100];
    char arr3[100];

    sprintf(arr1,"%d",x);  //convert integer to string...
    sprintf(arr2,"%d",d);
    sprintf(arr3,"%d",x);

    strcat(arr1,arr2);    //concatenate the strings...
    strcat(arr2,arr3);

    if(atoi(arr1)>atoi(arr2))  //convert integers to strings and compare the integers...
        return atoi(arr1);
    else
        return atoi(arr2);
}

void main(){

    int x,y,c,i;

    scanf("%d",&x);  //getting user inputs for x and y...
    scanf("\n%d",&y);

    for(i=1;i<x;i++){
        scanf("%d",&c); //c is the next integer
        y=concat(y,c);  //call the concat function
    }

    printf("\n%d",y);  //display largest concat number

}
