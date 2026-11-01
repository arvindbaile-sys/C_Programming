import java.util.Scanner;

class even_odd
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = scanner.nextInt();

        if((iValue % 2) == 0)
        {
            System.out.println("It is Even Number");
        }
        else
        {
            System.out.println("It Is Odd Number");
        }
    }
}