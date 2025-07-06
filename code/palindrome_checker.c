#include <stdio.h>
#include <string.h>

int main(){
    char string1[64];
    int i, length;
    int flag = 0;
    printf("The string is: ");
    scanf("%s", string1);
    length = strlen(string1);
    for(i=0; i < length; i++){
      if(string1[i] != string1[length-i-1]){
      flag = 1;
      break;
      }
    }
    if (flag) {
       printf("It is not a palindrome");
       }
    else{
        printf("It is a palindrome");
	}
	return 0;
    }


