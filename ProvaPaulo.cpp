#include <iostream>
#include <vector>
#include <sstream>

int main() {

    std::vector<int> dados;
    std::string linhas;
    int valor;

    std::cout << "Informe os dados (separados por espaço): ";
    std::getline(std::cin, linhas); // Lê a linha inteira de entrada

    // Separar os números da linha
    std::stringstream ss(linhas);
    while (ss >> valor) {
        dados.push_back(valor);
    }

    // Verifica se não tem nenhum dado quebrado
    if (dados.size() == 0) {
        std::cout << "Nenhum dado foi inserido no momento.\n";
        return 0;
    }

    // Exibir os dados
  std::cout << "\nDados: [";
    for (int i = 0; i < dados.size(); i++) {
         std::cout << dados[i];

    if (i < dados.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";

    // Encontrar o maior valor para determinar a largura do gráfico
    int ValorMaximo = 0;
    for (int i = 0; i < dados.size(); i++) {
        if (dados[i] > ValorMaximo) {
            ValorMaximo = dados[i];
        }
    }

    // Exibir total de linhas e colunas
    std::cout << "Total de linhas: " << dados.size() << "\n";
    std::cout << "Total de colunas: " << ValorMaximo << "\n\n";

    // Exibir o gráfico de barras horizontal
    for (int i = 0; i < dados.size(); i++) {
        std::cout << i + 1 << "|";
        for (int j = 0; j < dados[i]; j++) {
            std::cout << " *";
        }
        std::cout << "\n";
    }

            // Adicionando os traços em cima dos números
        std::cout << " ";
        std::cout << "+"; // Adiciona o símbolo "+"
        for (int i = 0; i <= ValorMaximo; i++) {
            std::cout << " -"; // Adiciona os traços
        }
        std::cout << "\n";

            // Exibir os índices
        std::cout << " "; // Adiciona um espaço para alinhar o 0 abaixo do +
        for (int i = 0; i <= ValorMaximo; i++) {
            if (i == 0) {
                std::cout << i; // Imprime o índice 0 sem espaço
            } else {
                std::cout << " " << i; // Imprime os outros índices com espaço
            }
        }

            std::cout << "\n";

    return 0;
}
