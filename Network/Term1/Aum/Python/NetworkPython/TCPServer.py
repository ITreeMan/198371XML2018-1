import socket
def mainRun():
    host= "127.0.0.1" #ใส่ IP ไว้
    port = 5001
    server=socket.socket()
    server.bind((host,port))  #ผูก Object
    server.listen(1)  # Set number of Comp
    print(" Wait for Comp")
    client,addr=server.accept() #Confirm conneted
    print("Connect from ; " +str(addr))

    #Process get sent data


    while True :
        data = client.recv(1024).decode('utf-8') #Decode Byte to string
        if not data :
            break
        print("Message From Client : " +data)
        #Sent data to Client
        data=str(data.upper()) #Convert to uper case
        client.sent(data.encode('utf-8'))
    client.close()

if __name__ =="__main__":
    mainRun()







# Get Mac address
    import re
    from uuid import getnode

    # to get physical address:
    original_mac_address = getnode()
    print("MAC Address: " + str(original_mac_address))  # this output is in raw format

    # convert raw format into hex format
    hex_mac_address = str(":".join(re.findall('..', '%012x' % original_mac_address)))
    print("HEX MAC Address: " + hex_mac_address)

    import socket


 # Get Ip address
    def getNetworkIp():
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
        s.connect(('<broadcast>', 0))
        return s.getsockname()[0]


    print(getNetworkIp())