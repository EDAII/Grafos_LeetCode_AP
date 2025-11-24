## Alunos  
| Matrícula | Nome |  
|-----------------------|---------------------|  
| 20/2015868 | Alexandre Lema Xavier Júnior |  
| 22/1031354| Pedro Henrique Fernandino da Silva |  

## Sobre 
Resolução de questões do LeetCode (2 difíceis e 2 médias) pelos integrantes do grupo com o objetivo de demonstrar o conhecimento adquirido nesse módulo (Grafos) da disciplina.

## Questões

|Questão | Dificuldade |
| -- | -- |
| [2065. Maximum Path Quality of a Graph](https://leetcode.com/problems/maximum-path-quality-of-a-graph/description/) | Díficil |
| [785. Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/description/) | Média |
| [127. Word Ladder](https://leetcode.com/problems/word-ladder/description/) | Díficil |
| [200. Number of Islands](https://leetcode.com/problems/number-of-islands/description/) | Média |


### [2065 - Difícil](https://leetcode.com/problems/maximum-path-quality-of-a-graph/description/) 
Implementei uma busca em profundidade (DFS) para explorar todos os caminhos possíveis em um grafo não direcionado, partindo do nó 0 e respeitando um tempo máximo de percurso. A cada caminho, calculei a qualidade somando os valores dos nós únicos visitados, garantindo que cada valor fosse contabilizado apenas uma vez por trajeto. Estruturei o grafo com listas de adjacência, respeitando a limitação de até quatro arestas por nó, e utilizei um vetor de controle para monitorar as visitas aos nós. Ao final, retornei a maior qualidade encontrada entre todos os caminhos válidos.

![Print da Resolução 2065](questoes/assests/img2065.png)

### [785 - Média](https://leetcode.com/problems/is-graph-bipartite/description/)
Verifiquei se um grafo é bipartido aplicando uma busca em profundidade (DFS) que tenta colorir os nós usando apenas duas cores, de forma alternada(usando um vetor de cores onde cada nó é marcado com 0 ou 1) e a cada passo, os vizinhos recebem a cor oposta. Caso algum vizinho já tenha sido colorido com a mesma cor do nó atual, o grafo não é bipartido (retorna false). Como o grafo pode ter componentes desconexas, percorri todos os nós, iniciando a DFS apenas nos que ainda não estavam coloridos. No final, a função retorna verdadeiro apenas se for possível bipartir todas as componentes do grafo.

![Print da Resolução 785](questoes/assests/img785.png)

### [127 - Difícil](https://leetcode.com/problems/word-ladder/description/)
Nesta solução para o problema Word Ladder desenvolvida em C++, a questão foi abordada como a busca pelo caminho mais curto em um grafo não ponderado. Utilizei o algoritmo Breadth-First Search (BFS), que é ideal para garantir a descoberta da menor sequência de transformações possível nível por nível. Para otimizar o desempenho e evitar o erro de Time Limit Exceeded, utilizei um unordered_set para realizar buscas de palavras em tempo constante O(1). Além disso, ao invés de comparar a palavra atual com todas as outras do dicionário, optei por uma estratégia de geração de vizinhos, alterando cada caractere da palavra atual de 'a' a 'z' e verificando sua existência no conjunto.

![Print da Resolução 127](questoes/assests/127.png)

### [200 - Médio](https://leetcode.com/problems/number-of-islands/description/)
Implementei uma abordagem baseada em Busca em Profundidade (DFS). A lógica percorre toda a grade e, sempre que identifica uma célula de terra, aciona a recursão para "afundar" a ilha inteira, transformando as células conectadas em água ('0'). Essa técnica garante que cada ilha seja contabilizada apenas uma vez e otimiza o uso de memória, pois altera a própria grade em vez de criar uma matriz de visitas separada. A solução é eficiente, operando com complexidade de tempo linear em relação ao tamanho da matriz.

![Print da Resolução 200](questoes/assests/200.png)

## Vídeo de explicação das Questões:

https://github.com/user-attachments/assets/93692117-e813-40b3-b30b-1165bfd5b1fe

