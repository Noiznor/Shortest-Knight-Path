
import java.util.stream.*;

public class knight {

    public static int knight(String...pos) {
        int[][] ab=Stream.of(pos).map(s->new int[]{"abcdefgh".indexOf(s.charAt(0)),s.charAt(1)-48}).toArray(int[][]::new);
        int[] dxy=IntStream.range(0,2).map(i->Math.abs(ab[0][i]-ab[1][i])).sorted().toArray();
        if(dxy[0]==0&&dxy[1]==1) return 3;
        if(dxy[0]==2&&dxy[1]==2||dxy[0]==1&&dxy[1]==1&&(pos[0]+pos[1]).matches(".*?(a1|h1|a8|h8).*")) return 4;
        int delta=dxy[1]-dxy[0];
        return delta-2*(int)Math.floor(1.0*(delta-dxy[0])/(dxy[0]>delta?3:4));
    }
}
