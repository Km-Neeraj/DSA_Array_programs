import java.util.*;
class Solution 
{
    static String replace(String s,char ch,int idx)
    {
       StringBuilder res=new StringBuilder(s);
       for(int i=0;i<s.length();i++)
       {

          if(i==idx)
          {
            res.setCharAt(i,ch);  
          }
       }
       return res.toString();
    }
}
public class Insert {
                         public static void main(String[]abc)
                         {
                            String s;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter String");
                            s=sc.next();
                            System.out.println("Enter index and character");
                            int idx=sc.nextInt();
                            char ch=sc.next().charAt(0);
                            String res=Solution.replace(s,ch,idx);
                            System.out.println("String after replacing character "+res);
                            sc.close();
                         }
                         
}
