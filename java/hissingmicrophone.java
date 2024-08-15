package katniss.hissingmicrophone;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.next();

        System.out.println((input.contains("ss") ? "" : "no ") + "hiss");
    }
}
