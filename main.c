#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i;
    char str[3][30];


    //input
    for(i=0;i<3;i++){
    printf("Input string %d:",i+1);
    scanf("%s",str[i]);
  }

    //print
    for(i=0;i<3;i++){
    printf("%s\n",str[i]);
    }
 char first[30],last[30];
    //compare firstlast
   strcpy(first,str[0]);
    for(i=0;i<3;i++){
            if(strcmp(first,str[i])>0) strcpy(first,str[i]);
    }
   strcpy(last,str[0]);
     for(i=0;i<3;i++){
              if(strcmp(last,str[i])<0) strcpy(last,str[i]);
    }

    printf("first string = %s\nlast string = %s\n",first,last);

    //concaternate first+last
    printf("%s\n",strcat(first,last));


    //print reverse
    for(i=strlen(first)-1;i>=0;i--){
            switch(first[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("%c",toupper(first[i]));
        break;
        default: printf("%c",first[i]);
            }

    }

    return 0;
}
