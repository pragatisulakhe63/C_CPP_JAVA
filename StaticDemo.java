class StaticDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");

        System.out.println("Value of static No3 :" +Demo.No3);
        System.out.println("Value of static No4 :" +Demo.No4);
        Demo.gun();

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
    }
}

class Demo
{
    public int No1; //non static characteristics
    public int No2; //non static characteristics
    public static int No3;  // static characteristics
    public static int No4;  // static characteristics

    static      //static block
    {
        System.out.println("Inside static block");
        No3 = 51;
        No4 = 101;
    }
    public Demo() // Constructor
    {
        System.out.println("Inside constructor");
        No1 = 11;
        No2 = 21;
    }
    public void Fun()   // non static method
    {
        System.out.println("Inside non static method fun");
        
    }

    public static void gun()   // static method
    {
        System.out.println("Inside  static method gun");
    }
}
