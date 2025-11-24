class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // 1. Colocar todas as palavras em um Set para busca rápida O(1)
        unordered_set<string> dict(wordList.begin(), wordList.end());
        
     //se a palavra final não está no dicionário, impossível chegar lá.
        if (dict.find(endWord) == dict.end()) {
            return 0;
        }
        
        // 2. Fila para a BFS
        queue<string> q;
        q.push(beginWord);
        
        // Nível atual da BFS (começa em 1 pois conta a própria beginWord)
        int level = 1;
        
        while (!q.empty()) {
            int size = q.size(); // Processamos nível por nível
            
            // Loop por todos os nós do nível atual
            while (size--) {
                string currentWord = q.front();
                q.pop();
                
                if (currentWord == endWord) {
                    return level;
                }
                
                // 3. Gerar vizinhos trocando cada letra
                for (int i = 0; i < currentWord.length(); ++i) {
                    char originalChar = currentWord[i];
                    
                    // Tenta substituir a letra na posição 'i' por todas as letras do alfabeto
                    for (char c = 'a'; c <= 'z'; ++c) {
                        if (c == originalChar) continue;
                        
                        currentWord[i] = c;
                        
                        // Se a nova palavra existe no dicionário
                        if (dict.find(currentWord) != dict.end()) {
                            q.push(currentWord);
                            dict.erase(currentWord); // Marca como visitada removendo do set
                        }
                    }
                    // Restaura a letra original para tentar a próxima posição
                    currentWord[i] = originalChar;
                }
            }
            // Incrementa o nível após processar toda a camada atual
            level++;
        }
        
        return 0; // Se a fila esvaziar e não acharmos a endWord
    }
};