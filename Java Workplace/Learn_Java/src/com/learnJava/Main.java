package com.learnJava;

import java.util.Scanner;

public class Main {

    static int sum(int a, int b){
        return a+b;
    }

    public static void main(String[] args) {
	// write your code here
//        System.out.println("Hello World");
//        /*
//        The data types in java are:
//            string, int, float, char, boolean;
//         */
//        String name = "TARUN";
//        int a = 5;
//        float f = 5.55f;
//        boolean isValid = true;
//
//        System.out.println(name);
//        System.out.println(a);
//        System.out.println(f);
//        if (isValid){
//            System.out.println(name + " KOTAGIRI");
//        }

        /*
        Types of data types in Java:
        primitve: byte, short, int, long, float, double, boolean, char
        Non - primitive: String, etc...we can run methods with Non - primitive data types
         */
//        User Input in Java
//        Scanner scan = new Scanner(System.in);
//        System.out.println("What...Did you say something...?");
//        String sentence = scan.nextLine();
//
//        System.out.println("I wanted to say that..." + sentence);
//
//        System.out.println("What's your favourite hand Gun..?");
//        String Gun = scan.next();
//
//        System.out.println("Wow...I love " + Gun + " too");

//        Practice

//        Scanner scanf = new Scanner(System.in);
//
//        int x,y,z;
//        System.out.println("Give the inputs....");
//
//        x = scanf.nextInt();
//        y = scanf.nextInt();
//        z = x + y;
//        System.out.println("The sum of your given inputs is " + z);


//        System.out.println(name.contains("TARUN"));
//        System.out.println(name.charAt(3));
//        System.out.println(name.endsWith("RUN"));
//        System.out.println(name.indexOf("RUN"));

//        System.out.println(Math.max(5,6));
//        System.out.println(Math.sqrt(100));
//        System.out.println(Math.abs(-9));
//        System.out.println(Math.abs(9));

        // Conditional Statements

//        Scanner input = new Scanner(System.in);
//
//        System.out.println("Excuse me...How old are you exactly...?");
//
//        int age = input.nextInt();
//
//
//        if (age < 18){
//            System.out.println("You're not ALLOWED to participate in this race");
//        } else if (age > 100){
//            System.out.println("Hey Oldman...Why do you even want to race Now of all times...." +
//                    "Don't tell me you're actually IMMORTAL..!!");
//        }
//        else {
//            System.out.println("Please PROCEED with the documentation and give a test run on the race track..!");
//        }
//        System.out.println("Enter the number");
//        int num = input.nextInt();
//
//        switch (num){
//            case 1:
//                System.out.println("Today is Monday");
//                break;
//            case 2:
//                System.out.println("Today is Tuesday");
//                break;
//            case 3:
//                System.out.println("Today is Wednesday");
//                break;
//            case 4:
//                System.out.println("Today is Thursday");
//                break;
//            case 5:
//                System.out.println("Today is Friday");
//                break;
//            case 6:
//                System.out.println("Today is Saturday");
//                break;
//            case 7:
//                System.out.println("Today is Sunday");
//                break;
//            default:
//                System.out.println("INVALID INPUT");
//                break;
//        }


//        LOOPS  we have while  , do while and for loops in Java...and they're exactly similar to c pragramming
//        int  i = -10;
//        while(++i<10){
//            System.out.println(i);
//        }
//        for (int i = 0;i <= 10; i++){
//            if (i == 2)
//                continue; // Note that we use continue..wherever we're in need of skipping an iteration.
//            System.out.println(i);
//        }


//        Now  we'll see ARRAYS in Java
//        Classical way of printing out an array...
//          int [] marks = {5,4,3,5};
////        for (int i = 0; i < marks.length; i ++){
////            System.out.println(marks[i]);
////        }
//
////        But we have a new and advanced version of for loop called "FOR EACH" loop to print out an array
////          For each loop:
//
//        for (int mark: marks){
//            System.out.println(mark);
//        }
//
//        String [] cars = {"Koniegsegg Agera R", "Pagani Zonda", "Chevorlet Camaro z", "Porsche 911", "Lamborghini Aventador" };
//        for (String car: cars){
//            System.out.println(car);
//        }

//     Try - Catch
//        int [] marks = {1,2,3,34,5};
//        try{
//            System.out.println(marks[5]);
//        }
//        catch (Exception e){
//            System.out.println(e);
//        }
//
//        System.out.println("This is supposed to print after ESCAPING THE ERROR..!!");
//        System.out.println("The sum of given digits is " + sum(10,10));


        Float number_1, number_2;
        System.out.println("Enter the first number.");

        Scanner input = new Scanner(System.in);

        number_1 = input.nextFloat();

        System.out.println("Enter the second number.");

        number_2 = input.nextFloat();

        String prompt = "0 for Addition             1 for Subtraction" +
                "2 for Division             3 for Modulus";
        System.out.println(prompt);

        int take = input.nextInt();

        switch (take){
            case 0 :
                System.out.println(number_1 + number_2);
                break;
            case 1:
                System.out.println(number_1 - number_2);
                break;
            case 2:
                System.out.println(number_1 * number_2);
                break;
            case 3:
                System.out.println(number_1 % number_2);
                break;
            default:
                System.out.println(number_1.byteValue());
        }

    }



}
