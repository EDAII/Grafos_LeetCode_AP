class Solution {
public:
    // Função auxiliar para realizar a busca em profundidade (DFS)
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();

        // Condições de parada:
        // 1. Fora dos limites da matriz (i ou j inválidos)
        // 2. A célula atual é água ('0')
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0') {
            return;
        }

        // Marca a terra atual como visitada transformando-a em água ('0')
        // Isso evita que voltemos a processar esta célula ou contá-la como outra ilha
        grid[i][j] = '0';

        // Chama recursivamente para os 4 vizinhos (cima, baixo, esquerda, direita)
        dfs(grid, i + 1, j); // Baixo
        dfs(grid, i - 1, j); // Cima
        dfs(grid, i, j + 1); // Direita
        dfs(grid, i, j - 1); // Esquerda
    }

    int numIslands(vector<vector<char>>& grid) {
        // Verifica se o grid está vazio
        if (grid.empty()) return 0;

        int numIslands = 0;
        int m = grid.size();
        int n = grid[0].size();

        // Percorre cada célula da matriz
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Se encontrarmos uma terra ('1'), significa que achamos uma nova ilha
                if (grid[i][j] == '1') {
                    numIslands++;     // Incrementa o contador
                    dfs(grid, i, j);  // "Afunda" toda a ilha conectada
                }
            }
        }

        return numIslands;
    }
};