import java.util.*;

class StringDemo
{
    public int CountSmall(String s)
    {
        int iCnt = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'a') && (s.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Assignment31_Q2
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please string : ");
        String str = sobj.nextLine();
        StringDemo obj = new StringDemo();
        int iRet = obj.CountSmall(str);
        System.out.println("Number of small case letters are : "+iRet);
    }
}