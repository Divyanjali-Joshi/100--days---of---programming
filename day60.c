 #include <stdio.h>
 void maximum(int a[],int m,int n) // a ,3,1 [1  2  3  1  4  5  2  3  6]
 {  int x=a[n];             //x=0
    
            for(int j=n;j<(n+m);j++)//2<4
            {
                for(int k=n;k<(n+m);k++)//1<4
                {
                    if(x<=a[k])  //a[2]<=a[1]
                    {
                        x=a[k];   //3
                    }
                }
            } 
    printf("max=%d ",x);
 }
 int main()
 { int n,m;
     printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<(n);i++)
 {
    scanf("%d",&a[i]);

 }
 for(int i=0;i<n;i++)
 {
    printf("%d  ",a[i]);

 }
 printf("enter size for subarray \n");
    scanf("%d",&m);
    for(int i=0;i<(n-(m-1));i++)
    {
 maximum(a,m,i);
}
 return 0;
}