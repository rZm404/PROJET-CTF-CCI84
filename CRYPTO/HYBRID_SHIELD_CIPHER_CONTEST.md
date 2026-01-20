# Hybrid Shield Cipher Contest

Enoncé pour les débutants && expérimentés :

```
Votre mission si vous l'acceptez : libérer l'humanité de la Matrice. L'agent Smith a mis en place un nouveau programme qui menace de détruire la résistance en infectant les vaisseaux avec un virus mortel. La seule solution pour empêcher la propagation du virus est de localiser et de pirater le programme malveillant. Cependant, le programme est protégé par un système de sécurité complexe qui nécessite une série de codes d'accès pour être déverrouillé.

Les membres de la résistance sont au courant de la menace posée par le virus et ont besoin d'agir rapidement pour l'empêcher de se propager. Ils ont reçu un message chiffré contenant les codes d'accès nécessaires pour déverrouiller le système de sécurité protégeant le programme malveillant, mais ne peuvent pas le décoder seuls.

Les informations dont dispose la résistance :
 Les 2 blocs chiffrés du message en format base64, qui ont été transmis via un canal de communication.
    Les 3 clés privées correspondantes aux clés publiques utilisées pour chiffrer les blocs, qui ont été utilisées pour déchiffrer les blocs chiffrés. 
Avec ces informations, vous allez pouvoir déchiffrer les blocs un par un en utilisant les clés privées correspondantes, puis les assembler pour obtenir le message déchiffré. 

 Les 2 blocs chiffrés :
Message chiffré 1: Py8IQbWc_SQSenysPDyFtrjzN2W38pHdG7oVfl5TODSFNiKQ4lHWgyfNBUcWbTwlC7phvS2dgiK-gJLV76t4yhlFMl_YaifEeWGvchZ8bfHH8A5-2URPLh8KZyvhw3d5A3sjWJUawhg1fMg0CtIqm4rC1JSGWSH_IQsG1_gcqOlgnj3vyU6JmawnlH7Z5hGEad3XqnKCLPKRZ2ZHYJ-0CjZl8PUkyiRWJI5gRWWsa_obTnOXmMr9EFWJ17uxi_7JKm1APxg6v_q6nvaEJu_nB0gKDBVyuaBhDH7jvp1mLV0akdQBTjwg2iArftHED3qebRL9Ru9HaAA-KCXfebdWag==
Message chiffré 2: gBdQwuFeE5WmczrSEA4YaZCtte8m5X_TPIb3R0GMzTa_IWOwCAfK-ixlrx2XleyQW_O7QZmg35nGUEOXdRkeCdBClc9BH4tHm2HcZQsfsHPkxbRL80qAXOYRJzSUSuq8mWMFP9mSUjrBxz0GoLC-WI_Kem4hWet0rXcz1Mu2wSAk1sL-8RXzxxlRMLswcIvrOmU8vV1cgtE4yu0u0cb2QsF2_XwpQ7t_p1eJxuqMUSOYdNk1mbvGQYxX3ekfV5LmKJFvrdukg86kgvRvrGQdXoxj8GCCnblv2gFCfBYndcYMUfsgmsrzdFcKZbXJUE1XRW5SLp2lo8WlBromQ_P2KQ==

 Les 3 clés privées :
private_key1 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEA3d/315v2vyNRuXbgMpws/BDli5H4onQwf67/X0Jsek0wdcvY\n066Dp2eZt6ePgAHzCrwdtlP7+TSOvUFxA4yn4Xg4/9s+8z3/pgFK6AqlRnDlwf0h\nv3NWNqHfZhlFcP3AM7RqHG9stK97UEb98c7xIO0oOPIOvaftEf7dqLH6VUFvbITV\n84x/K2SUYemmYJ0MfVCpx8LCMHMIgVc8zFmmchmkwhoqB5CgKuvZlnmyO7sQWeV5\nuf8VGYrdl2dsIsrxxu2buHwBzttm/5H6B6mWxVNy+9D0OafJd9bqRQk0dgaoAnP5\n33wWUZfsVKx2UrABO+i6OBtdTaPb8/nAOb5K8QIDAQABAoIBAAKGPnn+rW4rmKdk\nZbTsGt64uLF5SD727sKHiyKT4HHJLr43j8bwYx4uOyBAQPOrC5wcm4NVzZXebHch\n4O2/D0qGlUvWvE7E4fbLG6vr5RYAVlWtWHgAaxbYVopnl4C4QZQ4OJ9ys0xGyKXw\n7NY87V7oLw84zjfUfe/4umzL+5k2AQHWQLohT5Ir1zf2NcB7gt3Hi52F3jRABn8/\nCT7ryWurcPHOJ5ETujkXdbho4ftcJfteLCp4WYdrHMwK7DHA+ONDHPOyJI+sYVdR\njazbOhUM1QwSQURLWlHWJFDVezZkOzEp3GQ8xl8xjOCIDRZk/61jFgOKQgs3jaUk\nix2aQY0CgYEA6KgcITc218LFo4QjHgpN79i7iVgE4BE61hhb5g7FpQQQ3qVYKlpF\nsjfBQNPvsYy5AHkS3J8DlPSS/ENdVfe2s+XnEBn6S3vjAN7Up9n8U8IpTweH1VzE\ng79Wu+oL0JtyrnkXm04gLZfVSC0UWbeyEQZHIMyF3QsJuul9ahT0PN0CgYEA9CLs\nPvsvLx0nc0KZo2Bl9ebkQ8rq1RYprN3WjekMjLtHPKV4UFAiMaoCgmuBViyIyQ/b\nTi13EDtFKEHjUAJoFaEquhosjFASeC/qlyqI348iEsChuDWCo4mvNz0aund/KGKQ\namnAObFBY7xu0gltUo9JMWJKIS9cFg5RVQvkCyUCgYEAiEGcZ9+cYPSTJ1bF8lv6\nlROLkb5Y7JlqqeSOPcg8/I3LC3oujm9cDioVJlB5OrS9zIccAtWmFWC/jLovOZ/g\nArAMiSONsROXOPVH+h3yZ2N5Ke2xIcY42SgANgG2da/0lDYbGzvAILOhl6m/F2Q8\nBzh0A8OESpaiVjNU3gHzoIkCgYBEIDqsmItiKlCH6V3WKWBKblPkVwuQys52XrEw\niIfn/ZqzYblhL/tawIZSvo0o7uR8tuALwMQo02FJCpnUCdfhsUerBwLHZNDCmRxt\ncoEfYWGwufBm5we9ev5Z+8MppY7mRhrmlvv9HWmR21NRaTAIidNy5GqrN/wKa5Rm\nlxrbwQKBgHKF534Wb+wcbX5vXA4cYe9ncjjtf8lYUIoxo9FAIq77YieMN/3Onf8C\ntvOjsBy/luYNDrhrbvaZSQNVQwe8gfJiaTQyb8yKc7bwhPTBt3hYLEUKvaFNKCrC\nViEGh1kUJAwKvwuiscHfxB6cutELxlJ+w5WMJWDG5zo6VZD4rZek\n-----END RSA PRIVATE KEY-----'
private_key2 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtXBq0fY8n/cJSIM9kEIdKL//oTN9IrshIJxK16L3FLvybTEf\nyXO6NBi3kH+yDMLmBGbRgPs12rcH29N7LDZBm1yTAZgU9ktgUas246EA4oXGys9B\nOKFvCDyRDxD2vcjeDzGgsWr6nsN3qXq8KiPFXY8OtN2EKQdAyXMJfdkpamDYHgDA\noRnpdXr9io/LbNdj8+9rviFsvFAzVk2IWZ7vR3/9D6afqvAnyI8ZvZM6liALpxTW\nsTK46U4A2y4yj+M68kp8el9BjyofB6Hd4Mnmrx/0Lqw9FUieBMnEZi8PYCCgY1cY\nP1Gweqy6PSItWPBjVl/DD2AyEXnnZxJuAYxc4QIDAQABAoIBAB3C6OKz31Hl9bHd\nRTXqglny1H2esoIF6/Mrb+NbKehOw/9BNZOX1g1BmKqtJ4mMVqqWKvtbOYQ8zZ8z\nW1rvM2fGkZ6LUbTsvEnpKcHA4SJHC0qtIGeno0zYknrEL5UF49beLxurDp0INxKn\nvUG0SGWGV8U3KLyKIghpRD9OZcq6/TFYLun2UbpCEgLYgXHOd7vcYazXmTioYk9k\neDAdkn85BQJ32NwSg+yptf1mkZHBmuPYKS4aXyilQoAah+WeNQ7pT7d70irSD/OT\nTCYDWX6xTf5ozX60NFcLonma6cPAgJNXc1Ks/ySNyPtr96nylhDjkxmD4hwfAGRm\nM6COXqECgYEAzfLGeZyT15AP6R9N5D51WTk5WSo9Tj7fAf5KA7RUV5PxK7qIpDJ7\nRHxQe+CgIxMmDzNPYU+E6OUkYlF4l97o+a5KsD+M0wR6catUTPrBWGmbrrCYeqLv\nmXdOpkg8UwulShvBSS30DWPB3QX3wWaadzYgVHHBmBQKHxNZ+RbXggUCgYEA4YjI\noY4LMoHtq0hJR0lwDjLHRvykZDYOrNkpfNIdbT757WXEOD7jq6PvroGiMlGCwhLS\n0UwRCgC5MKzt8rRC60VGv5bl0x3Z22zlOEeKKbpgZCvynOFHwGo8pCj2/VOF2uEj\nDrIaM0UYK1gaAwY89wuV+Oa0eL7f7xxEe2x+Gi0CgYEAqKtOlccA5ijcfwbeWjI1\nFY/iQf5wGycuqYlDwOjtspQ9jpzE0AVwI1TU7b+4J0HFh+lz97SSm9MfC07CP0+W\n6vYtwU8q3J/sUDALaMhtlSVZFacYGkhbhwrJZTIABduh0aINmQuDt3ueCJCcqs6H\nb17q9337Gbw/1deZdoGYmqkCgYEAkBeDD2ygDMnkHe2WG7x4oimhFeJt6TR8VcR8\n9CmN8XEt3pWJMuJDNTMM+/IIvZtELlg2Zs/xhvGFX+rsL4cpxgTBucBf320P9lfx\nbu6OADD6SqWlYMOxwuZdDgi6HImTWI9EhawWfzEiyvaDz/DZXIEDdT14ijhw++SU\ngEKFopUCgYAvOKyNBzPO5tGuCMClvpn/nqp5qBrqAsGutN1r5bu0CPZmgkoR0uht\nAhvIW2hNdyZqfji2xUVIx8j3ilQMdgRNFlS6JuAAoeXMJXS3rS6x40SdTLfKxnuR\nHkl6Gyya62m9d801x2ihKncn0GSASLypwt/dmVlXKRJnpyba63g7JQ==\n-----END RSA PRIVATE KEY-----'
private_key3 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtpSRhhD9eYrkuDdaSpNja0cW+BFQGFvFad/0jHjMMhm4C5N1\nbsxS2F8fYEDZLm7w7JyaUnIRTnBRkuMJaXp13cX2xGrTFKQi04goDAomFQ1jdWCa\nlikaxfYRN+2eVNoRBSNJT0NB8lQ7lkW9TX/fFBrUnBcCvFjL1jS23x9BPjMpj7M+\nnwyblg3BrKkTZgo8gL1NECocan6THVw+b/g9JVGY4Gtiz+sMwFhKrtyYv0H3T1M4\ny7K/2XyBSjPMt9tVLVVR22fOgNCpPs5bmygxVn+I4LXhCM1enJZ6ElJQYirrSvCJ\nuQx6ccz9V/kpXBfiTApnOPdHyXlCusdntpEbDQIDAQABAoIBAEZhaONkQ0GJ//bf\nJ4gd3rIo2jrP+a8aGTRh51QK8LPTZDXaJueKDdloeaDR/qY+j9K132sum2tAMsHL\nkQI++ZZ+zEwU3b9UMjSWhNF3TAzLd250ycJen/p1i1ei2mjdEriHTKgoRhCS1dFs\nmrd4Nlb6rMBqwlw2YoT1FxVVaAIAcP6RFa0vpk2uRY4DmzHQ9edmaNMb6ELesPrJ\nq6OOHP1IU5Zqf/ex7l536m76XyPlv7/wR7IhY0jnGXrAt/AIi3NQyJf4S7Nibh7n\n9NHt+z3fmIFq+Ujqon4q4kbSFkb6KD5/5HdHHVDAZJdvQcU1kzsGIKxI7QPmlbru\nETVQfgUCgYEAv62LO1Mv9K6dpuWr3WC2UNDiGlBtQB7dqPIh5KcvXBjXF2apK1Wd\nBTVJqUYB9H5HrUKPOkhMoTLndg+1QmFFF2Uux8bQxqNIhcpH3JJuzN6ClaQve5wg\nqH0ARMaYTg3lOan/XT68e/H0ouGFNaF3HN82arG5XpujHif19zCYE6sCgYEA89l7\nNzotA9WGwBc0FMycECnb8iIYXxl9L5aA7O3YU7bZH2MPGEuZ22XnvVFq4RJdfRhO\npzW8VzEu0wzpisQvT7/wq9EnQKf5t/eCRfv1R3K4agUcV9OcSooDlWTQLhMMns3n\nD5sjiG0pf4W0ik57HGykXM/H378iGK6LjujWVCcCgYAlSBD7sfty4P/C9YsPHP95\nCpffvGLzhM1iTe4vtiDtDdvQLmSbDCTlXW79YKOCtYkldvu6v1NAS1Ff0kBUL+0r\nVr/ZlZ8H87xoYWbGzSiF6oWFq5Ccv0pO2zlRJzt6exNputnzff9VMEN/5tNtEgHD\n+NpxuC2w7B62/9jEgowhzwKBgQCNZriHjumZhpFMBGiEAx4gVVWgc9r0EoDAPqLm\nQQmniakgBT40lWpTiiU2Z+b1OsQRjS3W0lczrGZ9pcgrWpYgxamWyILdgEpTPmhB\nkthppQGBIRONbjz8EEoBsGLzxMIVuEpbh1e0fbCJrQvDA71p/ynUU/yQJ3JrI5Pz\nu9rFEwKBgQCeSeAF8pOImhQPHmmXPIBx6Q70YY206JDjpubGsmcjxc94bQLjFcyC\nSl9QYZxVOQOAgNJ+mi+DjVJpI4SIcnhq3gbyQSFVQQiMfzlzskwQ5tFirS8fZkfJ\ng1sPzjCDU8ib4G76k5OELC9ctR3ny5zNEnrA31NcEgjenpGsD1fU9w==\n-----END RSA PRIVATE KEY-----'
```

