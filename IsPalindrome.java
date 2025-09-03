//check String is Palindrome or not
import java.util.*;
class Solution1 
{
                         static boolean isPalindrome(String s)
                         {
                              s=s.toLowerCase();
                              String rev="";
                              for(int i=s.length()-1;i>=0;i--)
                              {
                               rev=rev+s.charAt(i);
                              }
                              return s.equals(rev);
                         }
}
public class IsPalindrome {
                         public static void main(String[]abc)
                         {
                              String s;
                              Scanner sc=new Scanner(System.in);
                              System.out.println("Enter String to check Palindrome or not");
                              s=sc.next();
                              boolean res=Solution1.isPalindrome(s);
                              if(res)
                              {
                                 System.out.println('"' + s + '"'+ " is Palindrome");
                              }
                              else 
                              {
                                                  System.out.println('"' +s+ '"'+" is not Palindrome");
                              }
                              sc.close();
                         }
                         
}
