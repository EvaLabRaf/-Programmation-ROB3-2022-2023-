# Comment configurer le contrôle des logs

ulimit -f $((TailleEnMB*1024)) = Controller le volume maximum du fichier on peut utiliser

echo "$(tail -20 /var/log/dump-mysql.log)" > /var/log/dump-mysql.log = Supprimer toutes les lignes après la 20e (à mettre dans le script)