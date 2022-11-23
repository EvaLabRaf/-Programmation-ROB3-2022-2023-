#!/bin/bash

#Compresser le fichier de sauvegarde au format bzip2
bzip2 -k sauvegarde.sql;

#Renommer(avec j/mois/année et heures/minutes/seconde) et deplacer ce fichier compressé dans un fichier spécial de sauvegarde
nom=$(date +%Y-%m-%d-%T)
mv sauvegarde.sql.bz2 /home/eva/sauvegarde/$nom;

echo Sauvegarde effectuée >> dump-mysql.log;

#Supprimer les fichier dans sauvegarde dès qu'il y en a plus que 5
Nbfichiers=$(ls -l /home/eva/sauvegarde | wc -l); 
echo $Nbfichiers

if [ $Nbfichiers -gt 5 ];then
	oldest=$(ls -t /home/eva/sauvegarde | tail- 1);
	echo $oldest
	rm /home/eva/sauvegarde/$oldest;
fi











