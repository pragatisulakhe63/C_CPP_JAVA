import java.util.Scanner;

class ArrayUser
{
    public static void main(String arg[])
    {
       int  iCnt = 0;
       int iSum = 0;
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the Size of Array :");
       int iSize = sobj.nextInt();

       int Arr[] = new int[iSize];

       System.out.println("Number fo elemnts in the array are:"+Arr.length);

        System.out.println("Enter the elements of array :");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

       System.out.println("Enter the elements of array :");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        
        System.out.println("Addition is:"+iSum);
    }
}