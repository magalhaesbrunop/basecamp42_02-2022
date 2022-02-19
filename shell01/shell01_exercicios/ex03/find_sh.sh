#!/bin/bash
# find	procura arquivos em uma hierarquia de diretorios
# .		a busca será feita no diretório atual e subdiretórios
# -type f	busca somente arquivos
# -name '*.sh' 	busca somente arquivos com a extensão .sh
# -exec basename {}		mostra somente o nome do arquivo
# .sh \;	remove o sufixo dos arquivos e nesse caso o sufixo é .sh

find . -type f -name '*.sh' -exec basename {} .sh \;