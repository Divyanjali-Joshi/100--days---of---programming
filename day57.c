    #include <stdio.h>
 int main()
 {
    int n=0,c=0,m=0,p=1;
    printf("enter size\n");
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
 printf("\n");


 for(int i=0;i<n;i++)
 {
     p=1;
    for(int j=i;j>=0;j--)
 {
    if(a[i]<a[j] && p==1)
    {
        printf("%d  ",a[j]);
        p=0;
    }
}
if(p==1)
{
    printf("-1  ");
}
 }
 return 0;
}

