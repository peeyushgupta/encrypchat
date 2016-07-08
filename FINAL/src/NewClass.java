/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;

/**
 * @author peeyush
 */
public class NewClass {
    public static void main(String arg[]) {
        // TODO add your handling code here:
        try {
            File file = new File("newFile1.mp4");

            file.createNewFile();

            RandomAccessFile raf = new RandomAccessFile(file, "rw");


            // Íš¹ýSocketÁ¬œÓÎÄŒþ·þÎñÆ÷

            ServerSocket accserver = new ServerSocket(8668);
            Socket server = accserver.accept();


            //ŽŽœšÍøÂçœÓÊÜÁ÷œÓÊÜ·þÎñÆ÷ÎÄŒþÊýŸÝ

            InputStream netIn = server.getInputStream();

            InputStream in = new DataInputStream(new BufferedInputStream(netIn));


            //ŽŽœš»º³åÇø»º³åÍøÂçÊýŸÝ

            byte[] buf = new byte[2048];

            int num = in.read(buf);

            while (num != (-1)) {//ÊÇ·ñ¶ÁÍêËùÓÐÊýŸÝ

                raf.write(buf, 0, num);//œ«ÊýŸÝÐŽÍùÎÄŒþ

                // raf.skipBytes(num);//Ë³ÐòÐŽÎÄŒþ×ÖœÚ

                num = in.read(buf);//ŒÌÐøŽÓÍøÂçÖÐ¶ÁÈ¡ÎÄŒþ
                System.out.println("transfere");
            }

            in.close();

            raf.close();
        } catch (Exception e) {
            System.out.println(e + "adcs");
        }
    }

}
