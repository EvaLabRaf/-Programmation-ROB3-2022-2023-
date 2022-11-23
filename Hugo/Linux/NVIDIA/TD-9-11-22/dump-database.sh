#!/bin/bash

current_date=$(date +%Y-%m-%d-%H-%M-%S)

#Print start status message.
echo
echo "Starting backup ofclassicmodels to /home/hugo/Polytech/Database_Backup"
echo
date

#Backup the files.
mysqldump -u hugo classicmodels > "$current_date.sql"
echo "Backup created on $current_date" >>/var/log/dump-mysql.log

#Turn the backup into an .bz2 file
bzip2 "$current_date.sql"

#Move the file to the correct directory
mv /home/hugo/$current_date.sql.bz2 /home/hugo/Polytech/Database_Backup

#Print end status message
echo
echo "Backup finished"
echo
date
echo

#Remove the oldest backup
cd /home/hugo/Polytech/Database_Backup
Backup_number=$(ls /home/hugo/Polytech/Database_Backup | xc -l)

if [[ $Backup_number -get 5]]
then 
        rm "$(ls -t | tail -1)"
        echo "Backup deleted on $current_date" >>/var/log/dump-mysql.log
fi

ls -lh