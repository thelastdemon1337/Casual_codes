import java.awt.*;
import java.applet.*;
/*<applet code = HelloJava width = 400 height = 500 ></applet>*/
public class HelloJava extends Applet {
    public void init(){
        setBackground(Color.black);
        setForeground(Color.green);
    }
    public void paint(Graphics g) {

        g.drawString("Hello Java", 100, 100);
    }
}
