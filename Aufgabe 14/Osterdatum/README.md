# Aufgabe 14.2

## Beschreibung

Das Osterdatum eines Jahres ist astronomisch wie folgt definiert:
Wenn `d` das erste Vollmond-Datum nach oder am 21. März ist, dann ist Ostern der erste Sonntag nach oder an diesem Tag (`d`).

Es gibt verschiedene Algorithmen zur Berechnung des Osterdatums eines Jahres `y`. 
Der folgende von T.H. O’Beirne funktioniert fürr alle Jahre `y` im Bereich:

`1900 <= y <= 2099`

## Algorithmus (T.H. O'Beirne)
1. Setzen Sie `n = y - 1900`
2. Führen Sie die folgenden 5 ganzzahligen Divisionen mit Rest durch (Tipp: Modulo Operator %):

    |Schritt|Dividend        |Divisor|Quotient|Rest    |
    |:-----:|:--------------:|:-----:|:------:|:------:|
    |(1)    |`n`             |19     |not used|`a`     |
    |(2)    |`7a + 1`        |19     |`b`     |not used|
    |(3)    |`11a + 4 -b`    |29     |not used|`m`     |
    |(4)    |`n`             |4      |`q`     |not used|
    |(5)    |`n + q + 31 - m`|7      |not used|`w`     |

3. Setzen Sie `k = 25 - m - w`
4. Es gilt: Osterdatum = `k`-ter April. Dabei kann `k` auch `<= 0` sein. Verwenden Sie dazu folgenden Interpredation:

    `k =  0: 31.März`
    
    `k = -1: 30.März`
     
    `k = -2: 29.März`
    
    `u.s.w.`


## Auftrag
Schreiben Sie ein Programm, welches ein Jahr einliest und das Osterdatum dieses Jahres berechnet und anzeigt. 
Die Berechnung muss in einer Funktion erfolgen, welcher Sie das Jahr übergeben.

Bildschirmausgabe:
```
Berechnen des Osterdatums zwischen 1900 und 2099: 
Geben Sie das Jahr ein: 2005
Im Jahr 2005 sind die Ostern am 27. März.
```

**_`Zeichnen Sie zuerst ein Struktogramm des Programms.`_**

**Tipp:** Programmieren Sie Schritt für Schritt nach Vorgabe.

## Ziel
Kleine Algorithmen entwickeln lernen.

--------------------------------------------

# Struktogramm

[Das Struktogramm ist hier zu finden.](out/struktogramm.pdf)
