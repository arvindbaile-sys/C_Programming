import java.util.Scanner;
public class even_odd_function_return
{
    public static boolean CheckEven(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = scanner.nextInt();

        bRet = CheckEven(iValue);

        if(bRet == true)
        {
            System.out.println("it is even number");
        }
        else
        {
            System.out.println("it is odd number");
        }
    }
}
