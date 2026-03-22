# ==========================================
# EXEMPLO DE LOOP 'FOR' EM PYTHON
# ==========================================

# 1. Definimos uma lista de elementos para iterar.
# Uma lista é uma coleção ordenada de itens.
frutas = ["maçã", "banana", "cereja"]

print("--- Início do Loop ---")

# 2. O comando 'for' inicia a estrutura de repetição.
# 'fruta' é uma variável temporária que assume o valor de cada item da lista em cada volta.
# 'in frutas' indica que queremos percorrer a lista 'frutas'.
for fruta in frutas:
    # 3. Bloco indentado: tudo o que estiver aqui será repetido.
    # Em cada iteração (volta), o Python pega o próximo item da lista.
    
    print(f"Processando a fruta: {fruta}")
    
    # Explicação detalhada do que acontece aqui:
    # Volta 1: 'fruta' recebe "maçã". O print imprime "maçã".
    # Volta 2: 'fruta' recebe "banana". O print imprime "banana".
    # Volta 3: 'fruta' recebe "cereja". O print imprime "cereja".

# 4. Fim do loop: quando não há mais itens na lista, o Python sai do bloco indentado.
print("--- Fim do Loop ---")

# ==========================================
# EXPLICAÇÃO DAS ETAPAS:
# 1. Inicialização: O Python olha para a coleção (frutas).
# 2. Atribuição: A variável 'fruta' recebe o primeiro valor ("maçã").
# 3. Execução: O código dentro do 'for' é executado com fruta="maçã".
# 4. Próximo passo: O Python volta ao topo, vê se há mais itens.
# 5. Repetição: Se houver, atribui o próximo e executa de novo.
# 6. Encerramento: Se NÃO houver mais itens, o programa continua após o bloco do loop.
# ==========================================
