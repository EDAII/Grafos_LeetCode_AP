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


### [2065 - Difícil](https://leetcode.com/problems/maximum-path-quality-of-a-graph/description/) 
Implementei uma busca em profundidade (DFS) para explorar todos os caminhos possíveis em um grafo não direcionado, partindo do nó 0 e respeitando um tempo máximo de percurso. A cada caminho, calculei a qualidade somando os valores dos nós únicos visitados, garantindo que cada valor fosse contabilizado apenas uma vez por trajeto. Estruturei o grafo com listas de adjacência, respeitando a limitação de até quatro arestas por nó, e utilizei um vetor de controle para monitorar as visitas aos nós. Ao final, retornei a maior qualidade encontrada entre todos os caminhos válidos.

![Print da Resolução 2065](questoes/assests/img2065.png)

### [785 - Média](https://leetcode.com/problems/is-graph-bipartite/description/)
Verifiquei se um grafo é bipartido aplicando uma busca em profundidade (DFS) que tenta colorir os nós usando apenas duas cores, de forma alternada(usando um vetor de cores onde cada nó é marcado com 0 ou 1) e a cada passo, os vizinhos recebem a cor oposta. Caso algum vizinho já tenha sido colorido com a mesma cor do nó atual, o grafo não é bipartido (retorna false). Como o grafo pode ter componentes desconexas, percorri todos os nós, iniciando a DFS apenas nos que ainda não estavam coloridos. No final, a função retorna verdadeiro apenas se for possível bipartir todas as componentes do grafo.


![Print da Resolução 785](questoes/assests/img785.png)

## Vídeo de explicação das Questões:
