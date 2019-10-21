#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>


#define getch() _getch()
#define getche() _getche()

		void info();  //FUNCTIONS
		void infolist();
		void terms();

		int main() {     // MAIN FUNCTION	
			int i = 0;
	
			char choice;

			system("cls");   // FOR CLEARING SCREEN
			printf("\t\t*************************************************\n");
			printf("\t\t*                                               *\n");
			printf("\t\t*       -----------------------------           *\n");
			printf("\t\t*          WELCOME TO ABBASI HOTEL              *\n");
			printf("\t\t*       -----------------------------           *\n");
			printf("\t\t*                                               *\n");
			printf("\t\t*************************************************\n\n\n");

			printf(" \n Press any key to continue:");

			getch();
			system("cls");
			system("cls");
			while (1)      // INFINITE LOOP
			{
				system("cls");


		
				printf("\n   ******************************  |MAIN MENU|  ***************************** \n\n");
				printf("\t\t *Please enter your choice for menu*:\n\n");
				printf("\n\n");
				printf(" \n Enter 1 -> Book a room");
				printf("\n------------------------");
				printf(" \n Enter 2 -> View Customer Record");
				printf("\n-----------------------");
				printf(" \n Enter 3 -> To Read TERMS AND CONDITIONS");
				printf("\n-----------------------------------");
				printf(" \n Enter 4 -> Exit");
				printf("\n-----------------\n");
				printf("\n");



				choice = getche();
				choice = toupper(choice);
				switch (choice)           // SWITCH STATEMENT
				{
				case '1':
					info(); break;
				case '2':
					infolist(); break;
				case '3':
					terms(); break;
				case '4':
					system("cls");
					printf("\n\n\t *****THANK YOU*****\n\t FOR TRUSTING OUR SERVICE");
					Sleep(2000);
					exit(0);
					break;
				default:
					system("cls");
					printf("Incorrect Input");
					printf("\n Press any key to continue");
					getch();
				}
			}
		}

		//Function to enter the custoer info in a text file.
		void info()
		{
			char test[69];
			FILE *f;
			fopen_s(&f, "info.txt", "a+");

				system("cls");
				printf("\n Enter Customer Details:");
				printf("\n**************************");
				printf("\n Enter Desired Room number:\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Name:\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Address:\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Phone Number:\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Nationality:\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Email:\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Period(\'x\'days):\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("Enter Arrival date(dd\\mm\\yyyy):\n");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				printf("\n");
				printf("\n\n1 Room is successfully booked.\n\n\n Press 1 and enter to exit to main menu!!");
				scanf_s("%69s", test, 69);
				fprintf(f, "%s", test);
				fclose(f);
		}

		//function to output the customer information from the text file 
		void infolist()
		{
			system("cls");
			char lines[150];
			FILE *f;
			printf("Press any button to exit to main menu\n\n\n");
			fopen_s(&f, "info.txt", "a+");

			while (!feof(f)) {
				fgets(lines, 150, f);
				puts(lines);
			}

			fclose(f);
			getch();
		}

	
		//function to open the text file with the terms and condition 
		void terms()
		{
			system("cls");
			char lines[2000];
			FILE *f;
			printf("Press any button to exit to main menu\n\n\n");
			fopen_s(&f, "terms.txt", "a+");

			while (!feof(f)) {
				fgets(lines, 2000, f);
				puts(lines);
			}

			fclose(f);
			getch();
		}