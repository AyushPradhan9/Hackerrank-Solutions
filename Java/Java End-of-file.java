import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int count=0;
        while(in.hasNext()){
        String s=in.nextLine();
        count+=1;
        System.out.println(count+" "+s);
        }
    }
}