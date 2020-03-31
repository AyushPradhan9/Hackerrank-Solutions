import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            for(int j=1;j<=n;j++)
            {
                int x=a,y=1;
                for(int k=1;k<=j;k++)
                {
                    x=x+(y*b); 
                    y=y*2;
                }
                System.out.print(x+" ");
            }
            System.out.println();
        }
        in.close();
    }
}