# Comment configurer le service

cd /etc/systemd/system = Se déplacer dans le fichier contenant les services

sudo gedit dump-database.service = Ouvrir ou créer le service s'il n'existe pas

sudo gedit dump-database.timer

sudo systemctl daemon-reload = Detecter les nouveaux service ajouté

sudo systemctl enable dump-database.service = Lancer le service au démarrage du système 

sudo systemctl enable dump-database.timer

sudo systemctl start dump-database.service = Lancer le service

sudo systemctl status dump-database.status = Voir l'état du service

sudo systemctl stop dump-database.status = Arreter le service