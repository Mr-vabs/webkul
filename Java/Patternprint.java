import java.util.*;
public class Patternprint{
public static void main(String[] args) {
Scanner s = new Scanner(System.in);
int n = s.nextInt();

for (int i= 0; i< (n+2)/2; i++) {
for(int j=0; j<i+1; j++) {
System.out.print("@"+ " ");
}
for(int k=0; k<(2*n)-i;k++) {
System.out.print(" "+ " ");
}
if(i!=0){
for(int m=0; m<n; m++){
System.out.print("@"+ " ");
// System.out.print("\n");
}
}
System.out.print("\n");
}

for(int i=0; i<n-1; i++){
System.out.print("@"+ " ");
}
for(int i=0; i<n+2; i++){
System.out.print("*"+ " ");
}
for(int i=0; i<n; i++){
System.out.print("@"+ " ");
}

System.out.print("\n");

for (int i=(n+2)/2; i>0; i--) {
for(int j=i+1; j>1; j--) {
System.out.print("@"+ " ");
}
for(int k=(2*n)-i+1; k>0;k--) {
System.out.print(" "+ " ");
}
if(i!=1){
for(int m=0; m<n; m++){
System.out.print("@"+ " ");
// System.out.print("\n");
}
}

System.out.print("\n");
}



}
}
