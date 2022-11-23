# Comment Exploiter une base de donnée

Installer mysql

```shell 
sudo apt install mysql-server 
```
<br />

Télécharge la base de donnée depuis internet
```shell 
wget [lien]
```
<br />

Décompresser de labase de donnée
```shell 
unzip mysqlsampledatabase.zip
```
<br />

Lancer mysql
```shell 
sudo mysql
```
<br />

Chercher la base de donnée
```shell 
source/home/hugo/mysqlsampledatabase.sql
```
<br />

Montrer les différentes bases de données
```shell 
show databases; 
```
<br />

Créer un utilisateur hugo avec le mdp 1234
```shell
CREATE USER 'hugo'@'localhost' IDENTIFIED BY '1234';
```
<br />

Accorder à cette utilisateur tout les privileges sur tout les fichiers
```shell
GRANT ALL PRIVILEGES ON * . * TO 'hugo'@'localhost';
```
<br />

Accorder à cette utilisateur le droit de lancer des scripts
```shell
GRANT PROCESS ON * . * TO hugo@localhost;
```
<br />

Mettre a jour les privileges
```shell
FLUSH PRIVILEGES;
```
<br />

Permettre à cette utilisateur de se connecter sans mdp
```shell 
ALTER USER hugo@localhost IDENTIFIED WITH auth_socket;
```
<br />


# Comment créer un script

Ouvrir un script ou le créer s'il n'existe pas
```shell 
gedit dump-database.sh
```
<br />

Accorder tout les droits pour pouvoir créer et supprimer des fichiers
```shell 
chmod 777 /home/hugo/ScriptDataBase.sh
```
<br />

Lancer le script
```shell 
./dump-database.service
```
<br />