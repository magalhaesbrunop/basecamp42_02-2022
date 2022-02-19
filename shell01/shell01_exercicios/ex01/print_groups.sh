#!/bin/bash
# groups	
# tr	traduzir ou excluir caracteres
groups $FT_USER | tr ' ' ',' | tr -d '\n'