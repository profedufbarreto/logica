#include <iostream>
#include <string>
#include <vector>

struct Question {
    std::string enunciado;
    std::string alternativaA;
    std::string alternativaB;
    std::string alternativaC;
    char respostaCorreta;
    std::string explicacao;
};

int main() {
    std::vector<Question> quiz = {
        {
            "Se P é verdadeiro e Q é falso, qual é o valor de P ∧ Q?",
            "A) Verdadeiro",
            "B) Falso",
            "C) Indeterminado",
            'B',
            "A conjunção (∧) só é verdadeira quando ambos os valores são verdadeiros. Como Q é falso, o resultado é falso."
        },
        {
            "Se P é falso, qual é o valor de ¬P?",
            "A) Verdadeiro",
            "B) Falso",
            "C) Não é possível determinar",
            'A',
            "A negação (¬) inverte o valor lógico. Se P é falso, ¬P é verdadeiro."
        },
        {
            "Se P é verdadeiro e Q é falso, qual é o valor de P → Q?",
            "A) Verdadeiro",
            "B) Falso",
            "C) Indeterminado",
            'B',
            "A implicação (→) só é falsa quando o antecedente é verdadeiro e o consequente é falso. Aqui P é verdadeiro e Q é falso, então o resultado é falso."
        }
    };

    int pontuacao = 0;
    char resposta;

    std::cout << "=== Quiz de Lógica Proposicional ===\n\n";

    for (size_t i = 0; i < quiz.size(); i++) {
        std::cout << "Questão " << i+1 << ": " << quiz[i].enunciado << "\n";
        std::cout << quiz[i].alternativaA << "\n";
        std::cout << quiz[i].alternativaB << "\n";
        std::cout << quiz[i].alternativaC << "\n";
        std::cout << "Sua resposta (A/B/C): ";
        std::cin >> resposta;

        if (toupper(resposta) == quiz[i].respostaCorreta) {
            std::cout << "Correto! " << quiz[i].explicacao << "\n\n";
            pontuacao++;
        } else {
            std::cout << "Errado. " << quiz[i].explicacao << "\n\n";
        }
    }

    std::cout << "Você acertou " << pontuacao << " de " << quiz.size() << " questões.\n";
    return 0;
}
