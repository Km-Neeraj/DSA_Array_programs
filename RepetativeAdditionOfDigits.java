//Finding sum of digits of a number until sum becomes single digit
import java.util.*;
class Solution 
{
      int sumDigits(int num)
      {
           int sum=0;
           while(num>0||sum>9)
           {
                if(num==0)
                {
                     num=sum;
                     sum=0;
                }
                sum=sum+num%10;
                num=num/10;
           }
           return sum;
      }
}
public class RepetativeAdditionOfDigits {
                         
                         public static void main(String[]abc)
                         {
                            int n;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter the number");
                            n=sc.nextInt();
                            Solution ob=new Solution();
                            int res=ob.sumDigits(n);
                            System.out.println("Resultant sum of num = "+res);
                            sc.close();
                         }
}