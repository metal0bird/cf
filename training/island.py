class sol(object):
    def num_island(self,grid):
        if len(grid)==0:
            return 0
        n=len(grid)
        m=len(grid[0])
        ans=0
        for i in range(n):
            for j in range(m):
                if grid[i][j]==1:
                    ans=ans+1
                self.make_w(i,j,n,m,grid)
        return ans

    def make_w(self,i,j,n,m,grid):
        if i<0 or j<0 or i>=n or j>=m:
            return
        if grid[i][j]==0:
            return 
        else:
            grid[i][j]=0
        self.make_w(i+1,j,n,m,grid)
        self.make_w(i,j+1,n,m,grid)
        self.make_w(i-1,j,n,m,grid)
        self.make_w(i,j-1,n,m,grid)
        self.make_w(i+1,j+1,n,m,grid)
        self.make_w(i-1,j-1,n,m,grid)
        self.make_w(i+1,j-1,n,m,grid)
        self.make_w(i-1,j+1,n,m,grid)

ob1=sol()
print(ob1.num_island([[1,1,0,0,0],[0,1,0,0,1],[1,0,0,1,1],[0,0,0,0,0],[1,0,1,0,1]])-1)