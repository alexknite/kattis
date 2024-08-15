package katniss.relocation;

import java.util.ArrayList;
import java.util.Scanner;

public class relocation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int q = in.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(0);
        for (int i = 0; i < n; i++) {
            arr.add(in.nextInt());
        }
        for (int i = 0; i < q; i++) {
            int arr1 = in.nextInt();
            int arr2 = in.nextInt();
            int arr3 = in.nextInt();
            if(arr1 == 1) {
                arr.set(arr2, arr3);
            } else {
                System.out.println(Math.abs(
                        arr.get(arr2) - arr.get(arr3)));
            }
        }
    }
}
