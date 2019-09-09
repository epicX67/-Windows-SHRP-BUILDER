#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int device_type,partition_size;
	printf("                                   _ _ _ _\n");
	printf("   __ __  __  _ __ _   _ _  _     /_ _   /\n");
	printf("  / _ _/ / / / / __ / / __  /    _ _ _/ / \n");
	printf(" /__    / /_/ / /_/  / /_/ /   /  _ _ _/  \n");
	printf(" ___/  / __  / _,   / ____/   / /_ _      \n");
	printf("/__ _ /_/ /_/_/ |_ /_/       /__ __/      \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("Config step(Choose carefully)-                    \n");
	printf("--------------------------------------------------\n");
	printf("\nDevice type -\n1.ARM\n2.ARM64\nInput - ");
	scanf("%d",&device_type);
	printf("\nRecovery Partition Size -\n1.16MB\n2.32-64MB\nInput - ");
	scanf("%d",&partition_size);
	
	if(device_type==1&&partition_size==1){
		system("low_arm.cmd");
	}
	if(device_type==2&&partition_size==2){
		system("high_arm64.cmd");
	}
	if(device_type==1&&partition_size==2){
		system("high_arm.cmd");
	}
	if(device_type==2&&partition_size==1){
		system("low_arm64.cmd");
	}
}
