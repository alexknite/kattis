package katniss.coldputerscience;

import java.util.Scanner;

public class cold {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int t = in.nextInt();
            if(t < 0) count++;
        }
        System.out.println(count);
    }
}
