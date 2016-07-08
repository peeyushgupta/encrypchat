import java.awt.*;
import java.io.*;
import java.net.Socket;

public class FileRecieve extends Thread {

    Socket server;
    String fname;
    String uname;
    String rkey;
    int tnum = 0;

    public FileRecieve(Socket sp, String s1, String s2, String Key) {
        server = sp;
        fname = s1;
        uname = s2;
        rkey = Key;
    }

    public void run() {
        try {
            //RecieveFileWindow.jLabel2.setText("DOWNLOADING....");
            MainWindow j = new MainWindow(10);
            FileDialog fd = new FileDialog(j, "Save", FileDialog.SAVE);
            fd.setFile(fname);
            fd.setVisible(true);


            //fd.setFile(fname);
            System.out.println("chk 12");
            String s1 = fd.getFile();
            System.out.println("chk 13" + s1);
            String s2 = fd.getDirectory();
            System.out.println("chk 14" + s2);
            File file = new File(s2 + "enc" + s1);


            file.createNewFile();

            RandomAccessFile raf = new RandomAccessFile(file, "rw");


            InputStream netIn = server.getInputStream();

            InputStream in = new DataInputStream(new BufferedInputStream(netIn));


            byte[] buf = new byte[2048];

            int num = in.read(buf);

            while (num != (-1)) {

                raf.write(buf, 0, num);
                tnum = tnum + num;
                //RecieveFileWindow.jLabel1.setText("Downloadng");

                num = in.read(buf);
                System.out.println("transfere");
            }

            in.close();

            raf.close();

            Runtime rt = Runtime.getRuntime();
            //   Process pr = rt.exec("cmd /c dir");
            Process pr = rt.exec("./a.out " + s2 + "enc" + s1 + " " + s2 + s1 + " " + rkey);
            BufferedReader input = new BufferedReader(new InputStreamReader(pr.getInputStream()));

            String line = null;

            while ((line = input.readLine()) != null) {
                System.out.println(line);
            }
            //  jLabel4.setText(String.valueOf(tnum)+" Bytes Transferred.....");

            //Thread.sleep();
        } catch (Exception e) {
            System.out.println(e + "adcs");
        }
        MainWindow.nw.list1.add(uname + "                  " + fname + "        " + String.valueOf(tnum));
        MainWindow.nw.setVisible(true);
        //RecieveFileWindow.setVisible(false);

    }
}