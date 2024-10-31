/*За дадена низа од N цели броеви, да се избришат елементите со вредност помала од просекот на сите елементи во низата. 
На пример за низата 1, 2, 3, 4, 5 просекот е (1 + 2 + 3 + 4 + 5) / 5 = 15 / 5 = 3, што значи треба да се избришат елементите 1 и 2, што значи низата после оваа трансформација ќе биде 3, 4, 5.
Влез: Првиот број од влезот е бројот на елементи во низата N, а потоа во следниот ред се дадени самите елементи одделени со празно место.
Излез: Низата пред и после направената трансформација. 
Input	               Result
5                   {1,2,3,4,5}
1 2 3  4 5          {3,4,5}
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // vnesi n za niza i polni ja
        int n = in.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        
       // presmetka na prosek
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        double prosek = sum / n;
        
        // pecati ja listata bez promeni
        System.out.print("{");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
            if (i < n - 1) { // pecati zapirka do predposledniot broj 
                System.out.print(",");
            }
        }
        System.out.println("}");
        
        // presmetka za brojot na elementi koi se pogolemi i ednakvi na prosekot.
        int brojac = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= prosek) {
                brojac++;
            }
        }
        
        // nova niza za tie elementi pogore
        int[] newarr = new int[brojac];
        int index = 0;
        for (int i = 0; i < n; i++) {  
            if (arr[i] >= prosek) {
                newarr[index++] = arr[i];
            }
        }
        
        // pecateneje na transformirana niza
        System.out.print("{");
        for (int i = 0; i < brojac; i++) {
            System.out.print(newarr[i]);
            if (i < brojac - 1) { 
                System.out.print(",");
            }
        }
        System.out.println("}");
    }
}