RSA MORE COMPLEXITY :

```python
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
import base64

# Création de 3 paires de clés RSA
key1 = RSA.generate(2048)
key2 = RSA.generate(2048)
key3 = RSA.generate(2048)

# Message à chiffrer
message = b"Je montrerai a ces gens ce que vous ne voulez pas qu'ils voient. Je leur ferai voir un monde sans vous, un monde sans loi ni controle, sans limite ni frontieres, un monde ou tout est possible. Ce que nous en ferons ne dependra que de vous."

# Division du message en blocs de 128 octets
block_size = 128
blocks = [message[i:i+block_size] for i in range(0, len(message), block_size)]

# Chiffrement de chaque bloc avec une clé publique différente
ciphertexts = []
for i, block in enumerate(blocks):
    if i % 3 == 0:
        cipher = PKCS1_OAEP.new(key1.publickey())
    elif i % 3 == 1:
        cipher = PKCS1_OAEP.new(key2.publickey())
    else:
        cipher = PKCS1_OAEP.new(key3.publickey())
    ciphertext = cipher.encrypt(block)
    ciphertexts.append(ciphertext)
print("Messages chiffrés : ", ciphertexts)


# Conversion des blocs chiffrés en base64 pour faciliter la transmission
ciphertexts_b64 = [base64.urlsafe_b64encode(ciphertext).decode('utf-8') for ciphertext in ciphertexts]

# Transmission des blocs chiffrés
# ...

# Déchiffrement du message
decrypted_blocks = []
for i, ciphertext_b64 in enumerate(ciphertexts_b64):
    ciphertext = base64.urlsafe_b64decode(ciphertext_b64)
    if i % 3 == 0:
        cipher = PKCS1_OAEP.new(key1)
    elif i % 3 == 1:
        cipher = PKCS1_OAEP.new(key2)
    else:
        cipher = PKCS1_OAEP.new(key3)
    decrypted_block = cipher.decrypt(ciphertext)
    decrypted_blocks.append(decrypted_block)

# Assemblage des blocs déchiffrés
decrypted_message = b"".join(decrypted_blocks)

print("\n\nMessages déchiffrés : ",decrypted_message)

#Messages chiffrés :  [b"J\x84\x9c\x97p|\xde\xf8|e\xffb5,\x1c\x80\xa0\x99\x8a2\xa8I\x9c\xdc\xc6\xcc\xcfo\xe5x\x98js\xdb\xfa\x8cY7\x8f\xddkm'dA\xa4\xc4~\xbb\xed\x11\xaf&D\xda\x94\xf5\xa9\x0b6\x99\x86\x0f\x86\xc9i}Cf\xee\xa4\xa5q\x87^\xef\x8e\xce\x00^\x06n]\x1f\xcf\xcb\x8aGi\xafO\xb2\x82\xcd\x85\x08I\xa6,\xdf\x94\x95_\xbb\x01\xa0\xfc\xfa\xd2\xd4\xc44\xbd%\nD\xb6qP\xe3T\nw\x95I\xf0\xaa\xd6>HX\x14\xc5\x99\x8dC\xda<D{!\x02\xca\xbe\xba\xe6\x84@g\x93\x1e\x9f\xb9\xe7\x99m\xec\xf7B\xd4wI\x12\xd8nE\xa0\xb8\xeb\xc9\x88\xa5\x0c\xfd\x1e\xa1MB\xec\x03O\x8a\x8e\x0e\xc9\x0e\xe4\xd7\xf1\x0f\x1d\r\xa0k\xc3\xbc}0\xe0\xc9\x12\xe1Q\xe0\xb9\x02\x8b2\xb7\xbe\xe0\xf4\x87\x1e\xe9Zw\\\xaa\x01\xbe5%\xb3K\xfd\xf2v\x02\xa8\xe8\xe9\xd1\x80\xdc\x12,n\xefH\xb0$D\x12-\xda\xbc\x96\xb8\x95\x03<\x8d)\x87\x97", b"\x8e\xe6\x7f\x87\x00\x18\xe3\xfe\x9cB\x82\xe8\r\xd4~\xd8\x9f\xc2\x92\x1b\xe98{\xd4 7\x12\x1f\xeb\xb4#\xf3\xef\x0b\xaf\xa90\x95\xba\xbe+;4\x98\x1f\t\x0c\x883\x87L\xdf\xe8\xb8@\xb1\xf7\x89Vx\\6\x00\xb7\x01\x18\x8c\xe4q\xf43b\x0f\xbf\x8d\xba\x84b\x1e\x15X\x038c\x7f\x11\x88\xe2b\x99\x0f\xfa\xbd\xcf\x0e\xb7\x13$b\xa4\x15\xd5]\x0bpa\xf0\x1b\xc2\x94c\xd3'\\\xf6\xf5\xcd\xfe\x1e\x8ei\x9e\x83\xbb\x9f9\xbf\xbb\x9c\x05\xa6\xc1LE\x1a\xac=f)\x8a\xc7\x9a\xef\xf2i\xa1\x90\x96\x93\xe6\x9a\xaa\xc1\x99)yX\x1b\x9c\xe9\xf0\xfb\xd9\x13e\xfc}2\xdf67\xa6\xee\xdb\x91(\x11\x9e o\x83u-I'\xc3b\xe4\xf3\xd4c\x122-\x9cG\x08AT\xd0\x92K\x1b\x11.\x8b\x04\x9f/V(\xb4\xb4\xc1\xf8\x90\xfb\xbb\xca\x0c\xca\xf6\xde\xdf\xa0=e\x85\xb6=pE\x9d\xd5\xf7\x9f\xfb\x04p\xc1\xa1\xb1\xd2\xb8\xa7\x07\xaas<'O@||\x01\t"]


#Messages déchiffrés :  b"Je montrerai a ces gens ce que vous ne voulez pas qu'ils voient. Je leur ferai voir un monde sans vous, un monde sans loi ni controle, sans limite ni frontieres, un monde ou tout est possible. Ce que nous en ferons ne dependra que de vous."
```

