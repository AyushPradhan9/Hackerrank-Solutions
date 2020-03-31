import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s=sc.next();
                int x=sc.nextInt();
                int n=s.length();
                int k=0;
                n=15-n;
                System.out.print(s);
                for(int j=0;j<n;j++)
                {
                    System.out.print(" ");
                }
                if(x/100>=1)
                {
                    System.out.println(x);
                    k=1;
                }
                else if(x/10>=1 && k==0)
                {
                    System.out.println("0"+x);
                    k=1;
                }
                else if(k==0)
                {
                    System.out.println("00"+x);
                }
            }
            System.out.println("================================");

    }
}