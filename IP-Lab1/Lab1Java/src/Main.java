public class Main {
    public static void main(String[] args) {

        // 1. Crearea Autorilor (folosind 'new')
        Autor a1 = new Autor("Sadoveanu");
        Autor a2 = new Autor("Liviu Rebreanu");

        // 2. Crearea Cartilor
        // Observa ca variabilele incep cu litera mica (c1, c2, c3)
        Carte c1 = new Carte("Ion", a2);
        Carte c2 = new Carte("Baltagul", a1);
        Carte c3 = new Carte("Padurea Spanzuratilor", a2);

        // 3. Crearea Cititorilor
        Cititor ca = new Cititor(1234, "Panainte Tudor");
        Cititor cb = new Cititor(1235, "Padurariu Alexandru");
        Cititor cc = new Cititor(1236, "Busuioc Matei");

        // 4. Adaugarea cititorilor (metodele sunt cu litera mica: addCititor)
        c1.addCititor(ca);
        c1.addCititor(cc);

        c2.addCititor(cb);
        c2.addCititor(ca);

        // 5. Biblioteca
        // In C++ era: Biblioteca Bib;
        // In Java trebuie neaparat cu new:
        Biblioteca bib = new Biblioteca();

        bib.addCarte(c1);
        bib.addCarte(c2);
        bib.addCarte(c3);

        // 6. Afisarea
        bib.print();
    }
}
