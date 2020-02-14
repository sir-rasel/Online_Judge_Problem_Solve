import mooc.*;

public class components {
    static class DFS1 {
        int[][] g;
        boolean[] used;
        int[] order;
        int leftCount;

        DFS1(int[][] g) {
            this.g = g;
            used = new boolean[g.length];
            order = new int[g.length];
            leftCount = g.length;
            for (int i = 0; i < g.length; ++i) {
                dfs(i);
            }
        }

        private void dfs(int index) {
            if (!used[index]) {
                used[index] = true;
                for (int next : g[index]) {
                    dfs(next);
                }
                order[--leftCount] = index;
            }
        }
    }

    static class DFS2 {
        int[][] g;
        int[] comp;
        int nComp = 0;

        DFS2(int[][] g, int[] order) {
            this.g = g;
            this.comp = new int[g.length];
            for (int i : order) {
                if (comp[i] == 0) {
                    dfs(i, ++nComp);
                }
            }
        }

        private void dfs(int index, int myComp) {
            if (comp[index] == 0) {
                comp[index] = myComp;
                for (int next : g[index]) {
                    dfs(next, myComp);
                }
            }
        }
    }

    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            int n = io.nextInt();
            int m = io.nextInt();
            int[] inDeg = new int[n];
            int[] outDeg = new int[n];
            int[] src = new int[m];
            int[] trg = new int[m];
            for (int i = 0; i < m; ++i) {
                src[i] = io.nextInt() - 1;
                trg[i] = io.nextInt() - 1;
                ++outDeg[src[i]];
                ++inDeg[trg[i]];
            }
            int[][] fwd = new int[n][];
            int[][] bwd = new int[n][];
            for (int i = 0; i < n; ++i) {
                fwd[i] = new int[outDeg[i]];
                bwd[i] = new int[inDeg[i]];
            }
            for (int i = 0; i < m; ++i) {
                fwd[src[i]][--outDeg[src[i]]] = trg[i];
                bwd[trg[i]][--inDeg[trg[i]]] = src[i];
            }
            DFS2 dfs2 = new DFS2(bwd, new DFS1(fwd).order);
            io.println(dfs2.nComp);
            for (int i = 0; i < n; ++i) {
                if (i > 0) {
                    io.print(' ');
                }
                io.print(dfs2.comp[i]);
            }
            io.println();
        }
    }
}