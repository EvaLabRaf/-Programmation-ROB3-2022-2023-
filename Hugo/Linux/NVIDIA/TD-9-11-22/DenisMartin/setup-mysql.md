# Comment Exploiter une base de donnée

sudo apt install mysql-server = Installer mysql

wget [lien] = Télécharge la base de donnée depuis internet

unzip mysqlsampledatabase.zip = Décompresser de labase de donnée

sudo mysql = Lancer mysql

source/home/hugo/mysqlsampledatabase.sql = Chercher la base de donnée

show databases; = Montrer les différentes bases de données

CREATE USER 'hugo'@'localhost' IDENTIFIED BY '1234'; = Créer un utilisateur hugo avec le mdp 1234

GRANT ALL PRIVILEGES ON * . * TO 'hugo'@'localhost'; = Accorder à cette utilisateur tout les privileges sur tout les fichiers

GRANT PROCESS ON * . * TO hugo@localhost; = Accorder à cette utilisateur le droit de lancer des scripts

FLUSH PRIVILEGES; = Mettre a jour les privileges

ALTER USER hugo@localhost IDENTIFIED WITH auth_socket; = Permettre à cette utilisateur de se connecter sans mdp

# Comment créer un script

gedit dump-database.sh = Ouvrir un script ou le créer s'il n'existe pas

chmod 777 /home/hugo/ScriptDataBase.sh = Accorder tout les droits pour pouvoir créer et supprimer des fichiers

./dump-database.service = Lancer le script