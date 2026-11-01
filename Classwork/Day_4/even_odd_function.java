import java.util.Scanner;

public class even_odd_function
{
    public static void CheckEnven(int iNo)
    {
        if((iNo % 2) == 0)
        {
            System.out.println("it is enven number");
        }
        else
        {
            System.out.println("it is odd number");
        }
    }
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = scanner.nextInt();

        CheckEnven(iValue);
    }
}
