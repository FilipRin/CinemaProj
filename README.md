# CinemaProjC++
---------------------
ENG
- *Lista- The linked list*: contains an arbitrary number of data of some type and is created empty. It is possible to add
data at the end of the list (lista+=data). It is possible to retrieve the number of data in the list. Possible
is to retrieve the data from the given integer position in the list (lista[i]) with the possibility of its
changes. It is an error if the position is out of range.
- *Vreme- Time*: consists of hours and minutes that are set during creation. It is possible to compare two times
(vreme1>vreme2) and create a new time that is offset from the current time by the given time
(vreme1+vreme2). The time is written to the output stream (it << vreme) in the form of hours:minutes,
where both parts of the time are printed two digits wide with a leading zero as needed.
- *Film- A movie*: is created with a given name and duration and contains a list of integer ratings which
is initially empty. It is possible to rate the movie. It is possible to retrieve the duration and the average
film rating. It is possible to retrieve the one-letter tag of the movie. The movie is written to the output stream
(it << film) in tag form name duration_time average_rating. One letter label
of the domestic film is D. The foreign film is additionally created with the country of origin and the type of translation
(SUBTITLED, SYNCHRONIZED). When printing a foreign film, the country is additionally printed
origin and type of translation. The one-letter designation of a foreign film is S.
- Write a main function that thoroughly tests the functionality of the given classes.


SRB
- *Lista* sadrži proizvoljan broj podataka nekog tipa i stvara se prazna. Moguće je dodati
podatak na kraj liste (lista+=podatak). Moguće je dohvatiti broj podataka u listi. Moguće
je dohvatiti podatak sa zadate celobrojne pozicije u listi (lista[i]) uz mogućnost njegove
izmene. Greška je ukoliko je pozicija izvan opsega.
- *Vreme* se sastoji iz sata i minuta koji se zadaju pri stvaranju. Moguće je uporediti dva vremena
(vreme1>vreme2) i kreirati novo vreme koje je od tekućeg vremena pomereno za zadato vreme
(vreme1+vreme2). Vreme se u izlazni tok ispisuje (it << vreme) u obliku sati:minuti,
pri čemu se oba dela vremena ispisuju na širini od dve cifre sa vodećom nulom po potrebi.
- *Film* se stvara sa zadatim nazivom i vremenom trajanja i sadrži listu celobrojnih ocena koja
je inicijalno prazna. Moguće je oceniti film. Moguće je dohvatiti vreme trajanja i prosečnu
ocenu filma. Moguće je dohvatiti jednoslovnu oznaku filma. Film se u izlazni tok ispisuje
(it << film) u obliku oznaka naziv vreme_trajanja prosečna_ocena. Jednoslovna oznaka
domaćeg filma je D. Strani film se dodatno stvara sa zemljom porekla i tipom prevoda
(TITLOVAN, SINHRONIZOVAN). Prilikom ispisa stranog filma, dodatno se ispisuje i zemlja
porekla i tip prevoda. Jednoslovna oznaka stranog filma je S.
- Napisati glavnu funkciju koja detaljno testira funkcionalnosti datih klasa.