Les clé privées :

```python
private_key1 = key1.export_key()
private_key2 = key2.export_key()
private_key3 = key3.export_key()
print("\n\n\nprivate_key1 = ", private_key1)
print("\n\n\nprivate_key2 = ", private_key2)
print("\n\n\nprivate_key3 = ", private_key3)

private_key1 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAsa2YMSIgppL2BaZ0wmZSg3W6OV1QKJ4WijFSUsQmCtLYMfy8\n/WNqvAtYoc0doIKu3ZTO5/gRR5fNbByBiOeaimIvulQ6roEJ+mb5Z8xvD9duXdYD\n2KCeB7KskAZSvw2D93xR6aLkUDowSgxGDpfEYxJJGD1QD+HRMOwHyEc7sAhL7pEp\n8h6jddOmANpS0pYIVRcVrOXEKqhOfe+n9zcR49nC9Ytkm+2nY6mSeOKyBRAUny0N\nqgQdEZAbvfLDBGf5rBtfw7lTlpQmhp02nrB0YWjaVgJOA2YwaG6j2g6xqIxL8XsU\nRbQ2X4iCyDE1fNJNlZ5T+Dl1AUf8Bunn3uoZ+QIDAQABAoIBAA3/suOAIFlvb8HP\nNRjR7gNchbEaWIPyvKzjqOxLdwHYTd9WXd+K8zBgpnmNCx4H3dYocMrXASmGXNF9\nR3ltYgAwLzl7hGoWUZ5weYsDkOaLHy92erQZJ4pMugrY7LEP1AtuOJfzVRC7HO3g\nnK5up7L0kFzAC+xMaupzVkOh1SKPyv4Rz7HU3CFXxwxBJF0GGZlbqEZgg8nDQJfF\nWpCDaU2xr85iOQUtfW/B0br4/uQb/XsRpdITiO9HSJntazdn6/PqkmIs4rqeUeyT\ns6bfw4JWiq74jGugos9zPYSTfHIcEZKngJMIWl7giIofyONJJCzPKuyqMgcotsn1\nkRzEYMECgYEAwEZCvksTsC6FUXr5MdfsLYeTfiVBwTg4HKtrm9DwssRgAd4SWJPt\nn5UiaTnwWvs9fol91U43pLVDFFwecYigZKt8SyXReywMPfFyYvSoxaV3V9FQM2Hd\narsYdx952zBYYpUl3FcSVbDIlwB93FFFbPLFhpwJa47iYbhly5FlYekCgYEA7JDj\n3NVyICl9KakYgKIXw8aJFqxD2GUJn5BUrt+mr/sPe24V5OslD2ejq2aGKnY7g+lB\naJzHY0YnNMks4jZv1alDK+G9qJjidkivkAjz6ArLwSkWYeqip8bd/1LjHx9bXgIr\nj5xJHJZP5uOF4k0wJHAC+21WATL/mNXl5rEMXZECgYAFFZaMO6YAoapK1kqio8gO\nCCjBTDDp8BejwnCtBSBoScMUKZAooXjGIIZxa+PMNBqTLwWRz2ivRU/JyQnRDMDZ\nCKPXxN8+N5L3TFwu+7M+zrpSKynIwgy91sa117I8NpIPwUvoALFubKdRPuUVH10L\nnXvVrGifXH7mAJ9Ie8bHiQKBgQDCCI19Qm1bR+xrUVDRoSIQ6DTlLeJwCV99SyrK\nTJMx4KDwQnkezGgXXJB4M510Eon6RkXqAj3ghVf/CcsQuEm+XBjGU1/2e3+0OSYW\n4+D6wHAjPQoowgUrzAemNlwn2NZeIzWLk0q8ceWToabc2SbVnDI1+5YBYc0XlMn/\nD9TuoQKBgQCqGPbWlM4EcZgoJzsDjk5qaw5OxeA54bylwZBMxDfWb5+7hWVDfGLh\nXLhl7WN7ZDrvr8w9UtLjnl7lKZLOcCohYSpaj43akR5Qq0yjWOV5T0GR62//k7+U\n/OOLMdzn2xxbS+xJRozRFAyR1fcC83xxz1CVmq515Ni85mDE7b8J7g==\n-----END RSA PRIVATE KEY-----'



private_key2 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEAqprEuKOzfE4xseawDghFIFMJbil2Ix6nW75GRxipWfa/9ieO\nIp0jMxZIQp0qkPqNbu2xJPUe/sbJGj1oRo9Xl/osYMzXBpV6H+Bv5ZuN7frXCWQT\n1XwTnlcnksDcA7IYoFaM6N9LiY8hLy7HyRcxmAcl0WuiKmTEbuKC/F/DyvKfr+Em\nPOt1vYLFNxbSTuBvCHZH9Kdu9uE4LlcLHuIbTqTl717RpOJL6te7Z1YMSwTvbCAW\nwff+l9FDHsR6TBG1WVx5bW2+YQ12R3nPw5UvuVl10iUH9y5UJl+spaRWGqO6bV4A\nEj/mNgo0oR31zGKZaTfThkoVgVT2IOeBo25WHwIDAQABAoIBADGL2x/oYuLx7prE\n7VJV8oVtuCpnHika6O3K96wELIK1F5DMcgn5atSWXwwBivAp49NYcn7SNVs2rgbR\n2KvNS1oWzLacJsKBvMLvMnATWgfINpVCnEP+0c/Fbfe/zOXB3kcKe8fRuaVMjQ2f\n32O2Oa/2O3RzdtgrBaVSYUocIceZbpLqwjbUexmfcljkw1vWM88hvcKVU6nC4SeF\nSm4e2PjdnqidPUgcjfCy/J24Px7OXGSHEUMnSpdGdRLuDbTF1iy+xfOycGYNKA74\nFDJv1MH5LUluQTrLbuOS+ap6RPI7JMkh60d/w0pVRxp5i60JSd0Y9PW58CKDtPlR\nKubQNnkCgYEAuHACQFC07MfIYaBjsSpwFLS9vxdu5fJiEA9DLEmNrmqMXlBV+ZKj\nNlKQa8zPU6LMkbgO1CiaMFsc3L1WlkrPsOqaBWaS5AQIUXZKkoZN0cvi6p0fn/dD\nPwZLlwo4PiuAY+3iDY0ny1Rav6DxsaDCRyMZWlL9svo9SlqQYWXKU1sCgYEA7My+\nskCJhkFFbOe5FaXPW3POT+k+h9+DtD3Rrpu+xpvHZ2CuIu5ZhukP6xRxG9o/uH6c\nEgAGeeHthMzNLXkQ6TAb0j1uWRJ/cjVmqm+D7lwbNmvrBXLQw7Xc8sPCuKikyJfm\nhaycUxNj37Ekvts/YuE+eJKOEI4rYfIUMbaH140CgYBHyqG1szSZrjJbffkQLzqt\ndKUfStnJ/A0bvzUgegkCSUsWMyMkIGYTcRPyQii5n3cNiZ2MC7no9K5JZhHcMoah\nkNAfJgwrYT5zpx3j5w9HiJttQ3fZ5n9wetzVkA7QdFJnk2MYb0d8J/ui99zcjXzR\n/+GQfRlvn2RYGuR0ZRDaXQKBgQC/rJtPPd4TxhGkLY0rcKN/qyV8mZf783hwFPn9\nFCRALyghDajmrXfaNBymdE159hdOB23dRBf54F6Z+Ay8mhqOJlreusrvXoG6uG75\n1no8HmIIkyIRrvY89KB8AOlE/30iwZHe8fE3baKSFplfw6hzKU+f2UEVNX74MTMX\namBaoQKBgBOsFpw1yapP2E6JrWtUKWd0tIiPppviCvQP+spECu80kXsqBzqlxtiA\nUAKZmOK0F8h+4B0pzuj5bSyDoANtDCiPjOBn30PaWiBnsc8h2woAQR3hJYCJ1V+a\newQQ/x9lyugdDV2c98k8If9hBXkcwIeAYOvY2kePo24OWEA6ARiX\n-----END RSA PRIVATE KEY-----'



private_key3 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAlZukU/sHfB0yCbeT2GPZ1UrtkOVMnuTQZBfXATMXq4cfLoMw\no8OVyh99QaSWEHLNCWhzH0HboOKTfYSEYf/rYlqvBENAJYOJNGnJnb1JmC0pgJlH\nNnS/dTBTNn8yWlFXaq6NSaEPCFvcJMcnZfdMvckynZFxz+GF73yqw7CZdq12TMmt\n2q/kZRP5e2/GpI/XyZHMPUxMR+mJT7vQebzShSYSMQQv1kPO4z2rwgw06vlhgAJ9\nGARZxgp3YjsUhsJSLIjd6AxV491w1q8EWoqA83QCKWRx261NvzhlA+xQnof2vUAo\ntbQeA/f4LqhNjKvYliIXMX7REhHrPT2Z1CKbxwIDAQABAoIBADv/tnCDrSXGY6nn\n+KAAs3zJ1uqUOx1CMJzjvrNZdTWyM/woWtpidvEfndE0m4YvNDGAtSKk+9rS40mk\nWp8ezpycN7Ji8hfZX64oetYK8rfX7NwJHLknKx1pawXhDyWPl5pONJWBxRCaHniV\nciR/gERgqy7sBJPVIyy/d5CRg4pHO5+zN/cytpoVyLQZj/SiFFqgksCGRe33ju3G\nbahI6l2Bs7VuQonA7mkxdXnBo5S2OkxxYYDWnYLCwCXZtlh1B7eHkzfFgINjoGZC\n+/QiqdvtIBH+Ces45vSEWUH5qBYCkRY2+ipvlAJti7GuuivRZ4hTyQc1nwowSkBJ\nxs0YG4kCgYEAu/MoiuvDIkJZApkGBlY8eB6AKncaKTiRGctTRzKg12xuTc50jpyH\n9pfRD9zMHXkTs2PXKPv9N89dYrtPj7flg8Lot5bz6RcgB6hJd3dI+3nzBKma8AsD\nO/nquN5gRm2Iw6CXEhsU2UxOrwLQX5m93telvTZ9uQ0NvNl/j+rf940CgYEAy8af\ng1tJd4c3LrJQTzYaA6B2a05wzPHvayGDZTP+WtGJSPxlpm03LsGwtJqoxnjEDpvY\nmKsNBaU1AVJeAx3SeGbYyAJoVw0U9Q93z53BCg+057qT2XvH4dra+YxiXHW3h+Hq\nyCSm8HcWqBiuNsLJyZxm4/gTbpx7Yu6Y8ok+MaMCgYEAthl0uYyNxn60EPFERhV9\nhwA+O2akITYeV/iI2l2yOqZjBN24TohYr1IOi6jo1tF9hfyA9cOYZl9yYnuLLXsG\nU7Afm+kUr0zpiqHBdI9NVeGk1GqjpFl3K8ALbEyAyRvNO4U3eaJlg9gMEELQsx+Z\nN/SGL5pBG28LVWMB1eXCU+0CgYAyFcOnGYzZIBbkF1e94GJMeeghP8ph1SUvg7Ez\n8q+VyuKfWcnyOe3SRDEWct0AyzYFETEPdRtiQ9TfWktZIL9WcJDfuBfFLaX1BbRB\nB1knC+0+95DXZ6EdVhl0NJkIeLZ/Y3u9baTKfbrH3ikTtJS8RQDVD2hXS4bYLiTR\nmAH9WQKBgQCugCfFhBnIzbAT0rKMvP6EwHRTM8mg5WNDV9gCYHum2xS12klQeRuX\nnQEr3spgNpSSnnLv3MWCsiNI3tnvRf37wKa8Zlyt4HAA8Muni9CyqnIaYIHCSmgu\njmoUL92lM1l2ZAKV0jBpaPstb0WhojhStch6nY02uiCtK1oENMQmTQ==\n-----END RSA PRIVATE KEY-----'
```

