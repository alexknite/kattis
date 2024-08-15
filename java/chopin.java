//https://open.kattis.com/problems/chopin

import java.util.Scanner;
import java.util.HashMap;

public class chopin {
    public static void main(String args[]) {
        HashMap<String, String> notes = new HashMap<String, String>(){{
            put("A", "UNIQUE");
            put("A#", "Bb");
            put("B", "UNIQUE");
            put("C", "UNIQUE");
            put("C#", "Db");
            put("D", "UNIQUE");
            put("D#", "Eb");
            put("E", "UNIQUE");
            put("F", "UNIQUE");
            put("F#", "Gb");
            put("G", "UNIQUE");
            put("G#", "Ab");
        }};

        HashMap<String, String> moreNotes = new HashMap<>();

        notes.forEach((note, alternative) -> {
            if(alternative != "UNIQUE") {
                moreNotes.put(alternative, note);
            }
        });

        notes.putAll(moreNotes);

        Scanner scan = new Scanner(System.in);
        int count = 1;

        while(scan.hasNext()) {
            String line = scan.nextLine();
            String note = line.split(" ")[0];
            String tonality = line.split(" ")[1];
            String alternative = notes.get(note);

            System.out.println("Case " + count + ": " + alternative + (
                (alternative == "UNIQUE") ? "" : (" " + tonality)
            ));

            count++;
        }
        scan.close();
    }
}

