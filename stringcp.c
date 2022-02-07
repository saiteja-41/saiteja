 #include<stdio.h>
 void main(){
     char *a="helloworld";
     char b[20];
     int i=0;
     while(1){
        b[i]=*(a+1);
        if(b[i]=='\0')
        break;
        i++;
        
         
     }
     printf("the copied string is %s",b);
 }
 
