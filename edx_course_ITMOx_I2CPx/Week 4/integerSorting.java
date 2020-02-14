import java.util.*;
import mooc.*;

public class bucket {
    private static final int MASK = 255;

    private static void init(int[] a, int[] b, int[] z, int[][] count) {
        int[] c0 = count[0], c1 = count[1], c2 = count[2], c3 = count[3];
        int n = a.length, m = b.length;
        for (int i = 0, t = 0; i < n; ++i) {
            int ai = a[i];
            for (int j = 0; j < m; ++j, ++t) {
                int v = ai * b[j];
                z[t] = v;
                ++c0[v & MASK];
                ++c1[(v >> 8) & MASK];
                ++c2[(v >> 16) & MASK];
                ++c3[(v >> 24) & MASK];
            }
        }
    }

    private static void radix(int[] src, int[] trg, int offset, int[] parts) {
        int n = src.length;
        for (int i = 0; i < n; ++i) {
            int v = src[i];
            trg[parts[(v >> offset) & MASK]++] = v;
        }
    }

    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            int n = io.nextInt();
            int m = io.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; ++i) {
                a[i] = io.nextInt();
            }
            int[] b = new int[m];
            for (int i = 0; i < m; ++i) {
                b[i] = io.nextInt();
            }

            int[][] count = new int[4][256];
            int[][] parts = new int[4][256];

            int[] z0 = new int[n * m];
            int[] z1 = new int[n * m];

            init(a, b, z0, count);

            for (int t = 0; t < 4; ++t) {
                int[] pt = parts[t];
                int[] ct = count[t];
                for (int i = 0; i < MASK; ++i) {
                    pt[i + 1] = pt[i] + ct[i];
                }
            }

            radix(z0, z1, 0, parts[0]);
            radix(z1, z0, 8, parts[1]);
            radix(z0, z1, 16, parts[2]);
            radix(z1, z0, 24, parts[3]);

            long sum = 0;
            for (int i = 0, iMax = z0.length; i < iMax; i += 10) {
                sum += z0[i];
            }
            io.println(sum);
        }
    }
}