//package javaapplication2;

import java.net.DatagramPacket;
import java.net.DatagramSocket;

public class ProServer extends Thread {
    Thread t;
    String v;
    DatagramSocket as;

    public ProServer(DatagramSocket ps) throws Exception {
        as = ps;
    }

    public void run() {


//System.out.println(v)String v="";
        String msg = "apankaj";
        try {


            byte[] rec = new byte["peeyush".length()];
            while (true) {


                DatagramPacket ps = new DatagramPacket(rec, rec.length);
                DatagramPacket qs;
                as.receive(ps);
                String ql = new String(ps.getData());
                ChatWindow.jTextArea1.append(ql);
            }

        } catch (Exception e) {
            System.out.print(e + v);
        }
    }
}
