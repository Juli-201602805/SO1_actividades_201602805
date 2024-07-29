#!/bin/bash

# Usuario de GITHUB
GITHUB_USER="Juli-201602805"

if [ -z "$GITHUB_USER" ]; then
    echo "Ingrese un usuario de GitHub"
    exit 1
fi

# Consultar URL
USER_DATA=$(curl -s "https://api.github.com/users/$GITHUB_USER")

# Extraer valores del JSON
USER_ID=$(echo "$USER_DATA" | jq -r '.id')
CREATED_AT=$(echo "$USER_DATA" | jq -r '.created_at')

# Imprimir mensaje
MESSAGE="Hola $GITHUB_USER. User ID: $USER_ID. Cuenta fue creada el: $CREATED_AT."
echo "$MESSAGE"


# Crear el log 
FECHA=$(date +%Y-%m-%d)
LOG_DIR="/tmp/$FECHA"
LOG_FILE="$LOG_DIR/saludos.log"

mkdir -p "$LOG_DIR"
echo "$MESSAGE" >> "$LOG_FILE"

