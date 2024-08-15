package katniss.sevenwonders;

import java.util.Scanner;

public class sevenwonders {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.next();
        int t = 0;
        int c = 0;
        int g = 0;
        //iterate over string
        for (int i = 0; i < input.length(); i++) {
            //check letter
            char letter = input.charAt(i);
            if(letter == 'T') t++;
            else if(letter == 'C') c++;
            else g++;
        }
        //square number
        int sum = t*t + c*c + g*g;
        //check for bonus
        int sets = 0;
        while(t >= 1 && c >= 1 && g >= 1) {
            sets++;
            t--;
            c--;
            g--;
        }
        //add up score
        sum += 7 * sets;
        System.out.println(sum);
    }
}
