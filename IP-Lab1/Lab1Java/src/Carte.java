import java.util.ArrayList;
import java.util.List;

public class Carte {
    private String nume;
    private Autor autor;
    private List<Cititor> cititori;

    public Carte (String nume, Autor autor)
    {
        this.nume = nume;
        this.autor = autor;
        cititori = new ArrayList<>();
    }

    public void addCititor (Cititor c)
    {
        cititori.add(c);
    }

    public void Print()
    {
        System.out.print(this.nume+" (Autor "+this.autor.getNume()+" )");
        int i;
        for (i=0;i<cititori.size();i++)
        {
            if(i==0)
                System.out.print('(');
            else
                System.out.print(',');

            System.out.print(cititori.get(i).getNume());
        }

        if (i!=0)
            System.out.print(')');
        System.out.println();
    }
}
