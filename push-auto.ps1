# Script PowerShell para automatizar commit e push para o GitHub
# Uso: ./push-auto.ps1 "Mensagem do commit"

param(
    [string]$msg = "Atualização automática"
)

git add .
git commit -m "$msg"
git push origin main
