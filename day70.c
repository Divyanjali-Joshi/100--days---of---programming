  #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 int main()
 { int t=0;  
     char s[50];
    
     
    printf("enter a word\n");
    gets(s);
    int p=strlen(s);
    s[0]=toupper(s[0]);
    for (int i=0;i<strlen(s);i++)
    {
        
      if(s[i]==' ')
      {
        t=i;
      }
      if(t!=0){
      s[t+1]=toupper(s[t+1]);
      }
      
    }
    puts(s);
return 0;
 }

   