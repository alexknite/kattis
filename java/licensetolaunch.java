package katniss.licensetolaunch;

import java.util.Scanner;

public class licensetolaunch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];
        //load array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = in.nextInt();
        }
        //find min
        int min = nums[0];
        for (int num : nums) {
            if (num < min) min = num;
        }
        //get index
        int i = 0;
        for (; i < nums.length; i++) {
            if(nums[i] == min) break;
        }
        System.out.println(i);
    }
}
