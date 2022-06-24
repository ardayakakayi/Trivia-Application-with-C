#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dirent.h>
#include<dos.h>
#include<mmsystem.h>
#include <locale.h>
//REGULAR 
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define PRPL "\e[0;35m"
//REGULAR Intensity text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"
//Bold high intensity text
#define BHBLK "\e[1;90m"
#define BHRED "\e[1;91m"
#define BHGRN "\e[1;92m"
#define BHYEL "\e[1;93m"
#define BHBLU "\e[1;94m"
#define BHMAG "\e[1;95m"
#define BHCYN "\e[1;96m"
#define BHWHT "\e[1;97m"
#define bhprp "\e[1;35m"
#define reset "\e[0m"
//Background
#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"
FILE *fptr,*fptrclone,*srvy,*msc,*fptrdroid,*scr,*fptrjedi,*fptrsith,*fptrrepublic;
struct oyun{
char sorular[200];
};
struct score{
	char ID[20];
	int score;
}IDscore[],IDscoreclone;
struct music{
	char ID[10];
}choice;
struct survey{
	char point[5];
	char comment[200];
}result;
struct question{
	int questionID;
	char question_text[200];
	char choiceA[200];
	char choiceB[200];
	char choiceC[200];
	char choiceD[200];
	char true_choice[200];
	}questiontext;
