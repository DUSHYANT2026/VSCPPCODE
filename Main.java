// class Main {
//   public static void main(String[] args)
//   {
//       for (int i = 1; i <= 100; i++) {
//           System.out.println("DUSHYANT IS THE KING OF KINGS");
//       }
//   }
// }


// public static int precedence(char c){
//   if(c=='^')
//       return 3;
//   else if(c=='/'||c=='*')
//       return 2;
//   else if(c=='+'||c=='-')
//       return 1;
//   else 
//       return -1;
// }
// public static String infixToPostfix(Stack<Character> stack, String infix){
//   String postfix = "";
//   int n=infix.length();
//   for(int i=0;i<n;i++){
//       if(Character.isLetterOrDigit(infix.charAt(i))) {
//           postfix+=infix.charAt(i);
//       }
//       else if(infix.charAt(i)=='(') {
//           stack.push(infix.charAt(i));
//       }
//       else if(infix.charAt(i)==')'){
//           while((!stack.empty()) && (stack.peek()!='(')){
//               char temp=stack.peek();
//               postfix+=temp;
//               stack.pop();
//           }
//           if(stack.peek()=='(')
//               stack.pop();
//       } 
//       else if(isOperator(infix.charAt(i))){
//           if(stack.empty())
//               stack.push(infix.charAt(i));
//           else{
//               if(precedence(infix.charAt(i))> precedence(stack.peek()))
//                   stack.push(infix.charAt(i));
//               else if(precedence(infix.charAt(i))==precedence(stack.peek()) && infix.charAt(i)=='^')
//                   stack.push(infix.charAt(i));
//               else{
//                   while((!stack.empty()) && precedence(infix.charAt(i))<=precedence(stack.peek())){
//                       char temp=stack.peek();
//                       postfix+=temp;
//                       stack.pop();
//                   }
//                   stack.push(infix.charAt(i));
//               } 
//           } 
//       } 
//   }
//   while(!stack.empty()){
//       char temp=stack.peek();
//       postfix+=temp;
//       stack.pop();
//   }
//   return postfix;
// }
// public static void main(String[] args) {
//   Scanner scanner = new Scanner(System.in);
//   System.out.println("ENTER YOUR INFIX STATEMENT:");
//   String infix = scanner.nextLine();
//   Stack<Character> stack = new Stack<>();
//   System.out.println("INFIX STATEMENT THAT YOU ENTERD:\n "+infix);
//   System.out.println("POSTFIX OF THE INFIX THAT YOU ENTERED: ");
//   System.out.println(infixToPostfix(stack,infix)); }


// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         try (Scanner input = new Scanner(System.in)) {
//             int n = input.nextInt();
//             int[][] a = new int[n][n];

//             for(int i = 0; i < n; i++) {
//                 for(int j = 0; j < n; j++) {
//                     a[i][j] = input.nextInt();
//                 }
//             }

//             System.out.println("The matrix is: ");
//             for(int i = 0; i < n; i++) {
//                 for(int j = 0; j < n; j++) {
//                     System.out.print(a[i][j] + " ");
//                 }
//                 System.out.println();
//             }

//             System.out.println("Position of the element in the matrix:");
//             int y = input.nextInt();
//             for(int i = 0; i < n; i++) {
//                 for(int j = 0; j < n; j++) {
//                     if(a[i][j] == y) {
//                         System.out.println(i + " " + j);
//                     }
//                 }
//             }

//             System.out.println("Transpose of the matrix: ");
//             for(int i = 0; i < n; i++) {
//                 for(int j = i; j < n; j++) {
//                     int temp = a[i][j];
//                     a[i][j] = a[j][i];
//                     a[j][i] = temp;
//                 }
//             }

//             for(int i = 0; i < n; i++) {
//                 for(int j = 0; j < n; j++) {
//                     System.out.print(a[i][j] + " ");
//                 }
//                 System.out.println();
//             }

//             System.out.println("Position of the element in the transpose:");
//             int x = input.nextInt();
//             for(int i = 0; i < n; i++) {
//                 for(int j = 0; j < n; j++) {
//                     if(a[i][j] == x) {
//                         System.out.println(j + " " + i);
//                     }
//                 }
//             }
//         }
//     }
// }





// import java.util.Scanner;
// public class Main {
//     public static void halfPyramidNumbers1(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(i);
//             }
//             System.out.println();
//         }
//     }

//     public static void halfPyramidNumbers2(int n) {
//         for (int i = n; i > 0; i--) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(n - i + 1);
//             }
//             System.out.println();
//         }
//     }

//     public static void halfPyramidNumbers3(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int k = n - i; k > 0; k--) {
//                 System.out.print(" ");
//             }
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(i);
//             }
//             System.out.println();
//         }
//     }

//     public static void halfPyramidNumbers4(int n) {
//         for (int i = n; i > 0; i--) {
//             for (int k = n - i; k > 0; k--) {
//                 System.out.print(" ");
//             }
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(n - i + 1);
//             }
//             System.out.println();
//         }
//     }

