#!/bin/bash
make simples
mkdir -p ./testes/saida > /dev/null 2>&1
echo -e "\n"
# Cores para o terminal
BLACK='\033[0m'
RED='\033[0;31m'
GREEN='\033[0;32m'
# Loop de 1 a 10
for i in {1..10}; do
  # Substitui o número no caminho dos arquivos
    entrada="./testes/entrada/t$i"
    saida="./testes/saida/t$i"
    gabarito="./testes/gabarito/t$i"

  # Executa o comando ./compara.sh com os arquivos
    
    ./simples $entrada
    mv $entrada.asm $saida.asm
    cmp $saida.asm $gabarito.asm

  # Verifica se o comando foi bem-sucedido
  if [ $? -ne 0 ]; then
    echo -e "Testando o codigo t$i:\t ${RED}FALHA${BLACK}"
  else
    echo -e "Testando o codigo t$i:\t ${GREEN}SUCESSO${BLACK}"
  fi
done