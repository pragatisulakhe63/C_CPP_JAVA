import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {

    }
}
public class Assignment31_Q3 
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please string : ");
        String str = sobj.nextLine();
        StringDemo obj = new StringDemo();
        int iRet = obj.CountDiff(str);
        System.out.println("Number of small case letters are : "+iRet);
    }
}
