
abstract class Arithmetic
{
    public int Addition(int No1, int No2)
    {
        return No1 + No2;
    }
    public abstract int Substraction(int No1, int No2);
}
class Marvellous extends Arithmetic
{
     public int Substraction(int No1, int No2)
     {
        return No1 - No2;
     }
}

class AbstractDemo
{
    public static void main(String arr[])
    {
        Marvellous mobj = new Marvellous();
        int iRet = 0;
        iRet= mobj.Addition(11,10);
        System.out.println("Addition is :"+iRet);
        iRet= mobj.Substraction(11,10);
        System.out.println("Addition is :"+iRet);

    }
}