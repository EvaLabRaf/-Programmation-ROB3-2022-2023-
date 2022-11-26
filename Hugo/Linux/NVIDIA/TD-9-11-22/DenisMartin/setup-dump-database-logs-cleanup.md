# Comment configurer le contrôle des logs

Controller le volume maximum du fichier on peut utiliser
```shell
ulimit -f $((TailleEnMB*1024))
```
<br />

Supprimer toutes les lignes après la 2016e (7j*24h*6*10min) (à mettre dans le script)
```shell
echo "$(tail -2016 /var/log/dump-mysql.log)" > /var/log/dump-mysql.log
```
