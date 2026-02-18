import java.util.ArrayList;
import java.util.List;

public class Biblioteca {
    private List<Carte> carti;

    public Biblioteca()
    {
        carti=new ArrayList<>();
    };

    public void addCarte(Carte c)
    {
        this.carti.add(c);
    }

    public void print()
    {
        for (var c:carti)
        {
            c.Print();
        }
    }

}
