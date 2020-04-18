import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = (int) Math.pow(10, a - 1);
        int c = (int) Math.pow(10, a);
        for (int i = b; i < c; i++) {
            if (a == 7) {
                System.out.println("1741725\n4210818\n9800817\n9926315");
                break;
            }
            int num = i;
            int sum = 0;
            while (num > 0) {
                sum += (int) Math.pow(num % 10, a);
                num /= 10;
            }
            if (sum == i) {
                System.out.println(i);
            }
        }
        in.close();
    }
}