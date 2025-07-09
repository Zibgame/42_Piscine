#!/bin/bash

ifconfig | grep ether | awk '{print $2}'

: '
ifconfig affiche les interfaces reseau en gros.
grep prend juste les lignes avec "ether" dedans.
awk decoupe la ligne en colonnes et affiche pour chaque ligne la deuxideme colonne.
'
