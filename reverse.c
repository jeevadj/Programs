int main(){
    char str[1000];
    int len,index,t;
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(index=len-1;index>=0;index--){
      if(str[index]==' '){
        printf("%s ",&(index+1)[str]);
        str[index]='\0';
      }
      if(index==0){
        printf("%s",str);
      }
      }
    }
