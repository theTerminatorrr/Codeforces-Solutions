import java.util.Scanner;
 
public class Average {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
 
            int n = scanner.nextInt();
            double sum = 0.0;
 
            for (int i = 0; i < n; i++)
            {
                sum += scanner.nextDouble();
            }
            double average = sum / n;
            System.out.printf("%.12f\n", average);
 
            scanner.close();
        }
}