Blocs chiffré + clé publiques + clé privées :

```python
Messages chiffrés :  [b'?/\x08A\xb5\x9c\xfd$\x12z|\xac<<\x85\xb6\xb8\xf37e\xb7\xf2\x91\xdd\x1b\xba\x15~^S84\x856"\x90\xe2Q\xd6\x83\'\xcd\x05G\x16m<%\x0b\xbaa\xbd-\x9d\x82"\xbe\x80\x92\xd5\xef\xabx\xca\x19E2_\xd8j\'\xc4ya\xafr\x16|m\xf1\xc7\xf0\x0e~\xd9DO.\x1f\ng+\xe1\xc3wy\x03{#X\x95\x1a\xc2\x185|\xc84\n\xd2*\x9b\x8a\xc2\xd4\x94\x86Y!\xff!\x0b\x06\xd7\xf8\x1c\xa8\xe9`\x9e=\xef\xc9N\x89\x99\xac\'\x94~\xd9\xe6\x11\x84i\xdd\xd7\xaar\x82,\xf2\x91gfG`\x9f\xb4\n6e\xf0\xf5$\xca$V$\x8e`Ee\xack\xfa\x1bNs\x97\x98\xca\xfd\x10U\x89\xd7\xbb\xb1\x8b\xfe\xc9*m@?\x18:\xbf\xfa\xba\x9e\xf6\x84&\xef\xe7\x07H\n\x0c\x15r\xb9\xa0a\x0c~\xe3\xbe\x9df-]\x1a\x91\xd4\x01N< \xda +~\xd1\xc4\x0fz\x9em\x12\xfdF\xefGh\x00>(%\xdfy\xb7Vj', b"\x80\x17P\xc2\xe1^\x13\x95\xa6s:\xd2\x10\x0e\x18i\x90\xad\xb5\xef&\xe5\x7f\xd3<\x86\xf7GA\x8c\xcd6\xbf!c\xb0\x08\x07\xca\xfa,e\xaf\x1d\x97\x95\xec\x90[\xf3\xbbA\x99\xa0\xdf\x99\xc6PC\x97u\x19\x1e\t\xd0B\x95\xcfA\x1f\x8bG\x9ba\xdce\x0b\x1f\xb0s\xe4\xc5\xb4K\xf3J\x80\\\xe6\x11'4\x94J\xea\xbc\x99c\x05?\xd9\x92R:\xc1\xc7=\x06\xa0\xb0\xbeX\x8f\xcazn!Y\xebt\xadw3\xd4\xcb\xb6\xc1 $\xd6\xc2\xfe\xf1\x15\xf3\xc7\x19Q0\xbb0p\x8b\xeb:e<\xbd]\\\x82\xd18\xca\xed.\xd1\xc6\xf6B\xc1v\xfd|)C\xbb\x7f\xa7W\x89\xc6\xea\x8cQ#\x98t\xd95\x99\xbb\xc6A\x8cW\xdd\xe9\x1fW\x92\xe6(\x91o\xad\xdb\xa4\x83\xce\xa4\x82\xf4o\xacd\x1d^\x8cc\xf0`\x82\x9d\xb9o\xda\x01B|\x16'u\xc6\x0cQ\xfb \x9a\xca\xf3tW\ne\xb5\xc9PMWEnR.\x9d\xa5\xa3\xc5\xa5\x06\xba&C\xf3\xf6)"]


Messages déchiffrés :  b"Je montrerai a ces gens ce que vous ne voulez pas qu'ils voient. Je leur ferai voir un monde sans vous, un monde sans loi ni controle, sans limite ni frontieres, un monde ou tout est possible. Ce que nous en ferons ne dependra que de vous."



private_key1 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEA3d/315v2vyNRuXbgMpws/BDli5H4onQwf67/X0Jsek0wdcvY\n066Dp2eZt6ePgAHzCrwdtlP7+TSOvUFxA4yn4Xg4/9s+8z3/pgFK6AqlRnDlwf0h\nv3NWNqHfZhlFcP3AM7RqHG9stK97UEb98c7xIO0oOPIOvaftEf7dqLH6VUFvbITV\n84x/K2SUYemmYJ0MfVCpx8LCMHMIgVc8zFmmchmkwhoqB5CgKuvZlnmyO7sQWeV5\nuf8VGYrdl2dsIsrxxu2buHwBzttm/5H6B6mWxVNy+9D0OafJd9bqRQk0dgaoAnP5\n33wWUZfsVKx2UrABO+i6OBtdTaPb8/nAOb5K8QIDAQABAoIBAAKGPnn+rW4rmKdk\nZbTsGt64uLF5SD727sKHiyKT4HHJLr43j8bwYx4uOyBAQPOrC5wcm4NVzZXebHch\n4O2/D0qGlUvWvE7E4fbLG6vr5RYAVlWtWHgAaxbYVopnl4C4QZQ4OJ9ys0xGyKXw\n7NY87V7oLw84zjfUfe/4umzL+5k2AQHWQLohT5Ir1zf2NcB7gt3Hi52F3jRABn8/\nCT7ryWurcPHOJ5ETujkXdbho4ftcJfteLCp4WYdrHMwK7DHA+ONDHPOyJI+sYVdR\njazbOhUM1QwSQURLWlHWJFDVezZkOzEp3GQ8xl8xjOCIDRZk/61jFgOKQgs3jaUk\nix2aQY0CgYEA6KgcITc218LFo4QjHgpN79i7iVgE4BE61hhb5g7FpQQQ3qVYKlpF\nsjfBQNPvsYy5AHkS3J8DlPSS/ENdVfe2s+XnEBn6S3vjAN7Up9n8U8IpTweH1VzE\ng79Wu+oL0JtyrnkXm04gLZfVSC0UWbeyEQZHIMyF3QsJuul9ahT0PN0CgYEA9CLs\nPvsvLx0nc0KZo2Bl9ebkQ8rq1RYprN3WjekMjLtHPKV4UFAiMaoCgmuBViyIyQ/b\nTi13EDtFKEHjUAJoFaEquhosjFASeC/qlyqI348iEsChuDWCo4mvNz0aund/KGKQ\namnAObFBY7xu0gltUo9JMWJKIS9cFg5RVQvkCyUCgYEAiEGcZ9+cYPSTJ1bF8lv6\nlROLkb5Y7JlqqeSOPcg8/I3LC3oujm9cDioVJlB5OrS9zIccAtWmFWC/jLovOZ/g\nArAMiSONsROXOPVH+h3yZ2N5Ke2xIcY42SgANgG2da/0lDYbGzvAILOhl6m/F2Q8\nBzh0A8OESpaiVjNU3gHzoIkCgYBEIDqsmItiKlCH6V3WKWBKblPkVwuQys52XrEw\niIfn/ZqzYblhL/tawIZSvo0o7uR8tuALwMQo02FJCpnUCdfhsUerBwLHZNDCmRxt\ncoEfYWGwufBm5we9ev5Z+8MppY7mRhrmlvv9HWmR21NRaTAIidNy5GqrN/wKa5Rm\nlxrbwQKBgHKF534Wb+wcbX5vXA4cYe9ncjjtf8lYUIoxo9FAIq77YieMN/3Onf8C\ntvOjsBy/luYNDrhrbvaZSQNVQwe8gfJiaTQyb8yKc7bwhPTBt3hYLEUKvaFNKCrC\nViEGh1kUJAwKvwuiscHfxB6cutELxlJ+w5WMJWDG5zo6VZD4rZek\n-----END RSA PRIVATE KEY-----'



