#!/bin/bash

CHEMIN=/home/eva/desktop/sauvegarde.sql

######Création du dossier de réception
sudo cp mysqlsampledatabase.sql /home/eva/Documents/sauvegarde.sql;
echo Sauvegarde effectuée

#######Afficher la date
DATE=$(date +%Y-%m-%d-%T);
echo $DATE;








