//package javaapplication2;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.StringTokenizer;

public class Server extends Thread {
    static public String stp;
    Thread t;
    String v;
    ServerSocket accserver = new ServerSocket(8668);

    public Server() throws Exception {
        this.start();
    }

    public void run() {


//System.out.println(v)String v="";
        stp = StartWindow.jTextField1.getText();
        String msg = "z " + StartWindow.jTextField1.getText();
        try {
            DatagramSocket as = new DatagramSocket(6789);

            int num = 10000;
            byte[] rec = new byte[10000];
            while (true) {


                DatagramPacket ps = new DatagramPacket(rec, rec.length);
                DatagramPacket qs;
                as.receive(ps);
                String ql = new String(ps.getData());
                for (int i = 0; i < 10000; i++)
                    if ((int) ql.charAt(i) == 0) {
                        num = i;
                        break;
                    }

                System.out.print(ql.substring(0, 7).equals("peeyush"));
                System.out.print(ql.length());
                if (ql.substring(0, 7).equals("peeyush")) {
                    qs = new DatagramPacket(msg.getBytes(), msg.length(), ps.getAddress(), 6789);
                    as.send(qs);
                    System.out.print("Sending Packe");
                } else if (ql.startsWith("z")) {
                    System.out.print(ps.getAddress());
                    MainWindow.list1.add(ql.substring(2, num) + "                   " + ps.getAddress().toString().substring(1) + "\n");//.append(ps.getAddress().toString()+"\n");
                    int cp = Integer.parseInt(MainWindow.jLabel6.getText() + "") + 1;
                    MainWindow.jLabel6.setText(String.valueOf(cp));
                } else if (ql.startsWith("123")) {
                    System.out.print(ps.getAddress());

                    ChatWindow nf = new ChatWindow(ps.getAddress());
                    //nf.setVisible(true);
                    //nf.jTextArea1.append(ql.substring(3, num)+"\n");
                    System.out.println("opening nf");
                    new Seal(nf, ps.getAddress(), stp, ql.substring(3, num) + "\n").setVisible(true);
                } else if (ql.startsWith("890")) {
                    System.out.print(ps.getAddress());
                    new SealedMessageWindow(ql.substring(3, num)).setVisible(true);
                    System.out.print("sealig");
                } else if (ql.startsWith("lko")) {
                    System.out.print(ps.getAddress());
                    System.out.print("i am good sasadasd");
                    StringTokenizer st = new StringTokenizer(ql.substring(0, num), " ");
                    st.nextToken();
                    String fname = st.nextToken();
                    String uname = st.nextToken();
                    Socket server = accserver.accept();
// FileRecieve frt= new FileRecieve(server,fname,uname);//.setVisible(true);
                    //      frt.run();
                    RecieveFileWindow frrt = new RecieveFileWindow(server, fname, uname);
                    frrt.setVisible(true);
                } else {
                    ChatWindow nf = new ChatWindow(ps.getAddress());
                    nf.setVisible(true);
                    nf.jTextArea1.append(ql.substring(0, num) + "\n");
                    System.out.println("opening nf");

                }
                //System.out.print(ql);
                for (int i = 0; i < 1000; i++)
                    rec[i] = (char) 0;
                ql = " ";
            }


        } catch (Exception e) {
            System.out.print(e + v);
        }
    }
}