private_key2 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtXBq0fY8n/cJSIM9kEIdKL//oTN9IrshIJxK16L3FLvybTEf\nyXO6NBi3kH+yDMLmBGbRgPs12rcH29N7LDZBm1yTAZgU9ktgUas246EA4oXGys9B\nOKFvCDyRDxD2vcjeDzGgsWr6nsN3qXq8KiPFXY8OtN2EKQdAyXMJfdkpamDYHgDA\noRnpdXr9io/LbNdj8+9rviFsvFAzVk2IWZ7vR3/9D6afqvAnyI8ZvZM6liALpxTW\nsTK46U4A2y4yj+M68kp8el9BjyofB6Hd4Mnmrx/0Lqw9FUieBMnEZi8PYCCgY1cY\nP1Gweqy6PSItWPBjVl/DD2AyEXnnZxJuAYxc4QIDAQABAoIBAB3C6OKz31Hl9bHd\nRTXqglny1H2esoIF6/Mrb+NbKehOw/9BNZOX1g1BmKqtJ4mMVqqWKvtbOYQ8zZ8z\nW1rvM2fGkZ6LUbTsvEnpKcHA4SJHC0qtIGeno0zYknrEL5UF49beLxurDp0INxKn\nvUG0SGWGV8U3KLyKIghpRD9OZcq6/TFYLun2UbpCEgLYgXHOd7vcYazXmTioYk9k\neDAdkn85BQJ32NwSg+yptf1mkZHBmuPYKS4aXyilQoAah+WeNQ7pT7d70irSD/OT\nTCYDWX6xTf5ozX60NFcLonma6cPAgJNXc1Ks/ySNyPtr96nylhDjkxmD4hwfAGRm\nM6COXqECgYEAzfLGeZyT15AP6R9N5D51WTk5WSo9Tj7fAf5KA7RUV5PxK7qIpDJ7\nRHxQe+CgIxMmDzNPYU+E6OUkYlF4l97o+a5KsD+M0wR6catUTPrBWGmbrrCYeqLv\nmXdOpkg8UwulShvBSS30DWPB3QX3wWaadzYgVHHBmBQKHxNZ+RbXggUCgYEA4YjI\noY4LMoHtq0hJR0lwDjLHRvykZDYOrNkpfNIdbT757WXEOD7jq6PvroGiMlGCwhLS\n0UwRCgC5MKzt8rRC60VGv5bl0x3Z22zlOEeKKbpgZCvynOFHwGo8pCj2/VOF2uEj\nDrIaM0UYK1gaAwY89wuV+Oa0eL7f7xxEe2x+Gi0CgYEAqKtOlccA5ijcfwbeWjI1\nFY/iQf5wGycuqYlDwOjtspQ9jpzE0AVwI1TU7b+4J0HFh+lz97SSm9MfC07CP0+W\n6vYtwU8q3J/sUDALaMhtlSVZFacYGkhbhwrJZTIABduh0aINmQuDt3ueCJCcqs6H\nb17q9337Gbw/1deZdoGYmqkCgYEAkBeDD2ygDMnkHe2WG7x4oimhFeJt6TR8VcR8\n9CmN8XEt3pWJMuJDNTMM+/IIvZtELlg2Zs/xhvGFX+rsL4cpxgTBucBf320P9lfx\nbu6OADD6SqWlYMOxwuZdDgi6HImTWI9EhawWfzEiyvaDz/DZXIEDdT14ijhw++SU\ngEKFopUCgYAvOKyNBzPO5tGuCMClvpn/nqp5qBrqAsGutN1r5bu0CPZmgkoR0uht\nAhvIW2hNdyZqfji2xUVIx8j3ilQMdgRNFlS6JuAAoeXMJXS3rS6x40SdTLfKxnuR\nHkl6Gyya62m9d801x2ihKncn0GSASLypwt/dmVlXKRJnpyba63g7JQ==\n-----END RSA PRIVATE KEY-----'



private_key3 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtpSRhhD9eYrkuDdaSpNja0cW+BFQGFvFad/0jHjMMhm4C5N1\nbsxS2F8fYEDZLm7w7JyaUnIRTnBRkuMJaXp13cX2xGrTFKQi04goDAomFQ1jdWCa\nlikaxfYRN+2eVNoRBSNJT0NB8lQ7lkW9TX/fFBrUnBcCvFjL1jS23x9BPjMpj7M+\nnwyblg3BrKkTZgo8gL1NECocan6THVw+b/g9JVGY4Gtiz+sMwFhKrtyYv0H3T1M4\ny7K/2XyBSjPMt9tVLVVR22fOgNCpPs5bmygxVn+I4LXhCM1enJZ6ElJQYirrSvCJ\nuQx6ccz9V/kpXBfiTApnOPdHyXlCusdntpEbDQIDAQABAoIBAEZhaONkQ0GJ//bf\nJ4gd3rIo2jrP+a8aGTRh51QK8LPTZDXaJueKDdloeaDR/qY+j9K132sum2tAMsHL\nkQI++ZZ+zEwU3b9UMjSWhNF3TAzLd250ycJen/p1i1ei2mjdEriHTKgoRhCS1dFs\nmrd4Nlb6rMBqwlw2YoT1FxVVaAIAcP6RFa0vpk2uRY4DmzHQ9edmaNMb6ELesPrJ\nq6OOHP1IU5Zqf/ex7l536m76XyPlv7/wR7IhY0jnGXrAt/AIi3NQyJf4S7Nibh7n\n9NHt+z3fmIFq+Ujqon4q4kbSFkb6KD5/5HdHHVDAZJdvQcU1kzsGIKxI7QPmlbru\nETVQfgUCgYEAv62LO1Mv9K6dpuWr3WC2UNDiGlBtQB7dqPIh5KcvXBjXF2apK1Wd\nBTVJqUYB9H5HrUKPOkhMoTLndg+1QmFFF2Uux8bQxqNIhcpH3JJuzN6ClaQve5wg\nqH0ARMaYTg3lOan/XT68e/H0ouGFNaF3HN82arG5XpujHif19zCYE6sCgYEA89l7\nNzotA9WGwBc0FMycECnb8iIYXxl9L5aA7O3YU7bZH2MPGEuZ22XnvVFq4RJdfRhO\npzW8VzEu0wzpisQvT7/wq9EnQKf5t/eCRfv1R3K4agUcV9OcSooDlWTQLhMMns3n\nD5sjiG0pf4W0ik57HGykXM/H378iGK6LjujWVCcCgYAlSBD7sfty4P/C9YsPHP95\nCpffvGLzhM1iTe4vtiDtDdvQLmSbDCTlXW79YKOCtYkldvu6v1NAS1Ff0kBUL+0r\nVr/ZlZ8H87xoYWbGzSiF6oWFq5Ccv0pO2zlRJzt6exNputnzff9VMEN/5tNtEgHD\n+NpxuC2w7B62/9jEgowhzwKBgQCNZriHjumZhpFMBGiEAx4gVVWgc9r0EoDAPqLm\nQQmniakgBT40lWpTiiU2Z+b1OsQRjS3W0lczrGZ9pcgrWpYgxamWyILdgEpTPmhB\nkthppQGBIRONbjz8EEoBsGLzxMIVuEpbh1e0fbCJrQvDA71p/ynUU/yQJ3JrI5Pz\nu9rFEwKBgQCeSeAF8pOImhQPHmmXPIBx6Q70YY206JDjpubGsmcjxc94bQLjFcyC\nSl9QYZxVOQOAgNJ+mi+DjVJpI4SIcnhq3gbyQSFVQQiMfzlzskwQ5tFirS8fZkfJ\ng1sPzjCDU8ib4G76k5OELC9ctR3ny5zNEnrA31NcEgjenpGsD1fU9w==\n-----END RSA PRIVATE KEY-----'



Message chiffré 1: Py8IQbWc_SQSenysPDyFtrjzN2W38pHdG7oVfl5TODSFNiKQ4lHWgyfNBUcWbTwlC7phvS2dgiK-gJLV76t4yhlFMl_YaifEeWGvchZ8bfHH8A5-2URPLh8KZyvhw3d5A3sjWJUawhg1fMg0CtIqm4rC1JSGWSH_IQsG1_gcqOlgnj3vyU6JmawnlH7Z5hGEad3XqnKCLPKRZ2ZHYJ-0CjZl8PUkyiRWJI5gRWWsa_obTnOXmMr9EFWJ17uxi_7JKm1APxg6v_q6nvaEJu_nB0gKDBVyuaBhDH7jvp1mLV0akdQBTjwg2iArftHED3qebRL9Ru9HaAA-KCXfebdWag==



Message chiffré 2: gBdQwuFeE5WmczrSEA4YaZCtte8m5X_TPIb3R0GMzTa_IWOwCAfK-ixlrx2XleyQW_O7QZmg35nGUEOXdRkeCdBClc9BH4tHm2HcZQsfsHPkxbRL80qAXOYRJzSUSuq8mWMFP9mSUjrBxz0GoLC-WI_Kem4hWet0rXcz1Mu2wSAk1sL-8RXzxxlRMLswcIvrOmU8vV1cgtE4yu0u0cb2QsF2_XwpQ7t_p1eJxuqMUSOYdNk1mbvGQYxX3ekfV5LmKJFvrdukg86kgvRvrGQdXoxj8GCCnblv2gFCfBYndcYMUfsgmsrzdFcKZbXJUE1XRW5SLp2lo8WlBromQ_P2KQ==



Clé publique 1: 
-----BEGIN PUBLIC KEY-----
MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA3d/315v2vyNRuXbgMpws
/BDli5H4onQwf67/X0Jsek0wdcvY066Dp2eZt6ePgAHzCrwdtlP7+TSOvUFxA4yn
4Xg4/9s+8z3/pgFK6AqlRnDlwf0hv3NWNqHfZhlFcP3AM7RqHG9stK97UEb98c7x
IO0oOPIOvaftEf7dqLH6VUFvbITV84x/K2SUYemmYJ0MfVCpx8LCMHMIgVc8zFmm
chmkwhoqB5CgKuvZlnmyO7sQWeV5uf8VGYrdl2dsIsrxxu2buHwBzttm/5H6B6mW
xVNy+9D0OafJd9bqRQk0dgaoAnP533wWUZfsVKx2UrABO+i6OBtdTaPb8/nAOb5K
8QIDAQAB
-----END PUBLIC KEY-----



Clé publique 2: 
-----BEGIN PUBLIC KEY-----
MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAtXBq0fY8n/cJSIM9kEId
KL//oTN9IrshIJxK16L3FLvybTEfyXO6NBi3kH+yDMLmBGbRgPs12rcH29N7LDZB
m1yTAZgU9ktgUas246EA4oXGys9BOKFvCDyRDxD2vcjeDzGgsWr6nsN3qXq8KiPF
XY8OtN2EKQdAyXMJfdkpamDYHgDAoRnpdXr9io/LbNdj8+9rviFsvFAzVk2IWZ7v
R3/9D6afqvAnyI8ZvZM6liALpxTWsTK46U4A2y4yj+M68kp8el9BjyofB6Hd4Mnm
rx/0Lqw9FUieBMnEZi8PYCCgY1cYP1Gweqy6PSItWPBjVl/DD2AyEXnnZxJuAYxc
4QIDAQAB
-----END PUBLIC KEY-----



