import java.util.*;
class Solution 
{
    static String replace(String s,char ch,int idx)
    {
       StringBuilder res=new StringBuilder(s);
       res.setCharAt(idx,ch);
       return res.toString();
    }
}
public class CharInsert {
                         public static void main(String[]abc)
                         {
                            String s;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter String");
                            s=sc.nextLine();
                            System.out.println("Enter Character to enter in a string");
                            char ch=sc.next().charAt(0);
                            System.out.println("Enter index to place character");
                            int idx=sc.nextInt();
                            String s1=Solution.replace(s,ch,idx);
                            System.out.println("String after replacing character");
                            System.out.println(s1 );
                            sc.close();
                         }
                         
}
