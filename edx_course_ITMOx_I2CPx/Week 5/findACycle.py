import sys
import threading
import mmap

def solve():
  def tokenGen():
    with open('input.txt', 'r') as inf:
      tokens, count, cur = [], 0, 0
      mm = mmap.mmap(inf.fileno(), 0, access=mmap.ACCESS_READ)
      while True:
        while cur == count:
          tokens = mm.readline().split()
          count = len(tokens)
          cur = 0
        cur += 1
        yield tokens[cur-1]
  token = tokenGen()

  def nextStr(): return next(token)
  def nextInt(): return int(nextStr())
  
  with open('output.txt', 'w') as ouf:
    n,m = nextInt() + 1, nextInt()
    e = [[] for i in range(0,n)]
    for i in range(0, m):
      e[nextInt()].append(nextInt())
    
    color = [0 for i in range(0,n)]
    par = [0 for i in range(0,n)]
    cycle=[]
    
    def dfs(u):
      color[u] = 1
      for v in e[u]:
        if color[v] == 1:
          while u != v:
            cycle.append(u)
            u = par[u]
          cycle.append(u)
          return True
        elif color[v] == 0:
          par[v] = u
          if dfs(v):
            return True
      color[u] = 2
      return False

    for u in range(1,n):
      if color[u] == 0 and dfs(u):
        ouf.write("YES\n")
        ouf.write(' '.join([str(v) for v in cycle[::-1]]))
        break
    else:
      ouf.write("NO")


class SomeCallable:
  def __call__(self):
    solve()
sys.setrecursionlimit(500000)
threading.stack_size(0x2000000)
t = threading.Thread(target=SomeCallable())
t.start()
t.join()