/* За дадена двојно поврзана листа од N цели броеви, 
треба да се најде бројот на елементи такви што 
просекот на елементите од пред него во листата е поголем од просекот на елементи после него во листата.
Влез: Првиот број од влезот е бројот на елементи во листата N,
а потоа во следниот ред се дадени самите елементи одделени со празно место.
Излез: Бројот на елементи што го задоволуваат условот. */
Input	            Result
5          
1 2 3 4 5           0

4
5 4 3 2             2

import java.util.Scanner;

class DLLNode<E> {
    protected E element;
    protected DLLNode<E> pred, succ;
    public DLLNode(E elem, DLLNode<E> pred, DLLNode<E> succ) {
        this.element = elem;
        this.pred = pred;
        this.succ = succ;
    }

    @Override
    public String toString() {
        return element.toString();
    }
}
class DLL<E> {
    private DLLNode<E> first, last;

    public DLL() {
        // Construct an empty SLL
        this.first = null;
        this.last = null;
    }

    public void insertFirst(E o) {
        DLLNode<E> ins = new DLLNode<E>(o, null, first);
        if (first == null)
            last = ins;
        else
            first.pred = ins;
        first = ins;
    }

    public void insertLast(E o) {
        if (first == null)
            insertFirst(o);
        else {
            DLLNode<E> ins = new DLLNode<E>(o, last, null);
            last.succ = ins;
            last = ins;
        }
    }

    public void insertAfter(E o, DLLNode<E> after) {
        if (after == last) {
            insertLast(o);
            return;
        }
        DLLNode<E> ins = new DLLNode<E>(o, after, after.succ);
        after.succ.pred = ins;
        after.succ = ins;
    }

    public void insertBefore(E o, DLLNode<E> before) {
        if (before == first) {
            insertFirst(o);
            return;
        }
        DLLNode<E> ins = new DLLNode<E>(o, before.pred, before);
        before.pred.succ = ins;
        before.pred = ins;
    }

    public E deleteFirst() {
        if (first != null) {
            DLLNode<E> tmp = first;
            first = first.succ;
            if (first != null) first.pred = null;
            if (first == null)
                last = null;
            return tmp.element;
        } else
            return null;
    }

    public E deleteLast() {
        if (first != null) {
            if (first.succ == null)
                return deleteFirst();
            else {
                DLLNode<E> tmp = last;
                last = last.pred;
                last.succ = null;
                return tmp.element;
            }
        } else
            return null;
    }

    public E delete(DLLNode<E> node) {
        if (node == first) {
            return deleteFirst();
        }
        if (node == last) {
            return deleteLast();
        }
        node.pred.succ = node.succ;
        node.succ.pred = node.pred;
        return node.element;

    }

    public DLLNode<E> find(E o) {
        if (first != null) {
            DLLNode<E> tmp = first;
            while (!tmp.element.equals(o) && tmp.succ != null)
                tmp = tmp.succ;
            if (tmp.element.equals(o)) {
                return tmp;
            } else {
                System.out.println("Elementot ne postoi vo listata");
            }
        } else {
            System.out.println("Listata e prazna");
        }
        return null;
    }

    public void deleteList() {
        first = null;
        last = null;
    }

    public int getSize() {
        int listSize = 0;
        DLLNode<E> tmp = first;
        while(tmp != null) {
            listSize++;
            tmp = tmp.succ;
        }
        return listSize;
    }

    @Override
    public String toString() {
        String ret = new String();
        if (first != null) {
            DLLNode<E> tmp = first;
            ret += tmp.toString();
            while (tmp.succ != null) {
                tmp = tmp.succ;
                ret += "<->" + tmp.toString();
            }
        } else
            ret = "Prazna lista!!!";
        return ret;
    }

    public String toStringR() {
        String ret = new String();
        if (last != null) {
            DLLNode<E> tmp = last;
            ret += tmp.toString();
            while (tmp.pred != null) {
                tmp = tmp.pred;
                ret += "<->" + tmp.toString();
            }
        } else
            ret = "Prazna lista!!!";
        return ret;
    }

    public DLLNode<E> getFirst() {
        return first;
    }

    public DLLNode<E> getLast() {

        return last;
    }

    public void mirror() {

        DLLNode<E> tmp = null;
        DLLNode<E> current = first;
        last = first;
        while(current!=null) {
            tmp = current.pred;
            current.pred = current.succ;
            current.succ = tmp;
            current = current.pred;
        }

        if(tmp!=null && tmp.pred!=null) {
            first=tmp.pred;
        }
    }
}
public class Main{
    public static float _prosek(DLL<Integer> lista,DLLNode<Integer>node){
        DLLNode<Integer> dvizi = node.pred;
        int suma=0;
        int counter=0;
        while(dvizi!=null) {
            suma+=dvizi.element;
            counter++;
            dvizi = dvizi.pred;
        }
        return (float) suma / counter;
    }
    public static float prosek_(DLL<Integer> lista,DLLNode<Integer>node){
        DLLNode<Integer> dvizi = node.succ;
        int suma=0;
        int counter=0;
        while(dvizi!=null) {
            suma+=dvizi.element;
            counter++;
            dvizi = dvizi.succ;
        }
        return (float) suma / counter;
    }
    public static int brElementi(DLL<Integer> lista,int N){
        int counter=0;
        DLLNode<Integer> dvizi = lista.getFirst().succ;
        while(dvizi.succ != null) { // do predposledeniot
            float _prosek = _prosek(lista,dvizi);
            float prosek_ = prosek_(lista,dvizi);
            if(_prosek > prosek_)
            {
                counter++;
            }
            dvizi=dvizi.succ;
        }
        return counter;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        DLL<Integer> lista = new DLL<>();
        for (int i = 0; i < N; i++) {
            lista.insertLast(sc.nextInt());
        }
        System.out.println(brElementi(lista,N));
    }
}
