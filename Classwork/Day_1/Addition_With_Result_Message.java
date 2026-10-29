import java.util.Scanner;

public class Addition_With_Result_Message
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number :");
        iValue2 = sobj.nextInt();

        iResult = iValue1 + iValue2;

        System.out.println("Addition is : %d"+iResult);

    }
}
