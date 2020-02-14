import mooc.*;

public class Game {
    int[][] g;
    boolean[] currentWins;
    int[] state;

    Game(EdxIO io) {
        int n = io.nextInt();
        int m = io.nextInt();
        int x = io.nextInt() - 1;
        int[] d = new int[n];
        int[] s = new int[m];
        int[] t = new int[m];
        for (int i = 0; i < m; ++i) {
            s[i] = io.nextInt() - 1;
            t[i] = io.nextInt() - 1;
            ++d[s[i]];
        }
        g = new int[n][];
        for (int i = 0; i < n; ++i) {
            g[i] = new int[d[i]];
        }
        for (int i = 0; i < m; ++i) {
            g[s[i]][--d[s[i]]] = t[i];
        }
        currentWins = new boolean[n];
        state = new int[n];
        if (dfs(x)) {
            io.println("Alice");
        } else {
            io.println("Bob");
        }
    }

    boolean dfs(int index) {
        switch (state[index]) {
            case 0: {
                state[index] = 1;
                boolean nextCanLose = false;
                for (int next : g[index]) {
                    nextCanLose |= !dfs(next);
                }
                state[index] = 2;
                return currentWins[index] = nextCanLose;
            }
            case 1:  throw new AssertionError("The graph contains a cycle");
            default: return currentWins[index];
        }
    }

    public static void main(String[] args) {
        try (EdxIO io = EdxIO.create()) {
            new Game(io);
        }
    }
}