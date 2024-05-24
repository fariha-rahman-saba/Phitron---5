import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int p = sc.nextInt();
        float m = (float) (100 * p) /(100-x);

        System.out.printf("%.2f", m);
    }
}