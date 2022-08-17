/**
 ** Code by: "António 3A"
 ** UVa: 369 - Combinations
**/
import java.util.*;
import java.io.*;
import java.math.BigInteger;
public class Main {
    
    private static final Scanner LS = new Scanner(System.in);
    private static final BufferedReader LF = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) {
        
        BigInteger Fat [] = new BigInteger [101];
        Fat [0] = BigInteger.ONE;
        for (int i = 1 ; i <= 100 ; i ++)
            Fat [i] = Fat [i - 1].multiply(BigInteger.valueOf(i));
        while (true) {
            int n = LS.nextInt(), m = LS.nextInt();
            if (n == m && m == 0)
                break;
            BigInteger C = Fat [n].divide(Fat [n - m].multiply(Fat [m]));
            System.out.println(n+" things taken "+m+" at a time is "+C+" exactly.");
        }
    }
}