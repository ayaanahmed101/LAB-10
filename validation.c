#include <stdio.h>

int main () {
	
 
 
 char pass[200];
 char confirmedpass[200];

 
  printf("ENTER YOUR PASSWORD\n");
  gets(pass);
  
  if (strlen(pass) < 8 ){
  	printf("Invalid");
  }
  else{
  	printf("ENTER CONFIRMED PASSWORD");
  	gets(confirmedpass);
  	if(strcmp(pass,confirmedpass) == 0){
  	printf("Passwords match");
  }
  else{
  	printf("Password dont match ");
  }
  
  
 
}

  return 0 ;
}
