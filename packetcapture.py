import logging
logging.getLogger("scapy.runtime").setLevel(logging.ERROR)
from scapy.all import*
import csv
import os.path

file_name = 'Result.csv'
file_is_exist = False
if os.path.isfile(file_name):
    file_is_exist=True
f=open(file_name,'a',newline='')
wr=csv.writer(f)
if file_is_exist == False:
    wr.writerow(['src_mac', 'dst_mac','src_ip', 'dst_ip','data','whole_data'])

class PacketCapture():
    def __init__(self):
        pass

    def start_capture(self):
        sniff(prn=self.store_packet,timeout=10)

    def store_packet(self,packet):
        if packet[0][1].version==4:
            src_mac = packet[0][0].src
            dst_mac = packet[0][0].dst
            src_ip = packet[0][1].src
            dst_ip = packet[0][1].dst
            data = packet[0][2]
            whole = packet
            wr.writerow([src_mac, dst_mac, src_ip, dst_ip, data, whole])
        else:
            pass