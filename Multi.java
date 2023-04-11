class Multi
{
    public static void main(String arg[])
    {
        // Arr is 2 dimensional array which contains 3 one dimensional
        // array, each one dimensional array contains 4 elements,
        // eacj element is of type integer

        // Allowed in C & C++
        // int Arr[3][4] = {{10,20,30,40},{10,20,30,40},{10,20,30,40}};

    }   // Allowed in only Java
         int Arr[][] = {{10,20,30,40},{10,20,30,40},{10,20,30,40}};

         System.out.println(Arr.length);        //3
         System.out.println(Arr[0].length);     //4

}