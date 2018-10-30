# import socket
#
#
# def mainRun():
#     host = "192.168.43.98"
#     port = 5000
#     server = socket.socket()
#     server.connect((host, port))
#     data = input("input your text : ")
#
#     while data != "q":
#         server.send(data.encode("utf-8"))
#         data = server.recv(1024).decode("utf-8")
#         print("Data From Server :" + data)
#         data = input("input :")
#         server.close()
#
#
# if __name__ =="__main__":
#     mainRun()


import socket
import threading
import sys

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
port = 5054

uname = input("Enter user name::")

ip = input('Enter the IP Address::')

s.connect((ip, port))
s.send(uname.encode('ascii'))

clientRunning = True

def receiveMsg(sock):
    serverDown = False
    while clientRunning and (not serverDown):
        try:
            msg = sock.recv(1024).decode('ascii')
            print(msg)
        except:
            print('Server is Down. You are now Disconnected. Press enter to exit...')
            serverDown = True

threading.Thread(target = receiveMsg, args = (s,)).start()
while clientRunning:
    tempMsg = input()
    msg = uname + '>>' + tempMsg
    if '**quit' in msg:
        clientRunning = False
        s.send('**quit'.encode('ascii'))
    else:
        s.send(msg.encode('ascii'))