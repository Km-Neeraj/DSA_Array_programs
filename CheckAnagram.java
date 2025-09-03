//check anagram
import java.util.*;
class Solution {
                         static boolean isAnagram(String s1,String s2)
                         {
                             char[]s1Array=s1.toCharArray();
                             char[]s2Array=s2.toCharArray();
                             Arrays.sort(s1Array);
                             Arrays.sort(s2Array);
                             return Arrays.equals(s1Array,s2Array);
                         }
}
public class CheckAnagram {
                         public static void main(String[]abc)
                         {
                            String s1;
                            String s2;
                            System.out.println("Enter Two Strings");
                            Scanner sc=new Scanner(System.in);
                            s1=sc.next();
                            s2=sc.next();
                            boolean res=Solution.isAnagram(s1,s2);
                            if(res)
                            {
                               System.out.println("Strings are Anagram");
                            }
                            else 
                            {
                                                  System.out.println("Strings are not Ananagram");
                            }
                            sc.close();
                         }
                         
}
