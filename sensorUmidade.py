import serial

PORT = '/dev/ttyACM0'
conexao = serial.Serial(PORT, 9600)

while True:
    print("------------------------------------\n")
    print("Umidade do Ar: ", (conexao.readline().decode()))
    print("Temperatura: ", (conexao.readline().decode()))
