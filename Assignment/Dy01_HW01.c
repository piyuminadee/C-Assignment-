#include <stdio.h>
#include <string.h>


int palindrome(char word[]){
    int i, j, x, count1=0, count2=0;


    printf("String:%s", word);
    j=strlen(word);
    printf("\nEnter string length:%d\n", j);

    for(i=0; i<j; i++){
       if(word[i] == word[j-(i+1)]){
           x=1;
           continue;
       }
       else{
         x=0;
         break;
       }

    }

    if(x==1){
        printf("\n0");  //The String is Already A Palindrome......
    }

    else{
        for(i=0,j=strlen(word)-1; i<j; i++,j--){      //check right hand side on the string
            if(word[i]!=word[j]){
                count1++;
                j++;
            }
        }


        for(j=0,i=strlen(word)-1; j<i; j++,i--){     //check left hand side on the string
            if(word[j]!=word[i]){
                count2++;
                j--;
            }
        }

        if(count1<count2){
            printf("\n%d", count1);                 //decide minimum characters that containing variable
        }
        else{
            printf("\n%d", count2);
        }

    }
}
void main(){

   char word[100];
   printf("Enter string:");
   scanf("%s",word);

   palindrome(word);

}
