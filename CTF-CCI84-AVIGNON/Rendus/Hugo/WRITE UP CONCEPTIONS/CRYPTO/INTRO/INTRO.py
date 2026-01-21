# CHALLENGE DE CRYPTO INTRO |
# HUGO TOURRES M2I M1       |
#___________________________|

# DÉCLARATIONS
import base64
import difflib
import filecmp

def readFirstFile(file):
    with open(file) as firstFile:
        firstFileContent = firstFile.readlines()
    return(firstFileContent)

def readSecondFile(file):
    with open(file) as secondFile:
        secondFileContent = secondFile.readlines()
    return(secondFileContent)

def main():
    
    file1 = '/home/hugo/Desktop/COURS/CTF/CRYPTO/x.txt'
    file2 = '/home/hugo/Desktop/COURS/CTF/CRYPTO/y.txt'
    ff = readFirstFile(file1)
    sf = readSecondFile(file2)
    
    
    for line in difflib.unified_diff(ff, sf, fromfile=file1, tofile=file2):
        print(line)

    with open('old.csv', 'r') as t1, open('new.csv', 'r') as t2:
        fileone = t1.readlines()
        filetwo = t2.readlines()

    with open('update.csv', 'w') as outFile:
        for line in filetwo:
            if line not in fileone:
                outFile.write(line)


if __name__ == '__main__':
    main()