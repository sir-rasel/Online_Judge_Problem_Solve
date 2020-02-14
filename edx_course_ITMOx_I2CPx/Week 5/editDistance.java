import mooc.*;

public class distance {
    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            char[] a = io.next().toCharArray();
            char[] b = io.next().toCharArray();
            int an = a.length, bn = b.length;
            int[] prev = new int[bn + 1];
            for (int i = 0; i <= bn; ++i) {
                prev[i] = i;
            }
            int[] curr = new int[bn + 1];
            for (int i = 1; i <= an; ++i) {
                char ai = a[i - 1];
                curr[0] = i;
                for (int j = 1; j <= bn; ++j) {
                    int add = ai == b[j - 1] ? 0 : 1;
                    curr[j] = 1 + Math.min(curr[j - 1], prev[j]);
                    curr[j] = Math.min(curr[j], add + prev[j - 1]);
                }
                int[] tmp = curr;
                curr = prev;
                prev = tmp;
            }
            io.println(prev[bn]);
        }
    }
}