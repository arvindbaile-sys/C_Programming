import java.util.Scanner;

public class Main {

    public static int maximum(int iNo1, int iNo2) {
        if (iNo1 > iNo2) {
            return iNo1;
        } else {
            return iNo2;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        iResult = maximum(iValue1, iValue2);

        System.out.println("Maximum number is : " + iResult);

        scanner.close();
    }
}
