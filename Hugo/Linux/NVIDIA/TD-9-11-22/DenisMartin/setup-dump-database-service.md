# Comment configurer le service

Se déplacer dans le fichier contenant les services
```shell
cd /etc/systemd/system
```
<br />

Ouvrir ou créer le service s'il n'existe pas
```shell
sudo gedit dump-database.service

sudo gedit dump-database.timer
```
<br />

Detecter les nouveaux service ajouté
```shell
sudo systemctl daemon-reload
```
<br />

Lancer le service au démarrage du système 
```shell
sudo systemctl enable dump-database.service

sudo systemctl enable dump-database.timer
```
<br />

Lancer le service
```shell
sudo systemctl start dump-database.service
```
<br />

Voir l'état du service
```shell
sudo systemctl status dump-database.status
```
<br />

Arreter le service
```shell
sudo systemctl stop dump-database.status
```
<br />