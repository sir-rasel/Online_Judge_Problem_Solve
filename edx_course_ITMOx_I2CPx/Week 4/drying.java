import java.util.*;
import java.io.*;

public class drying {
    public static void main(String[] args) throws IOException {
        try (BufferedReader in = new BufferedReader(new FileReader("input.txt"));
             PrintWriter out = new PrintWriter("output.txt")) {
            int n = Integer.parseInt(in.readLine());
            StringTokenizer st = new StringTokenizer(in.readLine());
            int[] a = new int[n];
            int l = 0;
            int r = 0;
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(st.nextToken());
                if (a[i] > r) {
                    r = a[i];
                }
            }
            int k = Integer.parseInt(in.readLine());

            if (k != 1) {
                while (r - l > 1) {
                    int m = (l + r) / 2;
                    long t = 0;
                    for (int i = 0; i < n; i++) {
                        if (a[i] > m) {
                            t += (a[i] - m + (k - 2)) / (k - 1);
                        }
                    }
                    if (t > m) {
                        l = m;
                    } else {
                        r = m;
                    }
                }
            }
            out.println(r);
        }
    }
}