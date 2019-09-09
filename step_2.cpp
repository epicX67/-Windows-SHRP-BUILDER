#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char name[100],ex_location[100],otg_location[100],device_name[100],has_flashlight[20],has_edl[20],rec_path[100];
	printf("                                   _ _ __\n");
	printf("   __ __  __  _ __ _   _ _  _     /_ _   /\n");
	printf("  / _ _/ / / / / __ / / __  /    _ _ _/ / \n");
	printf(" /__    / /_/ / /_/  / /_/ /   /  _ _ _/  \n");
	printf(" ___/  / __  / _,   / ____/   / /_ _     \n");
	printf("/__ _ /_/ /_/_/ |_ /_/       /__ __/     \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("Step 2-                                                  \n");
	printf("---------------------------------------------------\n");
	printf("Enter Your Short Name- ");
	scanf("%s",&name);
	printf("Enter Your Device Code Name- ");
	scanf("%s",&device_name);
	printf("External storage location (ex. /exsd , /external_sd)- ");
	scanf("%s",&ex_location);
	printf("Usb OTG storage location (ex. /usbotg)- ");
	scanf("%s",&otg_location);
	printf("Recovery Path- ");
	scanf("%s",&rec_path);
	printf("Has flashlight(if u are not sure then press 0 & if yes then press 1)- ");
	scanf("%s",&has_flashlight);
	printf("Has Edl mode in your device- ");
	scanf("%s",&has_edl);
	FILE *p;
	p=fopen("b.bin","w+");
	if( strlen(otg_location)>0){
		fputs(otg_location,p);
	}
	fclose(p);
	
	p=fopen("d.bin","w+");
	if( strlen(ex_location)>0){
		fputs(ex_location,p);
	}
	fclose(p);
	
	p=fopen("f.bin","w+");
	if( strlen(device_name)>0){
		fputs(device_name,p);
	}
	fclose(p);
	
	p=fopen("h.bin","w+");
	if( strlen(name)>0){
		fputs(name,p);
	}
	fclose(p);
	
	p=fopen("j.bin","w+");
	if( strlen(has_edl)>0){
		fputs(has_edl,p);
	}
	fclose(p);
	
	p=fopen("l.bin","w+");
	if( strlen(has_flashlight)>0){
		fputs(has_flashlight,p);
	}
	fclose(p);
	
	p=fopen("2.pepe","w+");
	if( strlen(device_name)>0){
		fputs(device_name,p);
	}
	fclose(p);
	
	p=fopen("4.pepe","w+");
	if( strlen(name)>0){
		fputs(name,p);
	}
	fclose(p);
	
	p=fopen("6.pepe","w+");
	if( strlen(rec_path)>0){
		fputs(rec_path,p);
	}
	fclose(p);
	
	p=fopen("cd.goon","w+");
	if( strlen(rec_path)>0){
		fputs(rec_path,p);
	}
	fclose(p);
	
	system("zgoon.cmd");
}
