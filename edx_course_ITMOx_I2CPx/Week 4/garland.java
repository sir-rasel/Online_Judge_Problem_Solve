import mooc.*;

public class garland {
    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            int n = io.nextInt();
            double a = io.nextDoublePrecise();
            double minX = 0;
            for (int i = 1; i < n; ++i) {
                minX = Math.max(minX, (a - i) * (i - 1) / i);
            }
            double b = (n - 1) * minX + (n - 2) * (n - 1 - a);
            io.println(b);
        }
    }
}


// another

import mooc.*;

public class garland {
    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            int n = io.nextInt();
            double a = io.nextDoublePrecise();
            double left = 0, right = a;
            double b = -1;
            for (int t = 0; t < 50; ++t) {
                double mid = (left + right) / 2;
                double u = a, v = mid;
                boolean bad = false;
                for (int i = 2; i < n; ++i) {
                    double w = 2 * v - u + 2;
                    if (w < 0) {
                        bad = true;
                        break;
                    }
                    u = v;
                    v = w;
                }
                if (bad) {
                    left = mid;
                } else {
                    b = v;
                    right = mid;
                }
            }
            io.println(b);
        }
    }
}