    #include <stdio.h>
 int main()
 {
    int n=0,t=0,m=0,p=0,temp=0,sum=0;
    printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);

 }
 printf("enter size of subarray \n");
    scanf("%d",&m);
 for(int i=0;i<n;i++)
 {
    printf("%d  ",a[i]);

 }
 printf("\n");


for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
p=n-1;
while(t!=m)
{
    sum=sum+a[p];
    p--;
    t++;
}
printf("sum=%d",sum);
return 0;
 }