Clé publique 3: 
-----BEGIN PUBLIC KEY-----
MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAtpSRhhD9eYrkuDdaSpNj
a0cW+BFQGFvFad/0jHjMMhm4C5N1bsxS2F8fYEDZLm7w7JyaUnIRTnBRkuMJaXp1
3cX2xGrTFKQi04goDAomFQ1jdWCalikaxfYRN+2eVNoRBSNJT0NB8lQ7lkW9TX/f
FBrUnBcCvFjL1jS23x9BPjMpj7M+nwyblg3BrKkTZgo8gL1NECocan6THVw+b/g9
JVGY4Gtiz+sMwFhKrtyYv0H3T1M4y7K/2XyBSjPMt9tVLVVR22fOgNCpPs5bmygx
Vn+I4LXhCM1enJZ6ElJQYirrSvCJuQx6ccz9V/kpXBfiTApnOPdHyXlCusdntpEb
DQIDAQAB
-----END PUBLIC KEY-----
```

```markdown
Le joueur a besoin de:
    
    Les 2 blocs chiffrés du message en format base64, qui ont été transmis via un canal de communication.
    Les 3 clés privées correspondantes aux clés publiques utilisées pour chiffrer les blocs, qui ont été utilisées pour déchiffrer les blocs chiffrés.

Avec ces informations, le joueur peut déchiffrer les blocs un par un en utilisant les clés privées correspondantes, puis les assembler pour obtenir le message déchiffré. 

 Les 2 blocs chiffrés :
Message chiffré 1: Py8IQbWc_SQSenysPDyFtrjzN2W38pHdG7oVfl5TODSFNiKQ4lHWgyfNBUcWbTwlC7phvS2dgiK-gJLV76t4yhlFMl_YaifEeWGvchZ8bfHH8A5-2URPLh8KZyvhw3d5A3sjWJUawhg1fMg0CtIqm4rC1JSGWSH_IQsG1_gcqOlgnj3vyU6JmawnlH7Z5hGEad3XqnKCLPKRZ2ZHYJ-0CjZl8PUkyiRWJI5gRWWsa_obTnOXmMr9EFWJ17uxi_7JKm1APxg6v_q6nvaEJu_nB0gKDBVyuaBhDH7jvp1mLV0akdQBTjwg2iArftHED3qebRL9Ru9HaAA-KCXfebdWag==
Message chiffré 2: gBdQwuFeE5WmczrSEA4YaZCtte8m5X_TPIb3R0GMzTa_IWOwCAfK-ixlrx2XleyQW_O7QZmg35nGUEOXdRkeCdBClc9BH4tHm2HcZQsfsHPkxbRL80qAXOYRJzSUSuq8mWMFP9mSUjrBxz0GoLC-WI_Kem4hWet0rXcz1Mu2wSAk1sL-8RXzxxlRMLswcIvrOmU8vV1cgtE4yu0u0cb2QsF2_XwpQ7t_p1eJxuqMUSOYdNk1mbvGQYxX3ekfV5LmKJFvrdukg86kgvRvrGQdXoxj8GCCnblv2gFCfBYndcYMUfsgmsrzdFcKZbXJUE1XRW5SLp2lo8WlBromQ_P2KQ==

 Les 3 clés privées :
private_key1 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEA3d/315v2vyNRuXbgMpws/BDli5H4onQwf67/X0Jsek0wdcvY\n066Dp2eZt6ePgAHzCrwdtlP7+TSOvUFxA4yn4Xg4/9s+8z3/pgFK6AqlRnDlwf0h\nv3NWNqHfZhlFcP3AM7RqHG9stK97UEb98c7xIO0oOPIOvaftEf7dqLH6VUFvbITV\n84x/K2SUYemmYJ0MfVCpx8LCMHMIgVc8zFmmchmkwhoqB5CgKuvZlnmyO7sQWeV5\nuf8VGYrdl2dsIsrxxu2buHwBzttm/5H6B6mWxVNy+9D0OafJd9bqRQk0dgaoAnP5\n33wWUZfsVKx2UrABO+i6OBtdTaPb8/nAOb5K8QIDAQABAoIBAAKGPnn+rW4rmKdk\nZbTsGt64uLF5SD727sKHiyKT4HHJLr43j8bwYx4uOyBAQPOrC5wcm4NVzZXebHch\n4O2/D0qGlUvWvE7E4fbLG6vr5RYAVlWtWHgAaxbYVopnl4C4QZQ4OJ9ys0xGyKXw\n7NY87V7oLw84zjfUfe/4umzL+5k2AQHWQLohT5Ir1zf2NcB7gt3Hi52F3jRABn8/\nCT7ryWurcPHOJ5ETujkXdbho4ftcJfteLCp4WYdrHMwK7DHA+ONDHPOyJI+sYVdR\njazbOhUM1QwSQURLWlHWJFDVezZkOzEp3GQ8xl8xjOCIDRZk/61jFgOKQgs3jaUk\nix2aQY0CgYEA6KgcITc218LFo4QjHgpN79i7iVgE4BE61hhb5g7FpQQQ3qVYKlpF\nsjfBQNPvsYy5AHkS3J8DlPSS/ENdVfe2s+XnEBn6S3vjAN7Up9n8U8IpTweH1VzE\ng79Wu+oL0JtyrnkXm04gLZfVSC0UWbeyEQZHIMyF3QsJuul9ahT0PN0CgYEA9CLs\nPvsvLx0nc0KZo2Bl9ebkQ8rq1RYprN3WjekMjLtHPKV4UFAiMaoCgmuBViyIyQ/b\nTi13EDtFKEHjUAJoFaEquhosjFASeC/qlyqI348iEsChuDWCo4mvNz0aund/KGKQ\namnAObFBY7xu0gltUo9JMWJKIS9cFg5RVQvkCyUCgYEAiEGcZ9+cYPSTJ1bF8lv6\nlROLkb5Y7JlqqeSOPcg8/I3LC3oujm9cDioVJlB5OrS9zIccAtWmFWC/jLovOZ/g\nArAMiSONsROXOPVH+h3yZ2N5Ke2xIcY42SgANgG2da/0lDYbGzvAILOhl6m/F2Q8\nBzh0A8OESpaiVjNU3gHzoIkCgYBEIDqsmItiKlCH6V3WKWBKblPkVwuQys52XrEw\niIfn/ZqzYblhL/tawIZSvo0o7uR8tuALwMQo02FJCpnUCdfhsUerBwLHZNDCmRxt\ncoEfYWGwufBm5we9ev5Z+8MppY7mRhrmlvv9HWmR21NRaTAIidNy5GqrN/wKa5Rm\nlxrbwQKBgHKF534Wb+wcbX5vXA4cYe9ncjjtf8lYUIoxo9FAIq77YieMN/3Onf8C\ntvOjsBy/luYNDrhrbvaZSQNVQwe8gfJiaTQyb8yKc7bwhPTBt3hYLEUKvaFNKCrC\nViEGh1kUJAwKvwuiscHfxB6cutELxlJ+w5WMJWDG5zo6VZD4rZek\n-----END RSA PRIVATE KEY-----'
private_key2 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtXBq0fY8n/cJSIM9kEIdKL//oTN9IrshIJxK16L3FLvybTEf\nyXO6NBi3kH+yDMLmBGbRgPs12rcH29N7LDZBm1yTAZgU9ktgUas246EA4oXGys9B\nOKFvCDyRDxD2vcjeDzGgsWr6nsN3qXq8KiPFXY8OtN2EKQdAyXMJfdkpamDYHgDA\noRnpdXr9io/LbNdj8+9rviFsvFAzVk2IWZ7vR3/9D6afqvAnyI8ZvZM6liALpxTW\nsTK46U4A2y4yj+M68kp8el9BjyofB6Hd4Mnmrx/0Lqw9FUieBMnEZi8PYCCgY1cY\nP1Gweqy6PSItWPBjVl/DD2AyEXnnZxJuAYxc4QIDAQABAoIBAB3C6OKz31Hl9bHd\nRTXqglny1H2esoIF6/Mrb+NbKehOw/9BNZOX1g1BmKqtJ4mMVqqWKvtbOYQ8zZ8z\nW1rvM2fGkZ6LUbTsvEnpKcHA4SJHC0qtIGeno0zYknrEL5UF49beLxurDp0INxKn\nvUG0SGWGV8U3KLyKIghpRD9OZcq6/TFYLun2UbpCEgLYgXHOd7vcYazXmTioYk9k\neDAdkn85BQJ32NwSg+yptf1mkZHBmuPYKS4aXyilQoAah+WeNQ7pT7d70irSD/OT\nTCYDWX6xTf5ozX60NFcLonma6cPAgJNXc1Ks/ySNyPtr96nylhDjkxmD4hwfAGRm\nM6COXqECgYEAzfLGeZyT15AP6R9N5D51WTk5WSo9Tj7fAf5KA7RUV5PxK7qIpDJ7\nRHxQe+CgIxMmDzNPYU+E6OUkYlF4l97o+a5KsD+M0wR6catUTPrBWGmbrrCYeqLv\nmXdOpkg8UwulShvBSS30DWPB3QX3wWaadzYgVHHBmBQKHxNZ+RbXggUCgYEA4YjI\noY4LMoHtq0hJR0lwDjLHRvykZDYOrNkpfNIdbT757WXEOD7jq6PvroGiMlGCwhLS\n0UwRCgC5MKzt8rRC60VGv5bl0x3Z22zlOEeKKbpgZCvynOFHwGo8pCj2/VOF2uEj\nDrIaM0UYK1gaAwY89wuV+Oa0eL7f7xxEe2x+Gi0CgYEAqKtOlccA5ijcfwbeWjI1\nFY/iQf5wGycuqYlDwOjtspQ9jpzE0AVwI1TU7b+4J0HFh+lz97SSm9MfC07CP0+W\n6vYtwU8q3J/sUDALaMhtlSVZFacYGkhbhwrJZTIABduh0aINmQuDt3ueCJCcqs6H\nb17q9337Gbw/1deZdoGYmqkCgYEAkBeDD2ygDMnkHe2WG7x4oimhFeJt6TR8VcR8\n9CmN8XEt3pWJMuJDNTMM+/IIvZtELlg2Zs/xhvGFX+rsL4cpxgTBucBf320P9lfx\nbu6OADD6SqWlYMOxwuZdDgi6HImTWI9EhawWfzEiyvaDz/DZXIEDdT14ijhw++SU\ngEKFopUCgYAvOKyNBzPO5tGuCMClvpn/nqp5qBrqAsGutN1r5bu0CPZmgkoR0uht\nAhvIW2hNdyZqfji2xUVIx8j3ilQMdgRNFlS6JuAAoeXMJXS3rS6x40SdTLfKxnuR\nHkl6Gyya62m9d801x2ihKncn0GSASLypwt/dmVlXKRJnpyba63g7JQ==\n-----END RSA PRIVATE KEY-----'
private_key3 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtpSRhhD9eYrkuDdaSpNja0cW+BFQGFvFad/0jHjMMhm4C5N1\nbsxS2F8fYEDZLm7w7JyaUnIRTnBRkuMJaXp13cX2xGrTFKQi04goDAomFQ1jdWCa\nlikaxfYRN+2eVNoRBSNJT0NB8lQ7lkW9TX/fFBrUnBcCvFjL1jS23x9BPjMpj7M+\nnwyblg3BrKkTZgo8gL1NECocan6THVw+b/g9JVGY4Gtiz+sMwFhKrtyYv0H3T1M4\ny7K/2XyBSjPMt9tVLVVR22fOgNCpPs5bmygxVn+I4LXhCM1enJZ6ElJQYirrSvCJ\nuQx6ccz9V/kpXBfiTApnOPdHyXlCusdntpEbDQIDAQABAoIBAEZhaONkQ0GJ//bf\nJ4gd3rIo2jrP+a8aGTRh51QK8LPTZDXaJueKDdloeaDR/qY+j9K132sum2tAMsHL\nkQI++ZZ+zEwU3b9UMjSWhNF3TAzLd250ycJen/p1i1ei2mjdEriHTKgoRhCS1dFs\nmrd4Nlb6rMBqwlw2YoT1FxVVaAIAcP6RFa0vpk2uRY4DmzHQ9edmaNMb6ELesPrJ\nq6OOHP1IU5Zqf/ex7l536m76XyPlv7/wR7IhY0jnGXrAt/AIi3NQyJf4S7Nibh7n\n9NHt+z3fmIFq+Ujqon4q4kbSFkb6KD5/5HdHHVDAZJdvQcU1kzsGIKxI7QPmlbru\nETVQfgUCgYEAv62LO1Mv9K6dpuWr3WC2UNDiGlBtQB7dqPIh5KcvXBjXF2apK1Wd\nBTVJqUYB9H5HrUKPOkhMoTLndg+1QmFFF2Uux8bQxqNIhcpH3JJuzN6ClaQve5wg\nqH0ARMaYTg3lOan/XT68e/H0ouGFNaF3HN82arG5XpujHif19zCYE6sCgYEA89l7\nNzotA9WGwBc0FMycECnb8iIYXxl9L5aA7O3YU7bZH2MPGEuZ22XnvVFq4RJdfRhO\npzW8VzEu0wzpisQvT7/wq9EnQKf5t/eCRfv1R3K4agUcV9OcSooDlWTQLhMMns3n\nD5sjiG0pf4W0ik57HGykXM/H378iGK6LjujWVCcCgYAlSBD7sfty4P/C9YsPHP95\nCpffvGLzhM1iTe4vtiDtDdvQLmSbDCTlXW79YKOCtYkldvu6v1NAS1Ff0kBUL+0r\nVr/ZlZ8H87xoYWbGzSiF6oWFq5Ccv0pO2zlRJzt6exNputnzff9VMEN/5tNtEgHD\n+NpxuC2w7B62/9jEgowhzwKBgQCNZriHjumZhpFMBGiEAx4gVVWgc9r0EoDAPqLm\nQQmniakgBT40lWpTiiU2Z+b1OsQRjS3W0lczrGZ9pcgrWpYgxamWyILdgEpTPmhB\nkthppQGBIRONbjz8EEoBsGLzxMIVuEpbh1e0fbCJrQvDA71p/ynUU/yQJ3JrI5Pz\nu9rFEwKBgQCeSeAF8pOImhQPHmmXPIBx6Q70YY206JDjpubGsmcjxc94bQLjFcyC\nSl9QYZxVOQOAgNJ+mi+DjVJpI4SIcnhq3gbyQSFVQQiMfzlzskwQ5tFirS8fZkfJ\ng1sPzjCDU8ib4G76k5OELC9ctR3ny5zNEnrA31NcEgjenpGsD1fU9w==\n-----END RSA PRIVATE KEY-----'
```

Pour déchiffrer les blocs chiffrés, le joueur doit d'abord décoder les blocs au format base64 pour obtenir les blocs chiffrés en bytes. Ensuite, il peut utiliser chaque clé privée correspondant à chaque bloc pour les déchiffrer. Enfin, il doit assembler les deux blocs déchiffrés pour obtenir le message original.

Python(solve.py) :

```python
from Crypto.Cipher import PKCS1_OAEP
from Crypto.PublicKey import RSA
import base64

