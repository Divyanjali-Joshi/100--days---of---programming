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
 {p=1;
    for(int j=0;j<n;j++)
    {
     p=a[j]*p;
    }

     printf("%d    ",p/a[i]);
 }
 return 0;
}

    