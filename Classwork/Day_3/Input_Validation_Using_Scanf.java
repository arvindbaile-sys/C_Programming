import java.util.Scanner;

class Input_Validation_Using_Scanf
{
    public static void main(String A[])
    {
        int no = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :");
        
        if(!sobj.hasNextInt())
        {
            System.err.println("Invalid input");
            System.exit(1);
        }
        no = sobj.nextInt();

        System.out.println("Input is valid");

        System.exit(0);
    }
}