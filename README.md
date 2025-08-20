# 🚢 Batalha Naval em C — Nível Novato

Este projeto é o primeiro desafio do jogo **Batalha Naval**, feito em linguagem C.  
O objetivo foi aprender a usar **matriz bidimensional** (vetor 2D) para representar um tabuleiro e posicionar dois navios nele.

---

## 🎯 O que foi feito
- Foi criado um **tabuleiro 5x5** usando uma matriz (`int tabuleiro[5][5]`).
- Dois navios de tamanho **3** foram posicionados:
  - Um **horizontalmente** na linha 1.
  - Um **verticalmente** na coluna 3.
- Cada posição do navio foi marcada com o número **3**.
- A água foi representada com o número **0**.
- O programa mostra no console:
  1. As **coordenadas** de cada parte dos navios.
  2. O **tabuleiro completo**, exibindo a localização dos navios.

---

## 📂 Estrutura do Código
- Inicialização do tabuleiro com **0 (água)**.
- Posicionamento dos navios com valor **3**.
- Impressão das **coordenadas dos navios**.
- Exibição da matriz final com `printf`.

---

## 📤 Exemplo de saída


\=== POSICIONAMENTO DOS NAVIOS ===

Navio 1 (Horizontal):
Coordenada: (1, 0)
Coordenada: (1, 1)
Coordenada: (1, 2)

Navio 2 (Vertical):
Coordenada: (0, 3)
Coordenada: (1, 3)
Coordenada: (2, 3)

\=== TABULEIRO 5x5 ===

0 0 0 3 0
3 3 3 3 0
0 0 0 3 0
0 0 0 0 0
0 0 0 0 0

Legenda: 0 = Água | 3 = Navio

---

## ✅ Conclusão
Com este desafio aprendi a:
- Criar e manipular matrizes em C.
- Posicionar elementos (navios) dentro de limites definidos.
- Exibir informações no console de forma clara e organizada.