public class main {
    public static void main(String[] args) throws InterruptedException {
         
        long inicio = System.currentTimeMillis();
         
			int b = 0;
			for(int a = 0; a < (1000000000); a++)
			{
				b = b + 1;
			}

        long fin = System.currentTimeMillis();
         
        double tiempo = (double) (fin - inicio);
        double diferencia = (double) ((tiempo)/1000);
         
        System.out.println("\ninicio: " + inicio + ", fin: " + fin + ", diferencia: " + diferencia + "\n");
        
    }
}
