/**
 ** Code by: "António 3A"
 ** UVa: 531 - Compromise
**/
import java.io.*;
import java.util.*;
public class Main {
    
    private static final Scanner LS = new Scanner(System.in);
    private static final BufferedReader LF = new BufferedReader(new InputStreamReader(System.in));
    private static final BufferedWriter EF = new BufferedWriter(new OutputStreamWriter(System.out));
    public static void main(String[] args) throws IOException {
        
        while (LS.hasNextLine()) {
            String [] MA = new String [100], MB = new String [100];
            int a = 0, b = 0;
            while (true) {
                String A = LS.nextLine();
                if (A.equals("#"))
                    break;
                String [] SA = A.split(" ");
                for (String sa : SA) 
                    MA [a++] = sa;
            }
            while (true) {
                String B = LS.nextLine();
                if (B.equals("#"))
                    break;
                String [] SB = B.split(" ");
                for (String sb : SB) 
                    MB [b++] = sb;
            }
            String lcs = LCS(MA, a, MB, b);
            System.out.println(lcs.substring(1));
        }
    }
    
    private static String LCS (String [] MA, int la, String [] MB, int lb) {
        String [] [] MAB = new String [la + 1] [lb + 1];
        for (int i = 0 ; i <= la ; i ++)
            for (int j = 0 ; j <= lb ; j++)
                MAB [i][j] = "";
        
        for (int i = 1 ; i <= la ; i ++)
            for (int j = 1 ; j <= lb ; j ++) {
                if (MA [i - 1].equals(MB [j - 1]))
                    MAB [i] [j] = MAB [i - 1] [j - 1] + " " + MA [i-1];
                else {
                    int lsa = MAB [i] [j - 1].split(" ").length;
                    int lsb = MAB [i - 1] [j].split(" ").length;
                    if (lsa > lsb)
                        MAB [i] [j] = MAB [i] [j - 1];
                    else
                        MAB [i][j] = MAB [i - 1] [j];
                }
            }
        return MAB [la] [lb];
    }
}