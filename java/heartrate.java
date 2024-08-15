package katniss.heartrate;

import java.text.DecimalFormat;
import java.util.Scanner;

public class heartrate {
    public static void main(String[] args) {
        DecimalFormat df = new DecimalFormat("#.0000");
        Scanner in = new Scanner(System.in);
        int cases = in.nextInt();
        for (int i = 0; i < cases; i++) {
            int beats = in.nextInt();
            double seconds = in.nextDouble();

            double actual = 60 * beats / seconds;
            double min = actual - (60 / seconds);
            double max = actual + (60 / seconds);
            System.out.println(
                    df.format(min)
                    + " "
                    + df.format(actual)
                    + " "
                    + df.format(max)
            );
        }
    }
}
