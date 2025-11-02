 #include <stdio.h>
 int main()
 { 
    int n,m=0,flag=1,t=0;
     printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);

 }
 for(int i=0;i<n;i++)
 {
    printf("%d  ",a[i]);

 }
 for(int i=0;i<n;i++)
 {
     t=0;
    for(int j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
             t++; 
             
        }
    }

    if(t>1)
    { 
         m=a[i];
        flag=0;
        break;
    }
 }

 if(flag==0)
 {
    printf("repeated element%d",m);
 }
 return 0;
}
