alf = "abcdefghijklmnñopqrstuvwxyz"


def encriptar(cadena):
    encriptado = ""
    for i in range(len(cadena)):
        if(cadena[i]=='z'):
            encriptado = encriptado + 'a'
        else:
            encriptado = encriptado + (alf[alf.index(cadena[i])+1])
    return encriptado

def desencriptar(texEncript):
    desencrip= ""
    for i in range(len(texEncript)):
        if(texEncript[i] == alf[0]):
            desencript = desencrip + alf[len(alf)-1]
        else:
            desencript = desencrip + (alf[alf.index(texEncript[i])-1])
    return desencript


parametro = int(input("Encriptar[1] o Desencriptar[2]: "))
while(parametro<1 or parametro >2):
    parametro = int(input("Encriptar[1] o Desencriptar[2]: "))

if(parametro==1):
    cadena = input("Cadena: ")
    print("Encriptado :", encriptar(cadena))

else:
    enc = input("Texto Encriptado: ")
    print("El texto desencriptado: ", desencriptar(enc))
    input("")

