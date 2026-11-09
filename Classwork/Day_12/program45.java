import java.util.Scanner;

public class program45 {

    public static float Average(int iNo1, int iNo2) {
        float fAns = 0.0f;

        // Typecasting maintained as it is
        fAns = ((float)iNo1 + (float)iNo2) / 2;

        return fAns;
    }

    public static void main(String[] args) {
        int iValue1 = 0, iValue2 = 0;
        float fResult = 0.0f;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        fResult = Average(iValue1, iValue2);

        System.out.println("Average is : " + fResult);

        scanner.close();
    }
}
