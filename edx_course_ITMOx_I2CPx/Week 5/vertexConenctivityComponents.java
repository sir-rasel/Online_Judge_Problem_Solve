import java.util.*;
import mooc.*;

public class VertexBiconnectivity {
    static class Graph {
        int[] first, next, target;
        int edgeCount;
        Graph(int n, int m) {
            first = new int[n];
            next = new int[m];
            target = new int[m];
            Arrays.fill(first, -1);
            Arrays.fill(next, -1);
        }
        void add(int a, int b) {
            target[edgeCount] = b;
            next[edgeCount] = first[a];
            first[a] = edgeCount++;
            target[edgeCount] = a;
            next[edgeCount] = first[b];
            first[b] = edgeCount++;
        }
    }

    Graph g;
    Graph edgeGraph;
    int[] reachTime;
    int[] component;
    int time;

    void dfs1(int index, int prevEdgeId) {
        int minReachTime = reachTime[index] = ++time;
        for (int e = g.first[index]; e != -1; e = g.next[e]) {
            int edgeId = e >>> 1;
            if (edgeId != prevEdgeId) {
                int nextV = g.target[e];
                if (reachTime[nextV] == 0) {
                    dfs1(nextV, edgeId);
                }
                if (reachTime[index] > reachTime[nextV]) {
                    minReachTime = Math.min(minReachTime, reachTime[nextV]);
                    edgeGraph.add(edgeId, prevEdgeId);
                }
            }
        }
        reachTime[index] = minReachTime;
    }

    void dfs2(int index, int cmp) {
        component[index] = cmp;
        for (int e = edgeGraph.first[index]; e != -1; e = edgeGraph.next[e]) {
            int next = edgeGraph.target[e];
            if (component[next] == 0) {
                dfs2(next, cmp);
            }
        }
    }

    VertexBiconnectivity(EdxIO io) {
        int n = io.nextInt();
        int m = io.nextInt();
        g = new Graph(n, 2 * m);
        edgeGraph = new Graph(m, 4 * m);
        for (int i = 0; i < m; ++i) {
            g.add(io.nextInt() - 1, io.nextInt() - 1);
        }
        reachTime = new int[n];
        component = new int[m];
        for (int i = 0; i < n; ++i) {
            if (reachTime[i] == 0) {
                dfs1(i, -1);
            }
        }
        int nComponents = 0;
        for (int i = 0; i < m; ++i) {
            if (component[i] == 0) {
                dfs2(i, ++nComponents);
            }
        }
        io.println(nComponents);
        for (int i = 0; i < m; ++i) {
            if (i > 0) {
                io.print(' ');
            }
            io.print(component[i]);
        }
        io.println();
    }

    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            new VertexBiconnectivity(io);
        }
    }
}