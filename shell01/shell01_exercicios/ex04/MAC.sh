# ifconfig		configurar uma interface de rede
# -a	exibir todas as interfaces que estão atualmente disponíveis, mesmo se estiverem inativas
# grep		imprime linhas que correspondem a um padrão
ifconfig -a | grep 'ether' | sed 's/ *ether *//'