//////////////////////////////////////////////////
void music_list();								//
void Musicplayer();								//
void starting();								//
int fsorusayisi();								//
void fsoruekle();								//
void fsorularigoster();							//
void fsorusil();								//
void fsoruguncelle();							//
void sorusayisinigoster(int count);				//
void about();									//
void stop();									//
void menu();									//
void oyun();									//
void frandomsayilar();							//
void fquestions();								//
void fscores();									//
void foyunoyna();								//
//////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main(){	
	
	starting();
	setlocale(LC_ALL,"Turkish");
	menu();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void music_list(){																												//
			printf(BHMAG);																										//
			printf("      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");									//
			printf("     |\t\t\t\t\t\t\t\t     |");																				//
			printf("\t\t\t\t\t\t\t      |\t1. Comptine ddun Autre Ete by Beethoven\t\t\t     |\n");								//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//
			printf("     |\t2. Portland, Maine by Donovan Woods\t\t\t     |\n");												//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//	
			printf("     |\t3. Promise by Ben Howard\t\t\t\t     |\n");															//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//
			printf("     |\t4. Paul by Big Thief\t\t\t\t\t     |\t\t     Player'a hosgeldiniz.\n");								//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//
			printf("     |\t5. Charlotte's Thong by Connan Mockasin\t\t\t     |\n");											//
			printf("     |\t\t\t\t\t\t\t\t     |\t     Parca degistirmek icin parca numarasi\n");								//					Muzik Listesinin goruntulenmesi saglanir
			printf("     |\t6. Feels like were dying by Johnny Goth\t\t\t     |\t\t      girmeniz yeterlidir.\n");				//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//	
			printf("     |\t7. Innocence by Luke Sital-Singh\t\t\t     |\t   Muziginizi sectikten sonra 'geri' yazarak\n");		//
			printf("     |\t\t\t\t\t\t\t\t     |\t\t\tcikabilirsiniz.\n");														//
			printf("     |\t8. Milk Honey alternate version\t\t\t\t     |\n");													//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//
			printf("     |\t9. Rose Petals by S.Carey\t\t\t\t     |\n");														//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//
			printf("     |\t10. Sesame Syrup by Cigarettes After Sex\t\t     |\n");												//
			printf("     |\t\t\t\t\t\t\t\t     |\n");																			//
			printf("     |\t11. Youth by Daughter\t\t\t\t\t     |\n");															//
			printf("     |\t\t\t\t\t\t\t\t     |\t\t\t");																		//
			printf("\n     |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");}								//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Musicplayer(){
	system("CLS"); 
	system("COLOR F4");
	jump:
	printf("\n\n\n\n\n\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t  Muzigin insan ruhuna iyi geldigine inaniyoruz.\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t\t|\t  Sizin de iyi hissetmeniz bizim icin onemli.Sizin icin bir kac\t\t|\n\t\t\t|      parca ekledik.Deneyebilir ve kendinize uygun oldugunu dusundugunuz\t|\n\t\t\t|\t    bir tanesini secebilirsiniz.Kapatmak da bir tercih tabi...\t\t|\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");	
	
	printf("\n\n\n\t\t\t    Dilerseniz 1. parcadan baslayalim.Kapatmak icin 'sessiz' yazmaniz yeterli\n");																	
	printf("\n\n\n\n\n\t\t\t\t\t\t\t      >> ");	
		//////////////////////////////////////////////////////////////////////////
		sec:																	//
		msc=fopen("music_list.txt","w");										//
		scanf("%s",choice.ID);													//
		fprintf(msc,"Secili Muzik: %s",choice.ID);								//
		fclose(msc);															//
	msc=fopen("music_list.txt","r");											//			Burada struct atanarak muzik tercihinin kaydedilmesi ve sonrasinda okunmasi saglanir
	while(!feof(msc)){															//
	fscanf(msc,"%s",&choice.ID);												//
																				//
	}																			//
	fclose(msc);																//
		//////////////////////////////////////////////////////////////////////////
	char secim[10];
	if (strcmp(choice.ID, "1") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Amelie.wav"),NULL,SND_ASYNC);
		int halo;
		music_list();
		printf(BHRED);
		printf("\n\t\t  Comptine ddun Autre Ete oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "2") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Maine.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t  Maine oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;}
	if (strcmp(choice.ID, "3") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Promise.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t  Promise oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "4") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Paul.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t  Paul oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "5") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Thong.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t    Charlotte's Thong oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "6") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\FeelsLike.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t  Feels like were dying oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "7") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Innocence.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\tInnocence oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "8") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Milk.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t Milk Honey oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "9") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Rose.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t Rose Petals oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "10") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Syrup.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t        Sesame Syrup oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "11") == 0)
	{
		system("cls");
		PlaySound(TEXT("C:\\Users\\Public\\Documents\\Müzikler\\Youth.wav"),NULL,SND_ASYNC);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t   Youth oynatiliyor...");
		printf("\n\t\t\t\t  >>");
		goto sec;
	}
	if (strcmp(choice.ID, "sessiz") == 0)
	{
		system("cls");
		PlaySound(0,0,0);
		music_list();
		printf(BHRED);
		printf("\n\t\t\t   Sessize alindi...");
		printf("\n\t\t\t\t  >>");
		goto sec;	
	}
		
	if (strcmp(choice.ID, "geri") == 0)
	{
		menu();
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void starting(){																															
		system("COLOR f5");																								
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     TEST by ALOHA\n\t\t\t\t\t\t\tWelcome\n\n\n\t\t\t\t\t\t  ");	
			printf(BHCYN);																								
			printf(" ð ");																
		sleep(1);
			printf(BRED);
			printf("ð ");
		sleep(1);												// Starting ile baslangicta yuklenme ekrani hazirlanarak kullanicinin karsilanmasi amaclanmistir
			printf(BHBLU);
			printf("ð ");
		sleep(1);
			printf(BHMAG);
			printf("ð ");
		sleep(1);
			printf(BHCYN);
			printf("ð ");
		sleep(1);
			printf(BRED);
			printf("ð ");
		sleep(1);
			printf(BHBLU);
			printf("ð ");
		sleep(1);
			printf(BHMAG);				
			printf("ð ");
		sleep(1);
			printf(BHCYN);
			printf("ð ");
		sleep(1);}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fsoruekle(){
	system("CLS"); 
	system("COLOR F5");
	printf("\n\n\n\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\tYeni soru nasil eklenir?\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t\t|\tIlk olarak eklemek istediginiz soruyu giriniz.Ardindan o soru icin sun-\t|\n\t\t\t|\tmak istediginiz secenekleri ekleyiniz..\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");	
	int count = 0,n;
	char evethayir[10];
	char temp;
	fptr=fopen("newprogram.txt","r");
	if(fptr!=NULL){
					fptr=fopen("newprogram.txt","r");
							rewind(fptr);
							for(n=0;n<30;n++){
							fscanf(fptr,"%d\n",&questiontext.questionID);
							fgets(questiontext.question_text,100,fptr);
							fgets(questiontext.choiceA,100,fptr);									// Soru sayisi okunmustur
							fgets(questiontext.choiceB,100,fptr);
							fgets(questiontext.choiceC,100,fptr);
							fgets(questiontext.choiceD,100,fptr);
							fgets(questiontext.true_choice,100,fptr);
							count++;
							if(feof(fptr)){
							break;}
							}
				fclose(fptr);}

	fptr=fopen("newprogram.txt","a");
	jump:
	//==============================================================================================================================================================================================================//
	questiontext.questionID=count;																																													//
	printf("\n\n\t\t\tBir soru giriniz\n\t\t\tSORU: ");																																								//
	fflush(stdin);																																																	//
	gets(questiontext.question_text);																																												//
	printf("\n\t\t\tA)");																																															//
	gets(questiontext.choiceA);																																														//																																		
	printf("\n\t\t\tB)");																																															//
	gets(questiontext.choiceB);																																														//																																	
	printf("\n\t\t\tC)");																//Sorularin eklenmesi aglanir.Fscanf bosluk kabul etmediginden																//
	gets(questiontext.choiceC);															//Gets kullanilmistir																										//																																		
	printf("\n\t\t\tD)");																																															//											
	gets(questiontext.choiceD);																																														//
	printf("\n\n\t\t\tSimdi bir de dogru cevap alalim:\n");																																							//
	printf("\n\t\t\t");																																																//
	gets(questiontext.true_choice);																																													//																																		
			fptr=fopen("newprogram.txt","a+");
			fprintf(fptr,"%d\n%s\n%s\n%s\n%s\n%s\n%s\n",questiontext.questionID,questiontext.question_text,questiontext.choiceA,questiontext.choiceB,questiontext.choiceC,questiontext.choiceD,questiontext.true_choice);
			fclose(fptr);																																																	

	//==============================================================================================================================================================================================================//	
		printf("\t\t\tSORUNUZ BASARIYLA EKLENDI...");
		tekrar:
		printf("\n\n\t\t\tSoru sormaya devam etmek istiyor musun?\n\t\t\t>>");
		scanf("%s",evethayir);
	//////////////////////////////////////////////////////////////
		if (strcmp(evethayir, "hayir") == 0){					//
			fclose(fptr);										//
			system ("CLS");										//
			printf("Ana menuye yonlendiriliyorsunuz...");		//
			sleep(2);											//
			menu();}											//			Kullanicidan alinan cevaba gore yonlendirme
		if (strcmp(evethayir, "evet") == 0){					//
			system("CLS");										//
			goto jump;}											//
		else{													//
			printf("hatali cevap verdiniz...");					//
			goto tekrar;}										//				
	//////////////////////////////////////////////////////////////
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fsorularigoster(){
	
		system("CLS");
	
		int count,i;
		tekrar:
		fptr=fopen("newprogram.txt","r");
		
		rewind(fptr);														//
	
	for(i=0;i<30;i++){		//for dongusu ile bastan id atanmasi yapildi	//
	fscanf(fptr,"%d\n",&questiontext.questionID);							//
	questiontext.questionID=i+1;											//
			fgets(questiontext.question_text,100,fptr);						//	Sorularin alinmasi saglanmistir
			fgets(questiontext.choiceA,100,fptr);							//
			fgets(questiontext.choiceB,100,fptr);							//
			fgets(questiontext.choiceC,100,fptr);							//
			fgets(questiontext.choiceD,100,fptr);							//
			fgets(questiontext.true_choice,100,fptr);						//
			
			if(feof(fptr)) {	// dosyanin sonuna gelindiginde donguden cikar
			break;}				//
			
			printf("\n\t\t _ _ _ _ _ _ _ _ _");													//
			printf("\n\t\t|\t\t  ");															//
			printf("\n\t\t|    %d. SORU",questiontext.questionID);								//
			printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");												//
			printf("\t\t|");																	//
			printf("\n\t\t|     Soru: %s",questiontext.question_text);							//
			printf("\t\t|\tA) %s",questiontext.choiceA);										//
			printf("\t\t|\tB) %s",questiontext.choiceB);										//			sorularin goruntulenmesi
			printf("\t\t|\tC) %s",questiontext.choiceC);										//
			printf("\t\t|\tD) %s",questiontext.choiceD);										//
			printf("\t\t|\tE) %s",questiontext.true_choice);									//
			printf("\t\t|");																	//
			printf("\n\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");	//
		}
			fclose(fptr);   //dosya okunmasinin tamamlanmasi
   		///////////////////////////////////////////////////////////////////////////////////////
   		char donut[10];
		printf("\n\tAna menuye donmek icin 'geri' yazmaniz yeterli olacaktir...Soru guncellemek isterseniz soylemeniz yeterli...");
   		printf("\n\n\t\t\t\t\t\t\t  >> ");
		
		scanf("%s",donut);														//
		if (strcmp(donut, "geri") == 0){										//
			system ("CLS");														//
			printf("Ana menuye yonlendiriliyorsunuz.Lutfen bekleyin.");			//
			sleep(1);															//
			printf("  .");														//
			sleep(1);															//
			printf("  .");														//			Kullanicidan alinan cevaba gore yonlendirme
			sleep (2);															//
			menu();}															//
		if (strcmp(donut, "guncelle") == 0){									//
			fsoruguncelle();}													//
		else{																	//
		printf("\t\t\t\t      hatali giris yaptiniz.Lutfen tekrar deneyin...");	//
		sleep (3);																//
		goto tekrar;}															//
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fsorusil(){	
	char ch;
   	int num;
   	system("CLS");
   	system("color F3");
   	int syc;
	jump:
	
	printf("\n\n\n\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\t\t\t");
	printf("\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\tSilmek istediginiz bir soru var gibi gozukuyor.O halde size yardimci\t|\n\t\t\t|\tolmak isteriz.\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\tListeden silmek istediginiz soruyu sectikten sonra bize numarasini gir-\t|\n\t\t\t|\tmeniz yeterli olacaktir.Sizi yormak istemeyiz...\t\t\t|");
	printf("\t\t\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");
	printf("\n\n\t\t      Listeye tekrar goz atmak ister misiniz?Ana menuye donmek için 'geri' yazabilirsiniz..");
	printf("\n\n\n\n\n\t\t\t\t\t\t\t>> ");
	char evethayir[10];
	char yesno[10];
	char dikkat[10];
	int count;
	scanf("%s",evethayir);
				if (strcmp(evethayir, "evet") == 0)
				{
			
					fsorularigoster();
					printf("\n\n\t\t\tSorulara iyice goz attiysaniz ve kararinizdan eminseniz sizi soyle alalim...\n\n\t\t\t");
					printf("Soru silmek istediginize emin misiniz?");
					printf("\n\n\n\n\n\t\t\t\t\t\t\t>> ");
					scanf("%s",yesno);
						if (strcmp(yesno,"evet") == 0)
						{
							system("CLS");
							goto halo;
						}
						if (strcmp(yesno,"hayir") == 0)
						{
							menu();
						}
				}
				if (strcmp(evethayir, "geri") == 0){
				
					system ("CLS");
					printf("Ana menuye yonlendiriliyorsunuz...");
					sleep(2);
					menu();}		
				if (strcmp(evethayir, "hayir") == 0)
				{
					halo:
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////																																			
																																																								//
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

					
									
		system("CLS");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSilmek Istediginiz Sorunun Numarasini Girin\t");
		printf("\n\n\t\t\t\t\t\t\t   >> ");
   		scanf("%d",&num);
   		int i;
   	 fptr=fopen("newprogram.txt","r");
	   fptrclone=fopen("newprogramclone.txt","w");
	   rewind(fptrclone);
	   rewind(fptr);
	   for(i=0;i<30;i++){										//
	   	fscanf(fptr,"%d\n",&questiontext.questionID);			//
		questiontext.questionID=i+1;							//
		fgets(questiontext.question_text,100,fptr);				//
		fgets(questiontext.choiceA,100,fptr);					//			sorular tekrar cekilerek for ile yeniden id atanmasi yapiliyor
		fgets(questiontext.choiceB,100,fptr);					//
		fgets(questiontext.choiceC,100,fptr);					//
		fgets(questiontext.choiceD,100,fptr);					//
		fgets(questiontext.true_choice,100,fptr);				//
		if(feof(fptr))											//
	  break;
	  ////////////////////////////////////////////////////////////////////////
		if(questiontext.questionID==num){
      	system("CLS");
      
		  	int onay;
		  	tekrar:
			printf(BRED "\n\n\n\n\n\n\n\n\n\n\n\t\t     Biz yine de sormak istiyoruz. %d numarali soruyu silmek istediginize emin misiniz?\n\n\t\t\t\t    Soru sonsuza kadar kaybolacak.(Uzun bir sure...)\t",questiontext.questionID);
			printf("\n\n\t\t\t\t\t\t\t >> ");
      		scanf("%s",&yesno);
				//////////////////////////////////////////////////////////////////////////////////////////////////
				if (strcmp(yesno,"evet") == 0)																	//
				{																								//
						system("CLS");																			//
						printf("\n\t\t _ _ _ _ _ _ _ _ _");														//
						printf("\n\t\t|\t\t  ");																//
						printf("\n\t\t|    %d. SORU",questiontext.questionID);									//
						printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");													//
						printf("\t\t\t|");																		//
						printf("\n\t\t\t|     %s\n",questiontext.question_text);								//
						printf("\t\t\t|\tA) %s\n",questiontext.choiceA);										//
						printf("\t\t\t|\tB) %s\n",questiontext.choiceB);										//
						printf("\t\t\t|\tC) %s\n",questiontext.choiceC);										//
						printf("\t\t\t|\tD) %s\n",questiontext.choiceD);										//					Sorunun silineceginden emin olma durumunda silinen soru gosteriliyor...
						printf("\t\t\t|\tE) %s\n",questiontext.true_choice);									//
						printf("\t\t\t|");																		//
						printf("\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");	//
						printf("\n\n\n\t\t\t\t\tSoru siliniyor.Lutfen bekleyin.");								//
						sleep(1);																				//
						printf("\t.");																			//
						sleep(1);																				//
						printf("\t.");																			//
						sleep (2);}																				//
			  		//------------------------------------------------------------------------------------------//
		  				if (strcmp(yesno,"hayir") == 0)															//
						{																						//					sorunun silinmesinden vazgecilmesi durumunda soru silme penceresine geri gidiliyor...
		  				goto jump;}		
						 
						
	  		//////////////////////////////////////////////////////////////////////////////////////////////////////
			}
		else{																					
	  		fprintf(fptrclone,"%d\n%s%s%s%s%s%s",questiontext.questionID,questiontext.question_text,questiontext.choiceA,questiontext.choiceB,questiontext.choiceC,questiontext.choiceD,questiontext.true_choice);	  	//		sorularin klon dosyaya yazilmasi saglanir.Asil amac kopyayla oncekinin degistirilmesi
			}
		}

	fclose(fptr);
	fclose(fptrclone);
	remove("newprogram.txt");
	rename("newprogramclone.txt","newprogram.txt");
	printf("soru silme basarili.Menuye yonlendiriliyorsunuz");
	sleep(2);
	menu();
	
}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fsoruguncelle(){
   	int num;
   	char onay[10];
   	char yesno[10];
   	int count;
   	printf("\n\n\t\t\t\t     Degistirmek Istediginiz Sorunun Numarasini Girin\t");
   	printf("\n\n\t\t\t\t\t\t\t   >> ");
   	scanf("%d",&num);
   	int i;
   	 fptr=fopen("newprogram.txt","r");
	   fptrclone=fopen("newprogramclone.txt","w");
	   rewind(fptrclone);
	   rewind(fptr);
	   //////////////////////
	   
	   for(i=0;i<30;i++){								//
   	fscanf(fptr,"%d\n",&questiontext.questionID);		//
	questiontext.questionID=i+1;						//
	fgets(questiontext.question_text,100,fptr);			//
	fgets(questiontext.choiceA,100,fptr);				//
	fgets(questiontext.choiceB,100,fptr);				//	Sorularin alinmasi saglanirken for ile id atanmasi yapilir
	fgets(questiontext.choiceC,100,fptr);				//
	fgets(questiontext.choiceD,100,fptr);				//
	fgets(questiontext.true_choice,100,fptr);			//
	if(feof(fptr))		//dosya sonuna gelindiginde		//
	break;				//donguyu kirar					//
      if(questiontext.questionID==num){
      	system("CLS");
      	int onay;
			printf("Degistirilmek istenen Sorunin Numarasi= %d\n",questiontext.questionID);
			printf("Degistirilmek istenen Sorunun Adi= %s\n",questiontext.question_text);
			printf("Degistirilmek istenen Sorunun A Secenegi= %s\n",questiontext.choiceA);
			printf("Degistirilmek istenen Sorunun B Secenegi= %s\n",questiontext.choiceB);
			printf("Degistirilmek istenen Sorunun C Secenegi= %s\n",questiontext.choiceC);
			printf("Degistirilmek istenen Sorunun D Secenegi= %s\n",questiontext.choiceD);
			printf("Degistirilmek istenen Sorunun E Secenegi= %s\n",questiontext.true_choice);
      		printf("Yukari Soruyu Degistirmek Istediginizi Onayliyor musunuz?(Onay= 1)\t\t--> ");
      	    scanf("%d",&onay);
      	if(onay==1){
			system("CLS");
			printf("Degistirilen Sorunin Numarasi= %d\n",questiontext.questionID);
			printf("Degistirilen Sorunun Adi= %s\n",questiontext.question_text);
			printf("Degistirilen Sorunun A Secenegi= %s\n",questiontext.choiceA);
			printf("Degistirilen Sorunun B Secenegi= %s\n",questiontext.choiceB);
			printf("Degistirilen Sorunun C Secenegi= %s\n",questiontext.choiceC);
			printf("Degistirilen Sorunun D Secenegi= %s\n",questiontext.choiceD);
			printf("Degistirilen Sorunun E Secenegi= %s\n",questiontext.true_choice);
			//Yerine gecen soru
			printf("\n\n\nAsagida yeni sorunuzu yazin?\n\n");
			printf("Degistirilen Sorunin Numarasi= %d\n",questiontext.questionID);
			printf("Degistirilen Yeni Sorunun Adi= ");
			fflush(stdin);
			gets(questiontext.question_text);
			printf("\nDegistirilen Yeni Sorunun A Secenegi= ");
			gets(questiontext.choiceA);
			printf("\nDegistirilen Yeni Sorunun B Secenegi= ");
			gets(questiontext.choiceB);
			printf("\nDegistirilen Yeni Sorunun C Secenegi= ");
			gets(questiontext.choiceC);
			printf("\nDegistirilen Yeni Sorunun D Secenegi= ");
			gets(questiontext.choiceD);
			printf("\nDegistirilen Yeni Sorunun E Secenegi= ");
			gets(questiontext.true_choice);
			fprintf(fptrclone,"%d\n%s\n%s\n%s\n%s\n%s\n%s\n",questiontext.questionID,questiontext.question_text,questiontext.choiceA,questiontext.choiceB,questiontext.choiceC,questiontext.choiceD,questiontext.true_choice);
			sleep(3);
		  }
			else{
		  fsoruguncelle();
		  }
	}
	else{
	  	fprintf(fptrclone,"%d\n%s%s%s%s%s%s",questiontext.questionID,questiontext.question_text,questiontext.choiceA,questiontext.choiceB,questiontext.choiceC,questiontext.choiceD,questiontext.true_choice);
		}
	}

	fclose(fptr);
	fclose(fptrclone);
	remove("newprogram.txt");
	rename("newprogramclone.txt","newprogram.txt");
	printf("soru guncelleme basarili.Menuye yonlendiriliyorsunuz");
	sleep(2);
	menu();
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void about(){
	system("color 03");
	system("cls");
	printf("\n\n\n\n\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
	printf("\t\t\t\t|\t\t\t\t\t\t\t|\t\t\t\n");
	printf("\t\t\t\t|\t\tTEST by Aloha Version 1.32.3\t\t|\n\t\t\t\t|\t\t\t\t\t\t\t|\t\t\t\n\t\t\t\t|    Üniversitede bir grup projesi olarak dogan Aloha,\t|\n\t\t\t\t|       yolculuguna degisime acik olmak ve kendini \t|\n\t\t\t\t|    gelistirmeye atamak seklinde bir vizyonla devam \t|");
	printf("\n\t\t\t\t|\t\t  eden sosyal bir gruptur. \t\t|\n\t\t\t\t|\t\t\t\t\t\t\t|\t\t\t\n\t\t\t\t|     Siz degerli kullanicilarimiza daha iyi hizmet \t|\n\t\t\t\t|  etmek bizim en buyuk amacimiz ve memnuniyetimizdir. \t|\n\t\t\t\t|    Instagram hesaplarimizdan bizleri takip ederek \t|\n\t\t\t\t|    bizleri destekleyebilir, gorus ve onerilerinizi \t|\n\t\t\t\t|\t\t bizimle paylasabilirsiniz.  \t\t|\n\t\t\t\t|\t\t\t\t\t\t\t|\t\n\t\t\t\t|\t @arda_yakakayi\t\t   @tolgatitizz\t\t|");
	printf("\n\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");
	printf("\n\n\t\t\t\tdevam etmek icin 'enter' a tiklayiniz...");
	getch();
	menu();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void stop(){

	char eveth[10];
		tekrar:
	system("CLS");

	printf("\n\n\n\n\n\n\n\n\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
	printf("\t\t\t\t|\t\t\t\t\t\t\t|\t\t\t\n");
	printf("\t\t\t\t|\t    Cikmak istediginize emin misiniz?\t\t|\n");
	printf("\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");
	printf("\n\n\n\n\t\t\t\t\t\t\t>> ");
	scanf("%s",&eveth);
		if (strcmp(eveth, "hayir") == 0 || strcmp(eveth, "geri") == 0 ){
			system ("CLS");
			printf("Ana menuye yonlendiriliyorsunuz...");
			sleep(2);
			menu();}
		if (strcmp(eveth, "evet") == 0){
			system("CLS");
			printf("\n\n\n\n\n\n\n\n\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
			printf("\t\t\t\t|\t\t\t\t\t\t\t|\t\t\t\n");
			printf("\t\t\t\t|\t\t    Gorusleriniz Onemli\t\t\t|\n\t\t\t\t|     Uygulamamizi oylayarak bize yardimci olabilir,\t|\n\t\t\t\t|  dahasi oneri ve sikayetlerinizi bizimle paylasarak\t|\n\t\t\t\t|\t  siz de bir gelistirici olabilirsiniz.  \t|\n\t\t\t\t|\t\t\t\t\t\t\t|\n");
			printf("\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");
			printf("\n\n\t\t\t Uygulamamizi 1'den 5'e kadar degerlendirecek olursaniz kac verirdiniz?");
			printf("\n\n\n\n\t\t\t\t\t\t\t>> ");
			scanf("%s",result.point);
				
				if (strcmp(result.point, "1") == 0){			//1puan
				system("CLS");
				srvy=fopen("surveyresults.txt","a");
				printf("\n\n\n\t\t       Bunu duydugumuza uzulduk.Kendimizi gelistirmek icin calismalara devam edecegiz.\n\n\n\t\t\t    Goruslerinizi bizimle paylasirsaniz size daha iyi hizmet edebiliriz.");
				printf("\n\n\n\n\t\t\t>> ");
				getchar();
				gets(result.comment);
				fprintf(srvy,"\n\n%s puan verildi...\nYORUM:\n%s",result.point,result.comment);
				fclose(srvy);}
				/////////////////////////////////////////
				if (strcmp(result.point, "2") == 0){		//2puan
				system("CLS");
				srvy=fopen("surveyresults.txt","a");
				printf("\n\n\n\t\t       Bunu duydugumuza uzulduk.Kendimizi gelistirmek icin calismalara devam edecegiz.\n\n\n\t\t\t    Goruslerinizi bizimle paylasirsaniz size daha iyi hizmet edebiliriz.");
				printf("\n\n\n\n\t\t\t>> ");
				getchar();
				gets(result.comment);
				fprintf(srvy,"\n\n%s puan verildi...\nYORUM:\n%s",result.point,result.comment);
				fclose(srvy);
				}
				/////////////////////////////////////////
				if (strcmp(result.point, "3") == 0){          	//3 puan
					system("CLS");
				srvy=fopen("surveyresults.txt","a");
				printf("\n\n\n\t\t       Bunu duydugumuza uzulduk.Kendimizi gelistirmek icin calismalara devam edecegiz.\n\n\n\t\t\t    Goruslerinizi bizimle paylasirsaniz size daha iyi hizmet edebiliriz.");
				printf("\n\n\n\n\t\t\t>> ");
				getchar();
				gets(result.comment);
				fprintf(srvy,"\n\n%s puan verildi...\nYORUM:\n%s",result.point,result.comment);
				fclose(srvy);
				}
				/////////////////////////////////////////
				if (strcmp(result.point, "4") == 0){		//4puan
					system("CLS");
				srvy=fopen("surveyresults.txt","a");
				printf("\n\n\n\t\t       Bunu duydugumuza uzulduk.Kendimizi gelistirmek icin calismalara devam edecegiz.\n\n\n\t\t\t    Goruslerinizi bizimle paylasirsaniz size daha iyi hizmet edebiliriz.");
				printf("\n\n\n\n\t\t\t>> ");
				getchar();
				gets(result.comment);
				fprintf(srvy,"\n\n%s puan verildi...\nYORUM:\n%s",result.point,result.comment);
				fclose(srvy);
				}
				/////////////////////////////////////////
				if (strcmp(result.point, "5") == 0){	//5puan
					system("CLS");
				srvy=fopen("surveyresults.txt","a");																		      													                                     
				printf("\n\n\n\t\t       Bunu duydugumuza ne kadar sevindik anlatamayiz.Sizin memnuniyetiniz bizim en bu-\n\t\t   yuk kazancimiz.Ancak vizyonumuz geregi asla 'olduk' demiyor,kendimizi gelistir-\n\t\t   mek icin calismalarimiza hiz kesmeden devam ediyoruz.Sizin icin daha fazlasi...\n\n\n\t\t\t    Goruslerinizi bizimle paylasirsaniz size daha iyi hizmet edebiliriz.");
				printf("\n\n\n\n\t\t\t>> ");
				getchar();
				gets(result.comment);
				fprintf(srvy,"\n\n%s puan verildi...\nYORUM:\n%s",result.point,result.comment);
				fclose(srvy);
				}
				
			system("CLS");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ADIOS\n\t\t\t\t\t\t      Tekrar bekleriz\n\n\n\t\t\t\t\t\t  ");
			printf(BHCYN);
			printf("   ð ");
			sleep(1);
			printf(BRED);
			printf("ð ");
			sleep(1);
			printf(BHBLU);
			printf("ð ");
			sleep(1);
			printf(BHMAG);
			printf("ð ");						//yorumlar ve puanlama alinarak cikis sayfasina ulasilir.Yukleme ile kullaniciya veda edilir
			sleep(1);
			printf(BHCYN);
			printf("ð ");
			sleep(1);
			printf(BRED);
			printf("ð ");
			sleep(1);
			printf(BHBLU);
			printf("ð ");
			sleep(1);
			printf(BHMAG);
			printf("ð ");
			sleep(1);
			printf(BHCYN);
			printf("ð ");
			sleep(1);
			exit(0);}   
			else{
			printf("\t\t\t\t      hatali giris yaptiniz.Lutfen tekrar deneyin...");
			sleep (3);
			goto tekrar;
			}
			}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu(){
	system("CLS");
	system("COLOR F2");
	int count = 0;
	int size,n;
						//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						fptr=fopen("newprogram.txt","r");																									//
						if(fptr!=NULL){																														//
										fptr=fopen("newprogram.txt","r");																					//
												rewind(fptr);																								//
												for(n=0;n<30;n++){																							//
												fscanf(fptr,"%d\n",&questiontext.questionID);																//
												questiontext.questionID=n+1;																				//
												fgets(questiontext.question_text,100,fptr);																	//
												fgets(questiontext.choiceA,100,fptr);																		//
												fgets(questiontext.choiceB,100,fptr);																		//
												fgets(questiontext.choiceC,100,fptr);																		//
												fgets(questiontext.choiceD,100,fptr);																		//			Soru bilgileri menunun sag ustunde verilir.
												fgets(questiontext.true_choice,100,fptr);																	//
												count++;																									//
												if(feof(fptr)){																								//
												break;}																										//
												}																											//
									fclose(fptr);																											//
									printf(BHMAG"\n\t\t\t\t\t\t\t\t\t\t\t\tSistemdeki Soru Sayiniz\n\t\t\t\t\t\t\t\t\t\t\t\t         %d         ",count-1);	//
									}																														//
						else{																																//
						printf(BRED"\n\t\t\t\t\t\t\t\t\t\t\tSoru bilgisine ulasilamiyor\n\t\t\t\t\t\t\t\t\t\t     soru eklemek isteyebilirsiniz...");}		//
						//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
																																		
	printf(BHGRN"\n\n\n\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");						
	printf("\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\tAloha!!Sizi bekliyorduk..TEST'e hosgeldiniz.Sabirsizlaniyor ve bek-\t|\n\t\t\t|\tlemek istemiyorsaniz menuyu inceleyebilir ve listeden yapmak iste-\t|\n\t\t\t|\tdeginiz islemi secebilirsiniz.Ancak baslamadan once sizin icin ha-\t|\n\t\t\t|\t   zirlamis oldugumuz bilgilendirme kismina bakmanizi oneriyoruz.\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t Size güveniyoruz.\t\t\t\t|\n\t\t\t|\t  Ancak bizim icin degerlisiniz ve zorluk cekmenizi istemiyoruz..\t|\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");
	printf("\n\n\t\t\tListeden bir islem seciniz...");

	printf("\n\t\t\t    1-Müzik dinlemek ister misiniz?\n\t\t\t    2-Soru ekle\n\t\t\t    3-Sorulari listele ve güncelle \n\t\t\t    4-Soru sil \n\t\t\t    5-Oyuna Var misin? \n\t\t\t    6-Rakiplerim kim?\n\t\t\t    7-Hakkimizda\n\t\t\t    8-Cikis");
	int a;
	printf("\n\n\t\t\t\t\t\t\t      >> ");
	scanf("%d",&a);
	int i;
					//////////////////////////////////////////////////////////////
					switch(a){													//
						case 1:													//
						Musicplayer();											//
						break;													//
						case 2:													//
						fsoruekle();											//
						break;													//
						case 3:													//
						system("CLS");											//
						system("COLOR F6");										//
						printf("Sorular Yuklenirken Lutfen Bekleyin .");		//
						sleep(1);												//
						printf("  .");											//
						sleep(1);												//			Menu fonskiyonlari atanmistir.Girilen numaraya göre fonksiyon calisir
						printf("  .");											//
						fsorularigoster();										//
						break;													//													
						case 4:													//
						fsorusil();												//
						break;													//
						case 5:													//
						foyunoyna();											//
						break;													//
						case 6:													//
						fscores();												//
						break;													//
						case 7:													//
						about();												//
						break;													//
						case 8:													//
						stop();													//
					}															//
				//////////////////////////////////////////////////////////////////
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void frandomsayilar(){
	
	///////////////////Random soru sayisi almak icin yazilmistir.Soru sayisi tanýmlaniyor.Count degerine ataniyor
	
  int count = 0;
	int size,n;
	fptr=fopen("newprogram.txt","r");
	if(fptr!=NULL){
							rewind(fptr);
							for(n=0;n<30;n++){
							fscanf(fptr,"%d\n",&questiontext.questionID);
							questiontext.questionID=n+1;
							fgets(questiontext.question_text,100,fptr);
							fgets(questiontext.choiceA,100,fptr);
							fgets(questiontext.choiceB,100,fptr);
							fgets(questiontext.choiceC,100,fptr);
							fgets(questiontext.choiceD,100,fptr);
							fgets(questiontext.true_choice,100,fptr);
							if(feof(fptr)){
							break;}
							count++;
							}
						}
				fclose(fptr);

	/////////////////////////////////////////////////////////////////////////////////
		fptrjedi=fopen("randomint.txt","w");
		
		int i,j,k,x,y,z;
    srand(time(0));
    	j=1+rand()%count;
    	fprintf(fptrjedi,"%d\n",j);
		jump:
    	k=1+rand()%count;
    	if(k==j){
    		goto jump;
		}
		fprintf(fptrjedi,"%d\n",k);
		jumpx:
    	x=1+rand()%count;
    	if(x==j||x==k){
    		goto jumpx;											//1 ile soru sayisi arasinda 5 sayi olusturularak oyun kisminda random sorular olusturulmasi saglanmistir.
		}
		fprintf(fptrjedi,"%d\n",x);
		jumpy:
    	y=1+rand()%count;
    	if(y==k||y==j||y==x){
    		goto jumpy;
		}
		fprintf(fptrjedi,"%d\n",y);
		jumpz:
    	z=1+rand()%count;
    	if(z==j||z==k||z==x||z==y){
    		goto jumpz;
		}
		fprintf(fptrjedi,"%d\n",z);
		fclose(fptrjedi);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fquestions(){
		frandomsayilar();
	int i,j,randint;
	fptr=fopen("newprogram.txt","r");
	fptrjedi=fopen("randomint.txt","r");
	rewind(fptr);
	rewind(fptrjedi);
	fptrdroid=fopen("questions.txt","w");
	for(i=0;i<50;i++){
		fscanf(fptrjedi,"%d\n",&randint);
		rewind(fptr);
		for(j=0;j<50;j++){
	fscanf(fptr,"%d\n",&questiontext.questionID);
	questiontext.questionID=j+1;
	fgets(questiontext.question_text,100,fptr);
	fgets(questiontext.choiceA,100,fptr);
	fgets(questiontext.choiceB,100,fptr);							//randomsayilar fonksiyonunda belirlenen sayilarla soru id leri eslenip 5 tane rastgele soru olusturulmasi saglaniyor
	fgets(questiontext.choiceC,100,fptr);
	fgets(questiontext.choiceD,100,fptr);
	fgets(questiontext.true_choice,100,fptr);
	if(questiontext.questionID==randint){
		fprintf(fptrdroid,"%s%s%s%s%s%s",questiontext.question_text,questiontext.choiceA,questiontext.choiceB,questiontext.choiceC,questiontext.choiceD,questiontext.true_choice);
	}
		}
	if(feof(fptrjedi))
		break;
	}
	fclose(fptr);
	fclose(fptrjedi);
	fclose(fptrdroid);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fscores(){
	system("CLS");
	fptrsith=fopen("scores.txt","r");
	int i,j,k,l,m=0,p=0;
	char ID[20];
	for(i=0;i<100;i++){
	fgets(IDscore[i].ID,20,fptrsith);
	fscanf(fptrsith,"%d",&IDscore[i].score);
	if(feof(fptrsith))
	break;
	}
	fclose(fptrsith);
	//
	for(j = 0; j<i-1; j++)
    {
        for(k=0;k<i-j-1;k++)
        {
            if (IDscore[k].score > IDscore[k+1].score)
            {																	//Bubble sort ile skorlarin sýralanmasi saglanmistir 
                IDscoreclone = IDscore[k];
                IDscore[k] = IDscore[k+1];
                IDscore[k+1] = IDscoreclone;
            }
        }
    }
	printf(BHGRN"\n\n\n\t\t\t\t\t\t     =En Yuksek Skorlar=");
for(;i>=0;i--){
	if(strlen(IDscore[i].ID)!=0){
		if(IDscore[i].score!=0){
	printf(BHBLK"\n\n\n\n\t\t\t\t\t =>\t%d-)  Kullanici ID: %s    \n\t\t\t\t\t\t\tPuan: %d\n",m,IDscore[i].ID,IDscore[i].score);
	}
	m++;
	p++;
}
}
getch();
 menu();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void foyunoyna(){
	tekrar:
	system ("COLOR F1");
	system("CLS");
	char AccID[20];
	char varmisin[10];
	int sml =1 ;
	int dogru1,dogru2,dogru3,dogru4,dogru5;
	printf("\n\n\n\n\n\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t Oyuna Hosgeldiniz\t\t\t\t|\n\t\t\t|\tAloha ailesi olarak memnuniyetiniz kadar eglenmeniz de bizim icin\t|\n\t\t\t|      onemli.O nedenle sizin icin kucuk bir oyun hazirladik.Sozu uzatmadan\t|\n\t\t\t|\t\t\t\t      soralim.\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t Oyuna var misiniz?\t\t\t\t|\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");	
	printf("\n\n\t\t\t\t\t\t\t      >> ");
	scanf("%s",varmisin);
	if (strcmp(varmisin, "hayir") == 0){
	
	
		system ("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Tekrar bekleriz...");
		sleep (3);
		menu();}
		
	if (strcmp(varmisin, "evet") == 0){
	system ("cls");
	printf("\n\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|\n\t\t\t|\tAncak oncesinde hakkinda bilgilendirmek istedigimiz konular var. \t|");
	printf("\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|");
	printf("\n\t\t\t|\t 1-Oyunumuz bilgi sinamaya yonelik olup 5 sorudan olusmaktadir\t\t|");
	printf("\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|");
	printf("\n\t\t\t|\t2-Bu sorulari cevaplamak icin sureniz olacak.5 saniye icerisinde \t|");
	printf("\n\t\t\t|\t    	dogru cevaplamaniz halinde ekstra puan alacaksiniz.\t\t|");
	printf("\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|");
	printf("\n\t\t\t|	3-Her bir dogru cevap icin puan alirken yanlis cevaplar icin puan \t|");
	printf("\n\t\t\t|				  alamayacaksiniz.\t\t\t\t|");
	printf("\n\t\t\t|\t\t\t\t\t\t\t\t\t\t|");
	printf("\n\t\t\t|        Oyunun keyfini cikarmanizi istiyoruz.Dolayisiyla dogru cevaplar\t|");
	printf("\n\t\t\t|\t     5icin aldiginiz puanlar oyun sonuna kadar bizde kalacak.\t\t|\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");

}
	else{
	printf("\t\t\t\t      hatali giris yaptiniz.Lutfen tekrar deneyin...");
	sleep (3);
	goto tekrar;
	}
	printf("\n\n\n\n\t\t\t\t\t\t     Bir Kullanici Adi Girin\n");
	printf("\n\n\t\t\t\t\t\t\t >> ");
	scanf("%s",AccID);
	printf("\n\n\t\t\t\t\t\t       Oyun Baslamak Uzere");
	printf("\n\t\t\t\t\t\t\t    %c ",sml);
	sleep(1);
	printf("%c ",sml);
	sleep(1);
	printf("%c ",sml);
	sleep(1);
	printf("%c ",sml);
	sleep(1);
	printf("%c ",sml);
	sleep(1);
	fquestions();
	char cevap[5],evethayir[10];
	int i,j=1,Accpoint=0;
	    srand(time(0));
	fptrdroid=fopen("questions.txt","r");
	rewind(fptrdroid);
	for(i=0;i<5;i++){
	   						fgets(questiontext.question_text,100,fptrdroid);
							fgets(questiontext.choiceA,100,fptrdroid);
							fgets(questiontext.choiceB,100,fptrdroid);
							fgets(questiontext.choiceC,100,fptrdroid);
							fgets(questiontext.choiceD,100,fptrdroid);
							fgets(questiontext.true_choice,100,fptrdroid);
							if(feof(fptrdroid))
							break;

	system("CLS");
		
//=================================================================================================================================	//		
		int i;																														//												
    	i=1+rand()%5;																												//
    	if(i==1){																													//
			dogru1=100;																												//
			sans1:																													//
			printf("\n\t\t _ _ _ _ _ _ _ _ _");																						//				 seceneklerin karistirilmasi saglanmistir.
			printf("\n\t\t|\t\t  ");																								//
			printf("\n\t\t|");																										//
			printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");																					//
			printf("\t\t\t|");
			printf("\n\t\t\t|     %s\n",questiontext.question_text);
    		printf("\t\t\t|\tA) %s\n",questiontext.true_choice);
    		printf("\t\t\t|\tB) %s\n",questiontext.choiceB);
    		printf("\t\t\t|\tC) %s\n",questiontext.choiceC);
    		printf("\t\t\t|\tD) %s\n",questiontext.choiceD);
    		printf("\t\t\t|\tA) %s\n",questiontext.choiceA);
    		printf("\t\t\t|");
			printf("\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    		printf("\n\nCevabiniz Nedir?\n");
    		printf("Cevap: ");
    		scanf("%s",&cevap);
    		if(strcmp("A",cevap) == 0||strcmp("a",cevap) == 0){
    			Accpoint = Accpoint+dogru1;
    			printf("\tSonraki Soruda Bol Sans :)");
			}
			else{
				Accpoint= Accpoint-20;
				dogru1=dogru1/2;
				printf("\tMalesef cevabiniz yanlis Tekrar denemek ister misiniz?:(\n");
				sleep (2);
				system("cls");
				goto sans1;
			}
		}
		if(i==2){
			dogru2=100;
			sans2:
			printf("\n\t\t _ _ _ _ _ _ _ _ _");
			printf("\n\t\t|\t\t  ");
			printf("\n\t\t|");
			printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");
			printf("\t\t\t|");
			printf("\n\t\t\t|     %s\n",questiontext.question_text);
			printf("\t\t\t|\tA) %s\n",questiontext.choiceB);
    		printf("\t\t\t|\tB) %s\n",questiontext.true_choice);
    		printf("\t\t\t|\tC) %s\n",questiontext.choiceD);
    		printf("\t\t\t|\tD) %s\n",questiontext.choiceA);
    		printf("\t\t\t|\tE) %s\n",questiontext.choiceC);
    		printf("\t\t\t|");
			printf("\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
			printf("\n\nCevabiniz Nedir?\n");
    		printf("Cevap: ");
    		scanf("%s",&cevap);
    		if(strcmp("B",cevap) == 0||strcmp("b",cevap) == 0){
    			Accpoint=Accpoint+dogru2;
    			printf("\tSonraki Soruda Bol Sans :)");
			}
			else{
				Accpoint=Accpoint-20;
				dogru2=dogru2/2;
				printf("\tMalesef cevabiniz yanlis Tekrar denemek ister misiniz?:(\n");
				sleep (2);
				system("cls");
				goto sans2;
			}
		}
		if(i==3){
			dogru3=100;
			sans3:
			printf("\n\t\t _ _ _ _ _ _ _ _ _");
			printf("\n\t\t|\t\t  ");
			printf("\n\t\t|");
			printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");
			printf("\t\t\t|");
			printf("\n\t\t\t|     %s\n",questiontext.question_text);
			printf("\t\t\t|\tA) %s\n",questiontext.choiceC);
    		printf("\t\t\t|\tB) %s\n",questiontext.choiceB);
    		printf("\t\t\t|\tC) %s\n",questiontext.true_choice);
    		printf("\t\t\t|\tD) %s\n",questiontext.choiceD);
    		printf("\t\t\t|\tE) %s\n",questiontext.choiceA);
    		printf("\t\t\t|");
			printf("\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
			printf("\n\nCevabiniz Nedir?\n");
    		printf("Cevap: ");
    		scanf("%s",&cevap);
    		if(strcmp("C",cevap) == 0||strcmp("c",cevap) == 0){
    			Accpoint=Accpoint+dogru3;
    			printf("\tSonraki Soruda Bol Sans :)");
			}
			else{
				Accpoint=Accpoint-20;
				dogru3=dogru3/2;
				printf("\tMalesef cevabiniz yanlis Tekrar denemek ister misiniz?:(\n");
				sleep(2);
				system("cls");
				goto sans3;
				
			}
		}
		if(i==4){
			dogru4=100;
			sans4:
			printf("\n\t\t _ _ _ _ _ _ _ _ _");
			printf("\n\t\t|\t\t  ");
			printf("\n\t\t|");
			printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");
			printf("\t\t\t|");
			printf("\n\t\t\t|     %s\n",questiontext.question_text);
			printf("\t\t\t|\tA) %s\n",questiontext.choiceC);
    		printf("\t\t\t|\tB) %s\n",questiontext.choiceA);
    		printf("\t\t\t|\tC) %s\n",questiontext.choiceD);
    		printf("\t\t\t|\tD) %s\n",questiontext.true_choice);
    		printf("\t\t\t|\tE) %s\n",questiontext.choiceB);
    		printf("\t\t\t|");
			printf("\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
			printf("\n\nCevabiniz Nedir?\n");
    		printf("Cevap: ");
    		scanf("%s",&cevap);
    		if(strcmp("D",cevap) == 0||strcmp("d",cevap) == 0){
    			Accpoint=Accpoint+dogru4;
    			printf("\tSonraki Soruda Bol Sans :)");
			}
			else{
				Accpoint=Accpoint-20;
				dogru4=dogru4/2;
				printf("\tMalesef cevabiniz yanlis Tekrar denemek ister misiniz?:(\n");
				sleep(2);
				system ("cls");
				goto sans4;
			}
		}
		if(i==5){
			dogru5=100;
			sans5:
			printf("\n\t\t _ _ _ _ _ _ _ _ _");
			printf("\n\t\t|\t\t  ");
			printf("\n\t\t|");
			printf("\n\t\t|_ _ _ _ _ _ _ _ _\n");
			printf("\t\t\t|");
			printf("\n\t\t\t|     %s\n",questiontext.question_text);
			printf("\t\t\t|\tA) %s\n",questiontext.choiceD);
    		printf("\t\t\t|\tB) %s\n",questiontext.choiceA);
    		printf("\t\t\t|\tC) %s\n",questiontext.choiceB);
    		printf("\t\t\t|\tD) %s\n",questiontext.choiceC);
    		printf("\t\t\t|\tE) %s\n",questiontext.true_choice);
    		printf("\t\t\t|");
			printf("\n\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
			printf("\n\nCevabiniz Nedir?\n");
    		printf("Cevap: ");
    		scanf("%s",&cevap);
    		if(strcmp("E",cevap) == 0||strcmp("e",cevap) == 0){
    			Accpoint = Accpoint+dogru5;
    			printf("\tSonraki Soruda Bol Sans :)");
			}
			else{																																		//
				Accpoint=Accpoint-20;																													//
				dogru5=dogru5/2;																														//
				printf("\tMalesef cevabiniz yanlis Tekrar denemek ister misiniz?:(\n");																	//
				sleep(2);																																//
				system("cls");																															//
				goto sans5;																																//
			}																																			//
		}																																				//																							
	//==================================================================================================================================================//	
		j++;
		sleep(2);
	}
		fclose(fptrdroid);
		scr=fopen("scores.txt","a");
		fprintf(scr,"%s\n",AccID);
		fprintf(scr,"%d\n",Accpoint);
		fclose(scr);
    	printf("\tToplam Puaniniz: %d\n",Accpoint);
		sleep(3);
		system("CLS");
		printf("\tTum Sorulari Cevapladin\n\n");
		printf("\tSon Bir Soru\n");
		sleep(1);
		printf("\tBir Oyuna Daha Var Misin?\n\tCevap: ");
		scanf("%s",&evethayir);
		if(strcmp("evet",evethayir) == 0){
			system("CLS");
			printf("Sonraki Oyununuz Baslamak Uzere ");
			sleep(3);
			foyunoyna();
		}
		else{
			system("Cls");
			printf("Menuye Donuyorsunuz.");	
		sleep(1);
		printf(" .");
		sleep(1);
		printf(" .");
		}
		menu();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

