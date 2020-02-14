import java.util.*;
import mooc.*;

public class EdgeConnectivity {
    static class Edge {
        final int sxt;
        boolean isBridge;
        Edge(int sourceXorTarget) {
            this.sxt = sourceXorTarget;
        }
    }

    Edge[][] g;
    int[] reachTime;
    int time;
    int[] component;

    void dfs(int index, int prev) {
        if (reachTime[index] == 0) {
            reachTime[index] = ++time;
            Edge up = null;
            boolean isBridge = true;
            for (Edge nextE : g[index]) {
                int nextV = nextE.sxt ^ index;
                if (nextV != prev) {
                    dfs(nextV, index);
                    if (reachTime[index] > reachTime[nextV]) {
                        reachTime[index] = reachTime[nextV];
                        isBridge = false;
                    }
                } else {
                    up = nextE;
                }
            }
            if (up != null) {
                up.isBridge = isBridge;
            }
        }
    }

    void dfsFill(int index, int id) {
        component[index] = id;
        for (Edge nextE : g[index]) {
            if (nextE.isBridge) {
                continue;
            }
            int nextV = nextE.sxt ^ index;
            if (component[nextV] == 0) {
                dfsFill(nextV, id);
            }
        }
    }

    EdgeConnectivity(EdxIO io) {
        int n = io.nextInt();
        int m = io.nextInt();
        int[] d = new int[n];
        Edge[] e = new Edge[m];
        int[] s = new int[m];
        int[] t = new int[m];
        for (int i = 0; i < m; ++i) {
            ++d[s[i] = io.nextInt() - 1];
            ++d[t[i] = io.nextInt() - 1];
            e[i] = new Edge(s[i] ^ t[i]);
        }
        g = new Edge[n][];
        for (int i = 0; i < n; ++i) {
            g[i] = new Edge[d[i]];
        }
        for (int i = 0; i < m; ++i) {
            g[s[i]][--d[s[i]]] = e[i];
            g[t[i]][--d[t[i]]] = e[i];
        }
        reachTime = new int[n];
        component = new int[n];
        for (int i = 0; i < n; ++i) {
            dfs(i, -1);
        }
        int nComponents = 0;
        for (int i = 0; i < n; ++i) {
            if (component[i] == 0) {
                dfsFill(i, ++nComponents);
            }
        }
        io.println(nComponents);
        for (int i = 0; i < n; ++i) {
            if (i > 0) {
                io.print(' ');
            }
            io.print(component[i]);
        }
        io.println();
    }

    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            new EdgeConnectivity(io);
        }
    }
}