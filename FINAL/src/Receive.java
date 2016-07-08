import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.Socket;

public class Receive extends Thread {
    Thread t;
    BufferedReader inFromServer;
    String replysentence = "asd";
    Socket clientSocket;

    public Receive(Socket clientSocket1) throws Exception {
        t = new Thread(this, "abc");
        clientSocket = clientSocket1;
        t.start();
    }

    public void run() {
        try {
            inFromServer = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));

            while (true) {
                replysentence = inFromServer.readLine();
                ChatWindow.jTextArea1.append(clientSocket.getInetAddress().toString() + ": " + replysentence + "\n");
                System.out.print('\n' + "Ankit: " + replysentence);
//System.out.print('\n'+"Client: ");

            }

        } catch (Exception e) {
        }
    }

}