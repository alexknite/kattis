package katniss.champernowne;

public class Main {
    public static void main(String[] args) {
        champernowneCount(4, 2);
        int num = Integer.parseInt("12345678910");
        System.out.println(num);
//        champernowneCount(100, 7);
//        champernowneCount(314, 159);
//        champernowneCount(100000, 999809848);
    }
    public static void champernowneCount(int n, int k){
        int count = 0;
        StringBuilder sb = new StringBuilder();

        for (int i = 1; i <= n; i++) {
            sb.append(i);
            String numStr = sb.toString();
            int num = Integer.parseInt(numStr);
            if(num % k == 0) count++;
        }
        System.out.println(count);
    }
}