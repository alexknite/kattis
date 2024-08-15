package katniss.harshadnumbers;

import java.util.Scanner;

public class harshadnumbers {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int input = in.nextInt();
        check(input);
    }
    public static void check(int num){
        int curr = num;
        int sum = 0;

        while(curr > 0){
            sum += curr % 10;
            curr /= 10;
        }
        if(num % sum == 0){
            System.out.println(num);
        } else {
            check(num+1);
        }
    }
}
