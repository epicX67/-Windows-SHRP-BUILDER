#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int main(){
	char name[10],ex_location[10],otg_location[10],device_name[10],has_flashlight[2],has_edl[2];
	printf("                                   _ _ __\n");
	printf("   __ __  __  _ __ _   _ _  _     /_ _   /\n");
	printf("  / _ _/ / / / / __ / / __  /    _ _ _/ / \n");
	printf(" /__    / /_/ / /_/  / /_/ /   /  _ _ _/  \n");
	printf(" ___/  / __  / _,   / ____/   / /_ _     \n");
	printf("/__ _ /_/ /_/_/ |_ /_/       /__ __/     \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("Step 1-                                                  \n");
	printf("---------------------------------------------------\n");
	printf("Press any key to continue\n");
	getch();
	system("copy recovery.img shrp");
	system("helper.cmd");
}
