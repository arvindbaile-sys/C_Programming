import java.util.Scanner;

public class Addition_Of_User_Input
{
    public static void main(String A[])
    {
        int iValue1, iValue2, iResult;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number :");
        iValue2 = sobj.nextInt();

        iResult = iValue1 + iValue2;

        System.out.println("%d"+iResult);
        
    }
}