# Clés privées
key1 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEA3d/315v2vyNRuXbgMpws/BDli5H4onQwf67/X0Jsek0wdcvY\n066Dp2eZt6ePgAHzCrwdtlP7+TSOvUFxA4yn4Xg4/9s+8z3/pgFK6AqlRnDlwf0h\nv3NWNqHfZhlFcP3AM7RqHG9stK97UEb98c7xIO0oOPIOvaftEf7dqLH6VUFvbITV\n84x/K2SUYemmYJ0MfVCpx8LCMHMIgVc8zFmmchmkwhoqB5CgKuvZlnmyO7sQWeV5\nuf8VGYrdl2dsIsrxxu2buHwBzttm/5H6B6mWxVNy+9D0OafJd9bqRQk0dgaoAnP5\n33wWUZfsVKx2UrABO+i6OBtdTaPb8/nAOb5K8QIDAQABAoIBAAKGPnn+rW4rmKdk\nZbTsGt64uLF5SD727sKHiyKT4HHJLr43j8bwYx4uOyBAQPOrC5wcm4NVzZXebHch\n4O2/D0qGlUvWvE7E4fbLG6vr5RYAVlWtWHgAaxbYVopnl4C4QZQ4OJ9ys0xGyKXw\n7NY87V7oLw84zjfUfe/4umzL+5k2AQHWQLohT5Ir1zf2NcB7gt3Hi52F3jRABn8/\nCT7ryWurcPHOJ5ETujkXdbho4ftcJfteLCp4WYdrHMwK7DHA+ONDHPOyJI+sYVdR\njazbOhUM1QwSQURLWlHWJFDVezZkOzEp3GQ8xl8xjOCIDRZk/61jFgOKQgs3jaUk\nix2aQY0CgYEA6KgcITc218LFo4QjHgpN79i7iVgE4BE61hhb5g7FpQQQ3qVYKlpF\nsjfBQNPvsYy5AHkS3J8DlPSS/ENdVfe2s+XnEBn6S3vjAN7Up9n8U8IpTweH1VzE\ng79Wu+oL0JtyrnkXm04gLZfVSC0UWbeyEQZHIMyF3QsJuul9ahT0PN0CgYEA9CLs\nPvsvLx0nc0KZo2Bl9ebkQ8rq1RYprN3WjekMjLtHPKV4UFAiMaoCgmuBViyIyQ/b\nTi13EDtFKEHjUAJoFaEquhosjFASeC/qlyqI348iEsChuDWCo4mvNz0aund/KGKQ\namnAObFBY7xu0gltUo9JMWJKIS9cFg5RVQvkCyUCgYEAiEGcZ9+cYPSTJ1bF8lv6\nlROLkb5Y7JlqqeSOPcg8/I3LC3oujm9cDioVJlB5OrS9zIccAtWmFWC/jLovOZ/g\nArAMiSONsROXOPVH+h3yZ2N5Ke2xIcY42SgANgG2da/0lDYbGzvAILOhl6m/F2Q8\nBzh0A8OESpaiVjNU3gHzoIkCgYBEIDqsmItiKlCH6V3WKWBKblPkVwuQys52XrEw\niIfn/ZqzYblhL/tawIZSvo0o7uR8tuALwMQo02FJCpnUCdfhsUerBwLHZNDCmRxt\ncoEfYWGwufBm5we9ev5Z+8MppY7mRhrmlvv9HWmR21NRaTAIidNy5GqrN/wKa5Rm\nlxrbwQKBgHKF534Wb+wcbX5vXA4cYe9ncjjtf8lYUIoxo9FAIq77YieMN/3Onf8C\ntvOjsBy/luYNDrhrbvaZSQNVQwe8gfJiaTQyb8yKc7bwhPTBt3hYLEUKvaFNKCrC\nViEGh1kUJAwKvwuiscHfxB6cutELxlJ+w5WMJWDG5zo6VZD4rZek\n-----END RSA PRIVATE KEY-----'
key2 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtXBq0fY8n/cJSIM9kEIdKL//oTN9IrshIJxK16L3FLvybTEf\nyXO6NBi3kH+yDMLmBGbRgPs12rcH29N7LDZBm1yTAZgU9ktgUas246EA4oXGys9B\nOKFvCDyRDxD2vcjeDzGgsWr6nsN3qXq8KiPFXY8OtN2EKQdAyXMJfdkpamDYHgDA\noRnpdXr9io/LbNdj8+9rviFsvFAzVk2IWZ7vR3/9D6afqvAnyI8ZvZM6liALpxTW\nsTK46U4A2y4yj+M68kp8el9BjyofB6Hd4Mnmrx/0Lqw9FUieBMnEZi8PYCCgY1cY\nP1Gweqy6PSItWPBjVl/DD2AyEXnnZxJuAYxc4QIDAQABAoIBAB3C6OKz31Hl9bHd\nRTXqglny1H2esoIF6/Mrb+NbKehOw/9BNZOX1g1BmKqtJ4mMVqqWKvtbOYQ8zZ8z\nW1rvM2fGkZ6LUbTsvEnpKcHA4SJHC0qtIGeno0zYknrEL5UF49beLxurDp0INxKn\nvUG0SGWGV8U3KLyKIghpRD9OZcq6/TFYLun2UbpCEgLYgXHOd7vcYazXmTioYk9k\neDAdkn85BQJ32NwSg+yptf1mkZHBmuPYKS4aXyilQoAah+WeNQ7pT7d70irSD/OT\nTCYDWX6xTf5ozX60NFcLonma6cPAgJNXc1Ks/ySNyPtr96nylhDjkxmD4hwfAGRm\nM6COXqECgYEAzfLGeZyT15AP6R9N5D51WTk5WSo9Tj7fAf5KA7RUV5PxK7qIpDJ7\nRHxQe+CgIxMmDzNPYU+E6OUkYlF4l97o+a5KsD+M0wR6catUTPrBWGmbrrCYeqLv\nmXdOpkg8UwulShvBSS30DWPB3QX3wWaadzYgVHHBmBQKHxNZ+RbXggUCgYEA4YjI\noY4LMoHtq0hJR0lwDjLHRvykZDYOrNkpfNIdbT757WXEOD7jq6PvroGiMlGCwhLS\n0UwRCgC5MKzt8rRC60VGv5bl0x3Z22zlOEeKKbpgZCvynOFHwGo8pCj2/VOF2uEj\nDrIaM0UYK1gaAwY89wuV+Oa0eL7f7xxEe2x+Gi0CgYEAqKtOlccA5ijcfwbeWjI1\nFY/iQf5wGycuqYlDwOjtspQ9jpzE0AVwI1TU7b+4J0HFh+lz97SSm9MfC07CP0+W\n6vYtwU8q3J/sUDALaMhtlSVZFacYGkhbhwrJZTIABduh0aINmQuDt3ueCJCcqs6H\nb17q9337Gbw/1deZdoGYmqkCgYEAkBeDD2ygDMnkHe2WG7x4oimhFeJt6TR8VcR8\n9CmN8XEt3pWJMuJDNTMM+/IIvZtELlg2Zs/xhvGFX+rsL4cpxgTBucBf320P9lfx\nbu6OADD6SqWlYMOxwuZdDgi6HImTWI9EhawWfzEiyvaDz/DZXIEDdT14ijhw++SU\ngEKFopUCgYAvOKyNBzPO5tGuCMClvpn/nqp5qBrqAsGutN1r5bu0CPZmgkoR0uht\nAhvIW2hNdyZqfji2xUVIx8j3ilQMdgRNFlS6JuAAoeXMJXS3rS6x40SdTLfKxnuR\nHkl6Gyya62m9d801x2ihKncn0GSASLypwt/dmVlXKRJnpyba63g7JQ==\n-----END RSA PRIVATE KEY-----'
key3 =  b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAtpSRhhD9eYrkuDdaSpNja0cW+BFQGFvFad/0jHjMMhm4C5N1\nbsxS2F8fYEDZLm7w7JyaUnIRTnBRkuMJaXp13cX2xGrTFKQi04goDAomFQ1jdWCa\nlikaxfYRN+2eVNoRBSNJT0NB8lQ7lkW9TX/fFBrUnBcCvFjL1jS23x9BPjMpj7M+\nnwyblg3BrKkTZgo8gL1NECocan6THVw+b/g9JVGY4Gtiz+sMwFhKrtyYv0H3T1M4\ny7K/2XyBSjPMt9tVLVVR22fOgNCpPs5bmygxVn+I4LXhCM1enJZ6ElJQYirrSvCJ\nuQx6ccz9V/kpXBfiTApnOPdHyXlCusdntpEbDQIDAQABAoIBAEZhaONkQ0GJ//bf\nJ4gd3rIo2jrP+a8aGTRh51QK8LPTZDXaJueKDdloeaDR/qY+j9K132sum2tAMsHL\nkQI++ZZ+zEwU3b9UMjSWhNF3TAzLd250ycJen/p1i1ei2mjdEriHTKgoRhCS1dFs\nmrd4Nlb6rMBqwlw2YoT1FxVVaAIAcP6RFa0vpk2uRY4DmzHQ9edmaNMb6ELesPrJ\nq6OOHP1IU5Zqf/ex7l536m76XyPlv7/wR7IhY0jnGXrAt/AIi3NQyJf4S7Nibh7n\n9NHt+z3fmIFq+Ujqon4q4kbSFkb6KD5/5HdHHVDAZJdvQcU1kzsGIKxI7QPmlbru\nETVQfgUCgYEAv62LO1Mv9K6dpuWr3WC2UNDiGlBtQB7dqPIh5KcvXBjXF2apK1Wd\nBTVJqUYB9H5HrUKPOkhMoTLndg+1QmFFF2Uux8bQxqNIhcpH3JJuzN6ClaQve5wg\nqH0ARMaYTg3lOan/XT68e/H0ouGFNaF3HN82arG5XpujHif19zCYE6sCgYEA89l7\nNzotA9WGwBc0FMycECnb8iIYXxl9L5aA7O3YU7bZH2MPGEuZ22XnvVFq4RJdfRhO\npzW8VzEu0wzpisQvT7/wq9EnQKf5t/eCRfv1R3K4agUcV9OcSooDlWTQLhMMns3n\nD5sjiG0pf4W0ik57HGykXM/H378iGK6LjujWVCcCgYAlSBD7sfty4P/C9YsPHP95\nCpffvGLzhM1iTe4vtiDtDdvQLmSbDCTlXW79YKOCtYkldvu6v1NAS1Ff0kBUL+0r\nVr/ZlZ8H87xoYWbGzSiF6oWFq5Ccv0pO2zlRJzt6exNputnzff9VMEN/5tNtEgHD\n+NpxuC2w7B62/9jEgowhzwKBgQCNZriHjumZhpFMBGiEAx4gVVWgc9r0EoDAPqLm\nQQmniakgBT40lWpTiiU2Z+b1OsQRjS3W0lczrGZ9pcgrWpYgxamWyILdgEpTPmhB\nkthppQGBIRONbjz8EEoBsGLzxMIVuEpbh1e0fbCJrQvDA71p/ynUU/yQJ3JrI5Pz\nu9rFEwKBgQCeSeAF8pOImhQPHmmXPIBx6Q70YY206JDjpubGsmcjxc94bQLjFcyC\nSl9QYZxVOQOAgNJ+mi+DjVJpI4SIcnhq3gbyQSFVQQiMfzlzskwQ5tFirS8fZkfJ\ng1sPzjCDU8ib4G76k5OELC9ctR3ny5zNEnrA31NcEgjenpGsD1fU9w==\n-----END RSA PRIVATE KEY-----'

