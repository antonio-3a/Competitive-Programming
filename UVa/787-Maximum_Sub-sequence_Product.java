
/**
 ** Coded by: "António 3A"
 ** UVa: 787 - Maximum Sub-sequence Product
**/
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner ls = new Scanner(new File("input.in"));
        //Scanner ls = new Scanner(System.in);

        BigInteger L[] = new BigInteger [110], m, p;
        int t, n;
        while(ls.hasNext()) {
            t = 0;
            m = BigInteger.valueOf(-99999);
            while(true) {
                n = ls.nextInt();
                if(n == -999999)
                    break;
                L[t++] = BigInteger.valueOf(n);
            }
            for(int i = 0; i < t; i++)
            {
                p = BigInteger.ONE;
                for(int j = i; j < t; j++) {
                    p = p.multiply(L[j]);
                    if(p.compareTo(m) > 0)
                        m = p;
                }
            }
            System.out.println(m);
        }
    }
}