import java.util.Scanner;

public class Addition_With_Input_Validation
{

    
    public static int addition(
                    int iNo1,   // First input
                    int iNo2    // Second input
                )
    {
        int iAns = 0;

        iAns = iNo1 + iNo2;     // Business Logic

        return iAns;
    }

    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter first number : ");
        if (!scanner.hasNextInt()) {
            System.err.println("Unable to proceed as input is invalid");
            System.exit(1); // Acts as EXIT_FAILURE
        }
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        if (!scanner.hasNextInt()) {
            System.err.println("Unable to proceed as input is invalid");
            System.exit(1); // Acts as EXIT_FAILURE
        }
        iValue2 = scanner.nextInt();

        iResult = addition(iValue1, iValue2);

        System.out.println("Addition is : " + iResult);

        scanner.close();
        System.exit(0); // Acts as EXIT_SUCCESS
    }
}
