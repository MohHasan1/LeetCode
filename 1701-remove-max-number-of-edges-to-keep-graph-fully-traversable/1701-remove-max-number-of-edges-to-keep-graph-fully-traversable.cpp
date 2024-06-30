class UnionFind {
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    bool unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            return true;
        }
        return false;
    }

private:
    vector<int> parent;
    vector<int> rank;
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        // Sort edges such that type 3 edges come first
        sort(edges.begin(), edges.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] > b[0];
        });

        UnionFind ufA(n + 1);
        UnionFind ufB(n + 1);

        int usedEdges = 0;

        // Process all edges
        for (const auto& edge : edges) {
            int type = edge[0], u = edge[1], v = edge[2];
            if (type == 3) {
                if (ufA.unionSets(u, v)) {
                    ufB.unionSets(u, v);
                    usedEdges++;
                }
            } else if (type == 1) {
                if (ufA.unionSets(u, v)) {
                    usedEdges++;
                }
            } else if (type == 2) {
                if (ufB.unionSets(u, v)) {
                    usedEdges++;
                }
            }
        }

        // Check if both Alice and Bob can traverse the entire graph
        if (isFullyTraversable(ufA, n) && isFullyTraversable(ufB, n)) {
            return edges.size() - usedEdges;
        } else {
            return -1;
        }
    }

private:
    bool isFullyTraversable(UnionFind& uf, int n) {
        int root = uf.find(1);
        for (int i = 2; i <= n; ++i) {
            if (uf.find(i) != root) {
                return false;
            }
        }
        return true;
    }
};
