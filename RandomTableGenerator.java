// Random table Generator

import java.util.*;
public class RandomTableGenerator{
	public static void main(String args[]){
		Random random = new Random();
		int rand = random.nextInt(10000000);
			System.out.println("----------------------------Random Table Generator-----------------------------");
		System.out.println("Table of "+ rand + " is :");
		for(int i = 1; i<=10; i++){
			System.out.printf("%d X %d = %s\n",rand,i,rand*i);
		}
	}
}
