class Marvellous extends Thread 
{
    public void run()
    {
        for(int i=1; i < 100; i++)
        {
            System.out.println(i);
        }
    }
}

class Multi11
{
    public static void main(String args[])
    {
        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2 = new Marvellous();
        
        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();     // Runnable state 
        t2.start();     // Runnable state 
    }   
}

