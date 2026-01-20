Challenge intro :

Côté serveur : 

```bash
┌──(root㉿seb)-[/home/seb]
└─# nc -lnvp 1234
listening on [any] 1234 ...
connect to [127.0.0.1] from (UNKNOWN) [127.0.0.1] 55892
The Key is 6d0k7e5z-6754-454e-8b4a-7ba3bd9634c5
```

Côté client :

```bash
┌──(root㉿seb)-[/home/seb]
└─# echo "The Key is 6d0k7e5z-6754-454e-8b4a-7ba3bd9634c5" | nc 127.0.0.1 1234
```

Solve :

ouvrir le pcap avec wireshark et clique droit suivre le flux TCP :

![14a33faf564ba5e9f89b0f2768fb593d.png](../../_resources/14a33faf564ba5e9f89b0f2768fb593d.png)