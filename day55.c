 #include <stdio.h>
 int main()
 {
    int n=0,c=0,m=0,p=0;
    printf("enter size\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);

 }
 for(int i=0;i<n;i++)
 {
    printf("%d    ",a[i]);

 }


 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)

 {
    if(a[i]==a[j])
    {
        c++;
    }
}
if(c>=m)
{
    m=c;
     p=a[i];
}
c=0;
}
    if(m>(n/2))
    {
printf("%d\n",p);
    }else{
        printf("-1");
    }
    return 0;
}