# Trasnformés les clés privées en objets de clé RSA
key1 = RSA.import_key(key1)
key2 = RSA.import_key(key2)
key3 = RSA.import_key(key3)

# blocs chiffrés au format base64
block1_b64 = "Py8IQbWc_SQSenysPDyFtrjzN2W38pHdG7oVfl5TODSFNiKQ4lHWgyfNBUcWbTwlC7phvS2dgiK-gJLV76t4yhlFMl_YaifEeWGvchZ8bfHH8A5-2URPLh8KZyvhw3d5A3sjWJUawhg1fMg0CtIqm4rC1JSGWSH_IQsG1_gcqOlgnj3vyU6JmawnlH7Z5hGEad3XqnKCLPKRZ2ZHYJ-0CjZl8PUkyiRWJI5gRWWsa_obTnOXmMr9EFWJ17uxi_7JKm1APxg6v_q6nvaEJu_nB0gKDBVyuaBhDH7jvp1mLV0akdQBTjwg2iArftHED3qebRL9Ru9HaAA-KCXfebdWag=="
block2_b64 = "gBdQwuFeE5WmczrSEA4YaZCtte8m5X_TPIb3R0GMzTa_IWOwCAfK-ixlrx2XleyQW_O7QZmg35nGUEOXdRkeCdBClc9BH4tHm2HcZQsfsHPkxbRL80qAXOYRJzSUSuq8mWMFP9mSUjrBxz0GoLC-WI_Kem4hWet0rXcz1Mu2wSAk1sL-8RXzxxlRMLswcIvrOmU8vV1cgtE4yu0u0cb2QsF2_XwpQ7t_p1eJxuqMUSOYdNk1mbvGQYxX3ekfV5LmKJFvrdukg86kgvRvrGQdXoxj8GCCnblv2gFCfBYndcYMUfsgmsrzdFcKZbXJUE1XRW5SLp2lo8WlBromQ_P2KQ=="

ciphertexts_b64 = [block1_b64, block2_b64]
    
# Déchiffrement du message
decrypted_blocks = []
for i, ciphertext_b64 in enumerate(ciphertexts_b64):
    ciphertext = base64.urlsafe_b64decode(ciphertext_b64)
    if i % 3 == 0:  
        cipher = PKCS1_OAEP.new(key1)
    elif i % 3 == 1:
        cipher = PKCS1_OAEP.new(key2)
    else:
        cipher = PKCS1_OAEP.new(key3)
    decrypted_block = cipher.decrypt(ciphertext)
    decrypted_blocks.append(decrypted_block)

# Assemblage des blocs déchiffrés
decrypted_message = b"".join(decrypted_blocks)

print("\n\nMessages déchiffrés : ",decrypted_message)

# Résultats
# Messages déchiffrés :  b"Je montrerai a ces gens ce que vous ne voulez pas qu'ils voient. Je leur ferai voir un monde sans vous, un monde sans loi ni controle, sans limite ni frontieres, un monde ou tout est possible. Ce que nous en ferons ne dependra que de vous."
```

Le flag sera NHM2I{Je montrerai a ces gens ce que vous ne voulez pas qu'ils voient. Je leur ferai voir un monde sans vous, un monde sans loi ni controle, sans limite ni frontieres, un monde ou tout est possible. Ce que nous en ferons ne dependra que de vous.}
