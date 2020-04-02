#include<stdio.h>
main()
{
    int arr[100],k=0,m,n,zer=0,neg=0,pos=0;
    float t1,t2,t3;
    scanf("%d",&n);
    if(n>0 && n<=100)
    {    
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            if(m<=100 && m>=-100)
            {
                arr[i]=m;    
            }
        }
            for(int i=0;i<n;i++)
            {
                k=arr[i];
                if(k==0)
                {
                    zer+=1;
                }
                if(k<0)
                {
                    neg+=1;
                }
                if(k>0)
                {
                    pos+=1;
                }
            }
            t1=(float)zer/(float)n;
            t2=(float)neg/(float)n;
            t3=(float)pos/(float)n;
            printf("%0.6f\n",t3);
            printf("%0.6f\n",t2);
            printf("%0.6f\n",t1);
            }
}