import java.util.*;    // Inbuilt package
import Marvellous.Arithmetic;   //User Defined package
import Marvellous.PPA.Loop;   

class DemoPackage
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number:");
        int iNo2 = sobj.nextInt();

        Arithmetic aobj = new Arithmetic(iNo1,iNo2);

        int iResult = aobj.Addition();
        System.out.println("Addition is:"+iResult);

        iResult = aobj.Subtraction();
        System.out.println("Subtraction is:"+iResult);

        Loop lobj = new Loop();
        lobj.Display();
        
    }
}