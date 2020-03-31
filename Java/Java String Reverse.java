import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        int size=A.length();
        int count=0;
        for(int i=0;i<size;i++){
            if (A.charAt(i)!=A.charAt(size-i-1)){
                count = 1;
            }
        }
        if(count==0){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}