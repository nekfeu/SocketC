Librairie de socket en C.

Partie serveur :

- Initialisation du serveur : init_server(nombre connexion, port);
La fonction vous retourne le fd prêt à receptionner et envoyer.


Partie client :

- Initialisation du client : init_client()
La fonction retourne le fd connecté au serveur. Prêt à échanger.


Send & Receive :

- recept_str(int fd)
Retourne la chaine de caractère reçue.

- send_str(char *str, int fd)
Envoi au serveur la chaine de caractère envoyé à la fonction.


Retrouver dans example un main de test.
