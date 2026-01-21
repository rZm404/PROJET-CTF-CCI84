Il faut soit connaître soit cherche les algo connu pour les numéros de carte bleue, on trouve l'algorythme de luhn, on se fait un script python et on rajoute le modulo pour n'en avoir qu'une seule :
```py
import luhn

for i in range(6666000000005432, 6666999999995432, 10000):
    if i % 6666661 == 0 and luhn.verify(str(i)):
        print("NHM2I{{{}}}".format(i))
```
# Flag :
`NHM2I{6666964413075432}`