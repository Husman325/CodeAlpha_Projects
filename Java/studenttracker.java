import java.util.*;

public class Student_Grade_Tracker {

    public static void main(String[] args){

        Scanner sc=new Scanner(System.in);

        int n;
        System.out.print("Number of students:");
        n=sc.nextInt();

        int marks[]=new int[n];
        int sum=0;

        for(int i=0;i<n;i++){
            System.out.print("Marks:");
            marks[i]=sc.nextInt();
            sum+=marks[i];
        }

        int max=marks[0],min=marks[0];

        for(int i=1;i<n;i++){

            if(marks[i]>max)
                max=marks[i];

            if(marks[i]<min)
                min=marks[i];
        }

        System.out.println("Average="+sum/n);
        System.out.println("Highest="+max);
        System.out.println("Lowest="+min);

    }
}
