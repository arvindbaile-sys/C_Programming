import java.util.Scanner;

public class Input_Validation_Using_Scanf_With_If
{
    public static void main(String A[])
    {
        int no = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number");

        if(! scanner.hasNextInt())
        {
            System.out.println("Invalid Input");

            System.exit(1);
        }
        System.out.println("Input is valid");

        System.exit(0);
    }
    
}
