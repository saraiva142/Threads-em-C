# Threads com Sleep Aleatório

Este é um projeto simples em C que usa threads POSIX (`pthread`) para demonstrar concorrência. Duas threads tentam imprimir "1" ou "2" no console, com atrasos aleatórios introduzidos por `sleep` e `rand`.

## O que faz?
- **Thread 1**: Define `x = 1` e imprime "2" se `y == 0`.
- **Thread 2**: Define `y = 1` e imprime "1" se `x == 0`.
- Resultados possíveis: "1", "2" ou vazio, dependendo da ordem de execução.

## Como compilar
Use o GCC com a flag `-pthread`:
```bash
gcc -o threads_sleep programa.c -pthread
```
## Como executar
```bash
./threads_sleep
```

## Resultados

![image](https://github.com/user-attachments/assets/11b7f5b6-e0de-4b57-8351-e39c54155121)

