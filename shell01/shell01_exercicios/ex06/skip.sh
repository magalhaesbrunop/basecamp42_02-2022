#!/bin/bash
# awk	usada para manipular dados e gerar relatórios
# NR	mantém uma contagem atual do número de registros de entrada
# %2==1		vai começar do primeiro arquivo no indice 0 e vai pular 2 arquivos 
ls -l | awk 'NR%2==1'