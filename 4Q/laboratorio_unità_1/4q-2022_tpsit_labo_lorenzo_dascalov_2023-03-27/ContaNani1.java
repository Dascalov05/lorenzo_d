package lab10;


public class ContaNani1 extends Thread {

    public void run() {
        setName("Settenani");
        System.out.println(Thread.currentThread().getName());
        for (int i = 0; i < 7; i++) {
            System.out.print((i + 1) + " ");
        }
    }
}
