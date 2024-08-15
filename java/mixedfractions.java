package katniss.mixedfractions;

import java.util.Scanner;

public class mixedfractions {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            int num = in.nextInt();
            int dem = in.nextInt();

            if(num == 0 && dem == 0){
                break;
            }

            int a = num / dem;
            int b = num % dem;

            System.out.println(a + " " + b + " / " + dem);
        }
    }
}
