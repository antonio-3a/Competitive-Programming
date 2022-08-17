/**
 ** Code by: "António 3A"
 ** UVa: 438 - The Circumference of the Circle
**/

import java.util.*;
import java.io.*;
public class Main {
    
    private static final Scanner LS = new Scanner(System.in);
    private static final BufferedReader LF = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) {
        
        while (LS.hasNext()) {
            double x0 = LS.nextDouble(), y0 = LS.nextDouble();
            double x1 = LS.nextDouble(), y1 = LS.nextDouble();
            double x2 = LS.nextDouble(), y2 = LS.nextDouble();
            double a = Math.sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
            double b = Math.sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2));
            double c = Math.sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
            double P = (a+b+c)/2;
            double C = (a*b*c*Math.PI)/(2*Math.sqrt(P*(P-a)*(P-b)*(P-c)));
            System.out.println(String.format("%.2f", C));
        }
    }
}