import java.util.*;
class Solution 
{
    static String replaceByChar(String s)
{
        StringBuilder res=new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
                         char ch=s.charAt(i);
             if(i%2==0)
             {
                res.append(ch);      
             }
             else 
             {
                int shift=ch-'0';
                char prev=s.charAt(i-1);
                char add=(char)(prev+shift);
                res.append(add);
             }
}
             return res.toString();
        }
}



public class ReplaceByChar {
                         public static void main(String[]abc)
                         {
                            String s;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter String");
                            s=sc.next();
                            String res=Solution.replaceByChar(s);
                            System.out.println("Original String Before Replacing Digit by Character ="+s);
                            System.out.println("String after Replacing digit by Character "+res);
                            sc.close();

                         }
                         
}