//     public static void halfPyramidNumbers5(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(j);
//             }
//             System.out.println();
//         }
//     }

//     public static void halfPyramidNumbers6(int n) {
//         int x = 1;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(x++ + " ");
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         try (Scanner sc = new Scanner(System.in)) {
//           System.out.print("Enter number of levels of the pattern : ");
//           int num = sc.nextInt();
//           halfPyramidNumbers1(num);
//           System.out.println();
//           halfPyramidNumbers2(num);
//           System.out.println();
//           halfPyramidNumbers3(num);
//           System.out.println();
//           halfPyramidNumbers4(num);
//           System.out.println();
//           halfPyramidNumbers5(num);
//           System.out.println();
//           halfPyramidNumbers6(num);
//         }
//     }
// }


// import java.util.HashMap;
// import java.util.Map;
// import java.util.Scanner;

// public class BinaryToStringConverter {

//     public static void binaryToString(String s) {
//         Map<String, Character> map = new HashMap<>();
//         map.put("001", 'C');
//         map.put("010", 'G');
//         map.put("011", 'A');
//         map.put("101", 'T');
//         map.put("110", 'U');

//         StringBuilder ans = new StringBuilder();
//         for (int i = 0; i < s.length(); i += 3) {
//             String x = s.substring(i, Math.min(i + 3, s.length()));
//             if (map.containsKey(x)) {
//                 ans.append(map.get(x));
//             }
//         }

//         for (int i = 0; i < 3; i += 3) {
//             String x = s.substring(i, Math.min(i + 3, s.length()));
//             if ("000".equals(x)) {
//                 for (int j = 0; j < ans.length(); j++) {
//                     if (ans.charAt(j) == 'U') {
//                         ans.setCharAt(j, 'T');
//                     }
//                 }
//             } else if ("111".equals(x)) {
//                 for (int j = 0; j < ans.length(); j++) {
//                     if (ans.charAt(j) == 'T') {
//                         ans.setCharAt(j, 'U');
//                     }
//                 }
//             }
//         }

//         System.out.println(ans.toString());
//     }

//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         String s = scanner.nextLine();
//         binaryToString(s);
//     }
// }





// import java.util.*;
// import java.util.Scanner;
// public class Main {
//     public static void pattern1(int n){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 System.out.print('*');
//             }
//             System.out.println();
//         }
//     }
//     public static void pattern2(int n){
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 System.out.print('*');
//             }
//             System.out.println();
//         }
//     }
//     public static void pattern3(int n){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<=i;j++){
//                 System.out.print('*');
//             }
//             System.out.println();
//         }
//     }
//     public static void pattern4(int n){
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n-1;j++){
//                 System.out.print(' ');
//             }
//             for(int j=0;j<2*i+1;j++){
//                 System.out.print('*');
//             }
//             System.out.println();
//         }
//     }
//     public static int revresenumber(int n){
//         int ans = 0;
//         while(n !=0 ){
//             int x = n%10;
//             ans = ans*10 + x;
//             n = n/10;
//         }
//         return ans;
//     }
//     public static int factorial(int n){
//         int ans = 1;
//         for(int i=1;i<=n;i++){
//             ans *= i;
//         }
//         return ans;
//     }
//     public static boolean angstrom(int n){
//         int check = n;
//         int sum = 0;
//         while(n != 0){
//             int x = n%10;
//             sum += Math.pow(x, 3);
//             n = n/10;
//         }
//         return sum == check;
//     }
//     public static boolean strongnumber(int n){
//         int check = n;
//         int sum = 0;
//         while(n != 0){
//             int x = n%10;
//             sum += factorial(x);
//             n = n/10;
//         }
//         return check == sum;
//     }
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         int n = scanner.nextInt();
        
//         pattern1(n);
//         System.out.println();
//         pattern2(n);
//         System.out.println();
//         pattern3(n);
//         System.out.println();
//         pattern4(n);
//         // System.out.println(revresenumber(n));
//         // System.out.println(factorial(n));

//         // if (angstrom(n)) {
//         //     System.out.println("THE NUMBER IS ARMSTRONG: " + n);
//         // } else {
//         //     System.out.println("THE NUMBER IS NOT ARMSTRONG: " + n);
//         // }
//         // System.out.println("THE AMSTRONG NUMBER BETWEEN 0 TO N:  ");
//         // for(int i=0;i<=n;i++){
//         //     if(angstrom(i) == true){
//         //         System.out.println(i);
//         //     }
//         // }
//         // System.out.println("THE STRING NUMBER BETWEEN THE GIVEN RNGE:");
//         // for(int i=0;i<n;i++){
//         //     if(strongnumber(i)){
//         //         System.out.println(i);
//         //     }
//         // }
        
//     }
// }








// class Student{
//   int id;
//   String name;
// }
//  class Main {
//   public static void main(String[] args) {

//       Student s1 = new Student();
//       s1.id = 101;
//       s1.name = "SONOO";

//       System.out.println(s1.id + "" + s1.name);
      
//   }
// }
