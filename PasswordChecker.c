#include<stdio.h>
#include<string.h>
int pwdLength(char *s){
   
int count=0;
int i=0;
while(s[i] !='\0'){
    count++;
    i++;
}
return count;
}

int hasUpper(char *s){
    int i=0;
while(s[i] !='\0'){
    if(s[i] >='A' && s[i] <='Z'){
        return 1;
    }
    i++;
}
return 0;
}

int hasDigit(char *s){
    int i=0;
    while(s[i] !='\0'){
        if(s[i] >='0' && s[i]<='9'){
            return 1;
        }
      
        i++;
    }
    return 0;
}

int hasSpecial(char *s){
int i=0;
while(s[i] !='\0'){
    if(s[i] =='!' || s[i]== '@' || s[i]=='#' || s[i]=='$' || s[i]=='%' ){
        return 1;
    }
    i++;
}
return 0;
}

int isValidpassword(char *s){

int isValid=1;
if(pwdLength(s) < 8){
    isValid=0;
    printf("TOO SHORT\n");
}
 if(!hasUpper(s)){
    isValid=0;
    printf("HAS NO UPPER CASE LETTERS\n");
}
 if(!hasDigit(s)){
    isValid=0;
    printf("HAS NO DIGIT\n ");
}
 if(!hasSpecial(s)){
    isValid=0;
    printf("HAS NO SPECIAL CHARECTERS\n ");
}
return isValid;
}

int main(){
char password[50];
printf("THE PASSWORD MUST :");
printf(" HAVE AT LEAST 8 CHARECTERS\n");
printf("AND SOME UPPERCASE LETTERS:\n");
printf("AND SOME SPECIAL LETTERS LIKE ! AND # AND $:\n");
printf("!Enter your password please!\n");
fgets(password,sizeof(password),stdin);
password[strcspn(password,"\n")]='\0';
if(isValidpassword(password)){
printf("!PASSWORD ACCEPTED!");
}
else{
    printf("!PASSWORD REJECTED!");
}


return 0;
}