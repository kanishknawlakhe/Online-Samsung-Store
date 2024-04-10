
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

//samsung class
class samsung
{
	public:
			myfun1()
			{
				cout<<"\n\n\t\tThanks for shopping.";
			}
		
};

//mobile samsung sub class
class mobile:public samsung
{
	public:
	int ch,model,storage,shop;
	char a=6;
	
	mob()
	{		
		cout<<"\n\tMobile series are -";
		cout<<"\n\t\t\t1 : Galaxy S series";
		cout<<"\n\t\t\t2 : Galaxy Z series";
		cout<<"\n\t\t\t3 : Galaxy A series";
		cout<<"\n\t\t\t4 : Galaxy M series";
		cout<<"\n\t\t\t5 : Galaxy F series";
		cout<<"\n\n\tchoose your mobile series according to the numbers = ";
		cin>>ch;
		switch(ch)
		{
			
			case 1:
				{
					//galaxy s series
					cout<<"\n\tYou have choise a S series.";
					cout<<"\n\n\t"<<a<<" S series is the most popular series in samsung mobiles. "<<a;
					cout<<"\n\n\t\t\t    Aviable mobile of S series.";
					cout<<"\n\t\t|-----------------------------------------------|";
					cout<<"\n\t\t|\tNo.\t|\t      Model\t\t|";
					cout<<"\n\t\t|---------------|-------------------------------|";
					cout<<"\n\t\t|\t1\t|\tGalaxy S23 Ultra\t|";
					cout<<"\n\t\t|---------------|-------------------------------|";
					cout<<"\n\t\t|\t2\t|\t   Galaxy S23 \t\t|";
					cout<<"\n\t\t|---------------|-------------------------------|";
					cout<<"\n\t\t|\t3\t|\tGalaxy S22 Ultra\t|";
					cout<<"\n\t\t|---------------|-------------------------------|";
					cout<<"\n\t\t|\t4\t|\t   Galaxy S22 \t\t|";
					cout<<"\n\t\t|---------------|-------------------------------|";
					cout<<"\n\t\t|\t5\t|\tGalaxy S21 FE 5G\t|";
					cout<<"\n\t\t|---------------|-------------------------------|";
					cout<<"\n\t\t|\t6\t|\tGalaxy S20 FE 5G\t|";
					cout<<"\n\t\t|-----------------------------------------------|";
					cout<<"\n\n\t\tPlease select a mobile which you want to purchase = ";
					cin>>model;
					switch(model)
					{
						case 1:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy S23 Ultra. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 256 GB.";
								cout<<"\n\t\t2 : 512 GB.";
								cout<<"\n\t\t3 : 1 TB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,24,999 RS.";	
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 512 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,34,999 RS.";
								}
								else if(3==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 1 TB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,54,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy S23 ultra visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-s23-ultra/";
								break;
							}
						case 2:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy S23. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 128 GB.";
								cout<<"\n\t\t2 : 256 GB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 128 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 74,999 RS.";	
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 79,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy S23 visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-s23/buy/";
								break;
							}
						case 3:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy S22 Ultra. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 256 GB.";
								cout<<"\n\t\t2 : 512 GB.";
								cout<<"\n\t\t3 : 1 TB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,09,999 RS.";	
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 512 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,18,999 RS.";
								}
								else if(3==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 1 TB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,25,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy S23 ultra visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-s22-ultra/";
								break;
							}
						case 4:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy S22. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 128 GB.";
								cout<<"\n\t\t2 : 256 GB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 128 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 52,999 RS.";	
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 62,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy S23 ultra visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-s22/";
								break;
							}
						case 5:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy S21 FE 5G. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 128 GB.";
								cout<<"\n\t\t2 : 256 GB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 128 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 54,999 RS.";	
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 58,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy S23 ultra visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-s21-5g/galaxy-s21-fe-5g/";
								break;
							}
						case 6:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy S20 FE 5G. "<<a;
								cout<<"\n\n\t\tOnly 1 option is avialable is 128 GB.";
								cout<<"\n\n\t\tIt will cost you on officila website - 54,999 RS.";
								cout<<"\n\n\t\tKnow more about samsung galaxy S23 ultra visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-s/galaxy-s20-fe-5g-cloud-mint-128gb-sm-g781bzggins/";
								break;
							}
					}
					break;
				}
				case 2:
					{
						//galaxy s series
						cout<<"\n\tYou have choise a S series.";
						cout<<"\n\n\t"<<a<<" F series is the most popular series in fold & flip samsung mobiles. "<<a;
						cout<<"\n\n\t\t\t    Aviable mobile of F series.";
						cout<<"\n\t\t|-----------------------------------------------|";
						cout<<"\n\t\t|\tNo.\t|\t      Model\t\t|";
						cout<<"\n\t\t|---------------|-------------------------------|";
						cout<<"\n\t\t|\t1\t|\tGalaxy Z Fold 4\t\t|";
						cout<<"\n\t\t|---------------|-------------------------------|";
						cout<<"\n\t\t|\t2\t|\tGalaxy Z Flip 4\t\t|";
						cout<<"\n\t\t|---------------|-------------------------------|";
						cout<<"\n\t\t|\t3\t|\tGalaxy Z Fold 3 5G\t|";
						cout<<"\n\t\t|---------------|-------------------------------|";
						cout<<"\n\t\t|\t4\t|\tGalaxy Z Flip 3 5G\t|";
						cout<<"\n\t\t|---------------|-------------------------------|";
						cout<<"\n\n\t\tPlease select a mobile which you want to purchase = ";
					cin>>model;
					switch(model)
					{
						case 1:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy Z Fold 4. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 256 GB.";
								cout<<"\n\t\t2 : 512 GB.";
								cout<<"\n\t\t3 : 1 TB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,54,999 RS.";	
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 512 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,64,999 RS.";
								}
								else if(3==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 1 TB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 1,74,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy Galaxy Z Fold 4 visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-z-fold4/";
								break;
							}
						case 2:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy Z Flip 4. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 128 GB.";
								cout<<"\n\t\t2 : 256 GB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 128 GB."<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 89,999 RS.";
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 94,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy Galaxy Z Flip 4 visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-z-flip4/";
								break;
							}
						case 3:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy Z Fold 3 5G. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 256 GB.";
								cout<<"\n\t\t2 : 512 GB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB."<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 97,999 RS.";
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 512 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 99,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy Galaxy Z Flip 4 visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-z-fold3-5g/";
								break;
							}
						case 4:
							{
								cout<<"\n\t\t"<<a<<" Your mobile is Galaxy Z Flip 3 5G. "<<a;
								cout<<"\n\n\t\tPlease select your your mobile storage.";
								cout<<"\n\n\t\t1 : 128 GB.";
								cout<<"\n\t\t2 : 256 GB.";
								cout<<"\n\n\t\tEnter your storage = ";
								cin>>storage;
								if(1==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 128 GB."<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 47,999 RS.";
								}
								else if(2==storage)
								{
									cout<<"\n\n\t\t"<<a<<" You have selected mobile storage is 256 GB. "<<a;
									cout<<"\n\n\t\tIt will cost you on officila website - 59,999 RS.";
								}
								else
								{
									cout<<"\n\t\tWrong input.";
								}
									cout<<"\n\n\t\tKnow more about samsung galaxy Galaxy Z Flip 4 visit on our officila website. - \n\n\t\t\thttps://www.samsung.com/in/smartphones/galaxy-z-flip3-5g/";
								break;
							}
					}
						break;
					}
			case 3:
				{
					cout<<"\n\tYou have choise a A series.";
					cout<<"\n\n\tThere are many option avilable in A series mobile.";
					cout<<"\n\n\t\tSo, visit our officila website. - \n\n\t\thttps://www.samsung.com/in/smartphones/galaxy-a/";
					break;
				}
			case 4:
				{
					cout<<"\n\tYou have choise a M series.";
					cout<<"\n\n\tThere are many option avilable in M series mobile.";
					cout<<"\n\n\t\tSo, visit our officila website. - \n\n\t\thttps://www.samsung.com/in/smartphones/galaxy-m/";
					break;
				}
			case 5:
				{
					cout<<"\n\tYou have choise a F series.";
					cout<<"\n\n\tThere are many option avilable in F series mobile.";
					cout<<"\n\n\t\tSo, visit our officila website. - \n\n\t\thttps://www.samsung.com/in/smartphones/galaxy-f/";
					break;
				}
		}
		myfun1();
	
}
};

class laptop : public samsung
{
	public:
		int ch,varient;
		char a=6,f=16;
		int g,gen,r,ram,s,sto,p,pro;
		lap()
		{		
				cout<<"\n\tLaptop series are -";
				cout<<"\n\t\t\t1 : Galaxy Book 3 series.";
				cout<<"\n\t\t\t5 : Galaxy Book 2 series.";
				cout<<"\n\n\tchoose your laptop series according to the numbers. = ";
				cin>>ch;
				switch(ch)
				{
					case 1:
						{
							cout<<"\n\t"<<a<<" You have choise a Galaxy Book 3 series. "<<a;
							cout<<"\n\n\tAvilable varients of Galaxy Book 3 series. - ";
							cout<<"\n\t\t+-----------------------------------------------+";
							cout<<"\n\t\t|\tNo.\t|\t      Model\t\t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t1\t|\t  Galaxy Book 3.  \t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t2\t|\tGalaxy Book 3 Pro. \t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t3\t|\tGalaxy Book 3 360. \t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t4\t|     Galaxy Book 3 Pro 360.\t|";
							cout<<"\n\t\t+-----------------------------------------------+";
							cout<<"\n\n\t\tPlease select a laptop which you want to purchase. = ";
							cin>>varient;
							switch(varient)
							{
								case 1:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 3 varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==8)&&(sto==512)&&(pro==5))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 MRP (Inclusive of all taxes). - 74,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==5))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 MRP (Inclusive of all taxes). - 79,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 MRP (Inclusive of all taxes). - 89,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3/buy/";
										}
										break;
									}
								case 3:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 3 360 varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 360 MRP (Inclusive of all taxes). - 1,22,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										else if((ram==16)&&(sto==1)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" TB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 360 MRP (Inclusive of all taxes). - 1,38,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										break;
									}
								case 4:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 3 PRO 360 varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==16)&&(sto==512)&&(pro==5))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3 PRO 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 PRO 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 PRO 360MRP (Inclusive of all taxes). - 1,55,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3 PRO 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 PRO 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 360 MRP (Inclusive of all taxes). - 1,63,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										break;
									}
								case 2:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 3 PRO varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3 PRO. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 PRO specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 PRO MRP (Inclusive of all taxes). - 1,498,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										else if((ram==16)&&(sto==1)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 3 PRO. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 3 PRO specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" TB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 3 PRO MRP (Inclusive of all taxes). - 1,65,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book3-pro/buy/";
										}
										break;
									}
									//
									break;
							}
							break;
						}
					case 2:
						{
							cout<<"\n\t"<<a<<" You have choise a Galaxy Book 2 series. "<<a;
							cout<<"\n\n\tAvilable varients of Galaxy Book 2 series. - ";
							cout<<"\n\t\t|-----------------------------------------------|";
							cout<<"\n\t\t|\tNo.\t|\t      Model\t\t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t1\t|\t  Galaxy Book 2  \t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t2\t|\tGalaxy Book 2 Pro \t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t3\t|\tGalaxy Book 2 360 \t|";
							cout<<"\n\t\t|---------------|-------------------------------|";
							cout<<"\n\t\t|\t4\t|     Galaxy Book 2 Pro 360\t|";
							cout<<"\n\t\t|-----------------------------------------------|";
							cout<<"\n\n\t\tPlease select a laptop which you want to purchase = ";
							cin>>varient;
							switch(varient)
							{
								case 1:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 2 varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													cout<<"\n\n\t\tThere are two generation of i5 processor. - ";
													cout<<"\n\t\t\t+------+------------------+";
													cout<<"\n\t\t\t|  No. |    Generation.   |";
													cout<<"\n\t\t\t|------|------------------|";
													cout<<"\n\t\t\t|  1.  |     i3-1235U.    |";
													cout<<"\n\t\t\t|------|------------------|";
													cout<<"\n\t\t\t|  2.  |     i5-1240P.    |";
													cout<<"\n\t\t\t+------+------------------+";
													cout<<"\n\n\t\tEnter processor generation according to number = ";
													cin>>g;
													switch(g)
													{
														case 1:
															{
																gen=51;
																break;
															}
														case 2:
															{
																gen=52;
																break;
															}
													}
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==8)&&(sto==512)&&(gen==51))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<"-1235U | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 MRP (Inclusive of all taxes). - 62,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2/buy/";
										}
										else if((ram==16)&&(sto==512)&&(gen==51))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<"-1235U | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 MRP (Inclusive of all taxes). - 66,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2/buy/";
										}
										else if((ram==8)&&(sto==256)&&(gen==51))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<"-1235U | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 MRP (Inclusive of all taxes). - 58,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2/buy/";
										}
										else if((ram==8)&&(sto==512)&&(gen==52))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<"-1240P | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 MRP (Inclusive of all taxes). - 76,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 MRP (Inclusive of all taxes). - 76,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2/buy/";
										}
										break;
									}
								case 2:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 2 PRO varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==16)&&(sto==512)&&(pro==5))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2 PRO. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 PRO specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 PRO MRP (Inclusive of all taxes). - 95,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-pro/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2 PRO. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 PRO specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 PRO MRP (Inclusive of all taxes). - 1,06,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-pro/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-pro/buy/";
										}
										break;
									}
								case 3:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 2 360 varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==16)&&(sto==512)&&(pro==5))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 360 MRP (Inclusive of all taxes). - 91,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-360/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 360 MRP (Inclusive of all taxes). - 1,00,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-360/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-360/buy/";
										}
										break;
									}
								case 4:
									{
										cout<<"\n\n\t\t"<<a<<" You have choise a Galaxy Book 2 PRO 360 varient. "<<a;
										cout<<"\n\n\t\tPlease select your specification.";
										cout<<"\n\n\t\tRAM space. - ";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\t\t\t|  No. |    GB.   |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  1.  |   8 GB.  |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  2.  |   16 GB. |";
										cout<<"\n\t\t\t|------|----------|";
										cout<<"\n\t\t\t|  3.  |   32 GB. |";
										cout<<"\n\t\t\t+------+----------+";
										cout<<"\n\n\t\tEnter RAM space accoring to number. = ";
										cin>>r;
										//RAM space switch
										switch(r)
										{
											case 1:
												{
													ram=8;
													break;
												}
											case 2:
												{
													ram=16;
													break;
												}
											case 3:
												{
													ram=32;
													break;
												}
											break;
										}
										cout<<"\n\n\t\tStorage space. - ";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\t\t\t|  No. |    GB & TB.   |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  1.  |    256 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  2.  |    512 GB.    |";
										cout<<"\n\t\t\t|------|---------------|";
										cout<<"\n\t\t\t|  3.  |      1 TB.    |";
										cout<<"\n\t\t\t+------+---------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>s;
										//RAM space switch
										switch(s)
										{
											case 1:
												{
													sto=256;
													break;
												}
											case 2:
												{
													sto=512;
													break;
												}
											case 3:
												{
													sto=1;
													break;
												}
											break;
										}
										
										cout<<"\n\n\t\tIntel procrssor. - ";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\t\t\t|  No. |    Processor.   |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  1.  |    intel i3.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  2.  |    intel i5.    |";
										cout<<"\n\t\t\t|------|-----------------|";
										cout<<"\n\t\t\t|  3.  |    intel i7.    |";
										cout<<"\n\t\t\t+------+-----------------+";
										cout<<"\n\n\t\tEnter Storage space accoring to number. = ";
										cin>>p;
										//Processor switch
										switch(p)
										{
											case 1:
												{
													pro=3;
													break;
												}
											case 2:
												{
													pro=5;
													break;
												}
											case 3:
												{
													pro=7;
													break;
												}
											break;
										}
										cout<<"\n\t\tConform your specification. - ";
										cout<<"\n\n\t\tRAM - "<<ram<<" GB.";
										cout<<"\n\t\tProcessor - i"<<pro<<".";
										if((256==sto)||(512==sto))
										{
											cout<<"\n\t\tStroage - "<<sto<<" GB.";
										}
										else
										{
											cout<<"\n\t\tStroage - "<<sto<<" TB.";
										}
										if((ram==16)&&(sto==512)&&(pro==5))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2 PRO 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 PRO 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 PRO 360 MRP (Inclusive of all taxes). - 1,07,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-pro-360/buy/";
										}
										else if((ram==16)&&(sto==512)&&(pro==7))
										{
											cout<<"\n\n\t\t"<<a<<" you have purchase Galaxy Book 2 PRO 360. "<<a;
											cout<<"\n\n\t\tYour Galaxy Book 2 PRO 360 specification is. - ";
											cout<<"\n\n\t\t"<<f<<" Windows 11 | intel core i"<<pro<<" | "<<sto<<" GB | "<<ram<<" GB.";
											cout<<"\n\n\t\tYour grand total of Galaxy Book 2 PRO 360 MRP (Inclusive of all taxes). - 1,17,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-pro-360/buy/";
										}
										else
										{
											cout<<"\n\n\t\tProduct according to your specification is not avilable.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/computers/galaxy-book/galaxy-book2-360/buy/";
										}
										break;
									}
							break;
						}
					break;
				}
			}
			myfun1();
		}
};

class refrigerators : public samsung
{
	public:
		int refr;
		char a=6,f=16;
		ref()
		{
			cout<<"\n\n\t\t"<<a<<" You have choose a refrigerators. "<<a;
			cout<<"\n\n\t\tThere are several types of refrigerators.";
			cout<<"\n\n\t\t\t+---------+-------------------------+";
			cout<<"\n\t\t\t|   No.   |\t     Types.         |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    1.   |\t  Single Door.      |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    2.   |\t  Double Door.      |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    3.   |\t  Side By Side.     |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    4.   |\t  French Door.      |";
			cout<<"\n\t\t\t+---------+-------------------------+";
			cout<<"\n\n\t\tPlease select your refrigerator type according to number. = ";
			cin>>refr;
			switch(refr)
			{
				case 1:
					{
						cout<<"\n\n\t\tThere are many option avilable in Single Door refrigerator.";
						cout<<"\n\n\t\tGo to website to see the avilable Single Door refrigerator, link is given below.";
						cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/refrigerators/all-refrigerators/?single-door";
						break;
					}
				case 2:
					{
						cout<<"\n\n\t\tThere are many option avilable in Double Door refrigerator.";
						cout<<"\n\n\t\tGo to website to see the avilable Double Door refrigerator, link is given below.";
						cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/refrigerators/all-refrigerators/?double-door";
						break;
					}
				case 3:
					{
						cout<<"\n\n\t\tThere are many option avilable in Side By Side Door refrigerator.";
						cout<<"\n\n\t\tGo to website to see the avilable Side By Side Door refrigerator, link is given below.";
						cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/refrigerators/all-refrigerators/?side-by-side";
						break;
					}
				case 4:
					{
						cout<<"\n\n\t\tThere are many option avilable in French Door refrigerator.";
						cout<<"\n\n\t\tGo to website to see the avilable French Door refrigerator, link is given below.";
						cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/refrigerators/all-refrigerators/?french-door";
						break;
					}
			}
			myfun1();
		}
};

class tablet : public samsung
{
	public:
		char a=6,f=16;
		int c,v,n;
		int wifi,lte,st,sto;
		tab()
		{
			cout<<"\n\n\t\t"<<a<<" You have choose a Tablet. "<<a;
			cout<<"\n\n\t\t\aThere are two types of Tablet Class.";
			cout<<"\n\n\t\t\t+---------+-------------------------+";
			cout<<"\n\t\t\t|   No.   |\t     Class.         |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    1.   |\t  Galaxy Tab A.     |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    2.   |\t  Galaxy Tab S.     |";
			cout<<"\n\t\t\t+---------+-------------------------+";
			cout<<"\n\n\t\tSelect your class according to number. = ";
			cin>>c;
			switch(c)
			{
				case 1:
					{
						cout<<"\n\n\t\t"<<a<<"\a You have choose a Galaxy A class Tablet. "<<a;
						cout<<"\n\n\t\tThere are two types of Galaxy A Class Tablet.";
						cout<<"\n\n\t\t\t+---------+-------------------------+";
						cout<<"\n\t\t\t|   No.   |\t     Types.         |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    1.   |\t Galaxy Tab A8.     |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    2.   |\t Galaxy Tab A7.     |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    3.   |   Galaxy Tab A7 Lite.   |";
						cout<<"\n\t\t\t+---------+-------------------------+";
						cout<<"\n\n\t\tSelect your Tablet type according to number. = ";
						cin>>v;
						switch(v)
						{
							case 1:
								{
									cout<<"\n\n\t\t"<<a<<"\a You have choose a Galaxy A8 Tablet. "<<a;
									cout<<"\n\n\t\tPlease select your specification.";
									cout<<"\n\n\t\tThere are two network mode option avilable.";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |\tNetwork.   |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  WIFI.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t  LTE.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tSelect network type according to number. = ";
									cin>>n;
									switch(n)
									{
										case 1:
											{
												wifi=1;
												break;
											}
										case 2:
											{
												lte=2;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
											break;
									}
									cout<<"\n\n\t\tSelect your storage. ";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |   RAM|Storage. |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t4GB|64GB.  |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t3GB|32GB.  |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tPleasee select your storage according to number. = ";
									cin>>st;
									switch(st)
									{
										case 1:
											{
												sto=4;
												break;
											}
										case 2:
											{
												sto=3;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
										break;
									}
									cout<<"\n\n\t\t"<<f<<" Conform your specification. - ";
									if(sto==4)
									{
										cout<<"\n\n\t\tYour storage is 4GB-RAM | 64GB Storage.";
									}
									else
									{
										cout<<"\n\n\t\tYour storage is 3GB-RAM | 32GB Storage.";
									}
									if(lte==1)
									{
										cout<<"\n\n\t\tYour network type is WIFI.";
									}
									else
									{
										cout<<"\n\n\t\tYour network type is LTE.";
									}
									if((lte==2)&&(sto==4))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy A8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy A8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is LTE.";
										cout<<"\n\n\t\t"<<f<<" storage is 4GB-RAM | 64GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy A8 Tablet MRP (Inclusive of all taxes). - 20,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a8-lte-dark-gray-64gb-storage-4gb-ram-sm-x205nzaeinu/buy/";
									}
									else if((lte==2)&&(sto==3))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy A8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy A8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is LTE.";
										cout<<"\n\n\t\t"<<f<<" storage is 3GB-RAM | 32GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy A8 Tablet MRP (Inclusive of all taxes). - 18,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a8-lte-pink-gold-32gb-storage-3gb-ram-sm-x205nidainu/buy/";
									}
									else if((wifi==1)&&(sto==4))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy A8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy A8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 4GB-RAM | 64GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy A8 Tablet MRP (Inclusive of all taxes). - 16,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a8-wifi-dark-gray-64gb-storage-4gb-ram-sm-x200nzaeinu/buy/";
									}
									else if((wifi==1)&&(sto==3))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy A8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy A8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 3GB-RAM | 32GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy A8 Tablet MRP (Inclusive of all taxes). - 14,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a8-wifi-dark-gray-32gb-storage-3gb-ram-sm-x200nzaainu/buy/";
									}
									break;
								}
							case 2:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy A7 Tablet. "<<a;
									cout<<"\n\n\t\tProduct is not avilable.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a7-silver-64gb-wi-fi-sm-t500nzsginu/buy/";
									break;
								}
							case 3:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy A7 Lite Tablet. "<<a;
									cout<<"\n\n\t\tThere are two network mode option avilable.";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |\tNetwork.   |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  WIFI.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t   4G.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tSelect network type according to number. = ";
									cin>>n;
									switch(n)
									{
										case 1:
											{
												wifi=1;
												break;
											}
										case 2:
											{
												lte=2;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
											break;
									}
									if(wifi==1)
									{
										cout<<"\n\n\t\tYour network type is WIFI.";
									}
									else
									{
										cout<<"\n\n\t\tYour network type is LTE.";
									}
									if(wifi==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy A8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy A7 Lite Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 32GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy A7 Lite Tablet MRP (Inclusive of all taxes). - 11,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a7-lite-silver-32gb-sm-t220nzsains/buy/8";
									}
									else if(lte==2)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy A7 Lite Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy A8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is 4G.";
										cout<<"\n\n\t\t"<<f<<" storage is 32GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy A7 Lite Tablet MRP (Inclusive of all taxes). - 14,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-a/galaxy-tab-a7-lite-lte-gray-32gb-sm-t225nzaains/buy/";
									}
								}
							default :
								{
									cout<<"\n\n\t\tWrong value";
									break;
								}
						break;
						}
						break;
					}
					//s class
				case 2:
					{
						cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S class Tablet. "<<a;
						cout<<"\n\n\t\tThere are two types of Galaxy S Class Tablet.";
						cout<<"\n\n\t\t\t+---------+-------------------------+";
						cout<<"\n\t\t\t|   No.   |\t      Types.        |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    1.   |\tGalaxy Tab S8 +.    |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    2.   |   Galaxy Tab S8 Ultra.  |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    3.   |\t Galaxy Tab S8.     |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    4.   |\tGalaxy Tab S7 +.    |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    5.   |\tGalaxy Tab S7 FE.   |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    6.   |    Galaxy Tab S6 Lite.  |";
						cout<<"\n\t\t\t+---------+-------------------------+";
						cout<<"\n\n\t\tSelect your Tablet type according to number = ";
						cin>>v;
						switch(v)
						{
							case 1:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S8 + Tablet. "<<a;
									cout<<"\n\n\t\tThere are two network mode option avilable.";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |\tNetwork.   |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  WIFI.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t   4G.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tSelect network type according to number. = ";
									cin>>n;
									switch(n)
									{
										case 1:
											{
												wifi=1;
												break;
											}
										case 2:
											{
												lte=2;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
											break;
									}
									if(wifi==1)
									{
										cout<<"\n\n\t\tYour network type is WIFI.";
									}
									else
									{
										cout<<"\n\n\t\tYour network type is LTE.";
									}
									if(wifi==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S8 + Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S8 + Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 128 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S8 + Tablet MRP (Inclusive of all taxes). - 74,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tablets/galaxy-tab-s8/buy/?modelCode=SM-X806BIDAINU";
									}
									else if(lte==2)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S8 + Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S8 + Tablet is. - ";
										cout<<"\n\n\t\tYour network type is 5G.";
										cout<<"\n\n\t\t"<<f<<" storage is 128 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S8 + Tablet MRP (Inclusive of all taxes). - 74,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tablets/galaxy-tab-s8/buy/?modelCode=SM-X806BIDAINU";
									}
									break;
								}
							case 2:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S8 Ultra Tablet. "<<a;
									cout<<"\n\n\t\tThere are two network mode option avilable.";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |\tNetwork.   |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  WIFI.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t   4G.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tSelect network type according to number. = ";
									cin>>n;
									switch(n)
									{
										case 1:
											{
												wifi=1;
												break;
											}
										case 2:
											{
												lte=2;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
											break;
									}
									if(wifi==1)
									{
										cout<<"\n\n\t\tYour network type is WIFI.";
									}
									else
									{
										cout<<"\n\n\t\tYour network type is LTE.";
									}
									if(wifi==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S8 Ultra Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S8 Ultra Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 256 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S8 Ultra Tablet MRP (Inclusive of all taxes). - 1,11,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tablets/galaxy-tab-s8/buy/?modelCode=SM-X806BIDAINU";
									}
									else if(lte==2)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S8 Ultra Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S8 Ultra Tablet is. - ";
										cout<<"\n\n\t\tYour network type is 5G.";
										cout<<"\n\n\t\t"<<f<<" storage is 256 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S8 Ultra Tablet MRP (Inclusive of all taxes). - 1,25,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tablets/galaxy-tab-s8/buy/?modelCode=SM-X806BIDAINU";
									}
									break;
								}
							case 3:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S8 Tablet. "<<a;
									cout<<"\n\n\t\tThere are two network mode option avilable.";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |\tNetwork.   |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  WIFI.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t   4G.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tSelect network type according to number. = ";
									cin>>n;
									switch(n)
									{
										case 1:
											{
												wifi=1;
												break;
											}
										case 2:
											{
												lte=2;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
											break;
									}
									if(wifi==1)
									{
										cout<<"\n\n\t\tYour network type is WIFI.";
									}
									else
									{
										cout<<"\n\n\t\tYour network type is LTE.";
									}
									if(wifi==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 128 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S8 Tablet MRP (Inclusive of all taxes). - 58,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tablets/galaxy-tab-s8/buy/?modelCode=SM-X806BIDAINU";
									}
									else if(lte==2)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S8 Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S8 Tablet is. - ";
										cout<<"\n\n\t\tYour network type is 5G.";
										cout<<"\n\n\t\t"<<f<<" storage is 128 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S8 Tablet MRP (Inclusive of all taxes). - 70,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tablets/galaxy-tab-s8/buy/?modelCode=SM-X806BIDAINU";
									}
									break;
								}
							case 4:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S7 + Tablet. "<<a;
									cout<<"\n\n\t\tProduct is not avilable.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s7/buy/?modelCode=SM-T735NZKEINU";
									break;
								}
							case 5:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S7 FE Tablet. "<<a;
									cout<<"\n\n\t\tSelect your storage. ";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |       RAM.     |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  6GB.     |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t  4GB.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tPleasee select your storage according to number. = ";
									cin>>st;
									switch(st)
									{
										case 1:
											{
												sto=6;
												break;
											}
										case 2:
											{
												sto=4;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
										break;
									}
									cout<<"\n\n\t\t"<<f<<" Conform your specification. - ";
									if(sto==4)
									{
										cout<<"\n\n\t\tYour storage is 4GB-RAM | 64GB Storage.";
									}
									else
									{
										cout<<"\n\n\t\tYour storage is 3GB-RAM | 32GB Storage.";
									}
									if((lte==2)&&(sto==6))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S7 FE Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S7 FE Tablet is. - ";
										cout<<"\n\n\t\tYour network type is LTE.";
										cout<<"\n\n\t\t"<<f<<" storage is 6GB-RAM.";
										cout<<"\n\n\t\tYour grand total of Galaxy S7 FE Tablet MRP (Inclusive of all taxes). - 20,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s7/buy/?modelCode=SM-T735NZKEINU";
									}
									else if((lte==2)&&(sto==4))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S7 FE Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S7 FE Tablet is. - ";
										cout<<"\n\n\t\tYour network type is LTE.";
										cout<<"\n\n\t\t"<<f<<" storage is 4GB-RAM.";
										cout<<"\n\n\t\tYour grand total of Galaxy S7 FE Tablet MRP (Inclusive of all taxes). - 18,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s7/buy/?modelCode=SM-T735NZKEINU";
									}
									break;
								}
							case 6:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S6 Lite Tablet. "<<a;
									cout<<"\n\n\t\tSelect your storage. ";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |      Storage.  |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  64GB.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t  128GB.   |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tPleasee select your storage according to number. = ";
									cin>>st;
									switch(st)
									{
										case 1:
											{
												sto=64;
												break;
											}
										case 2:
											{
												sto=128;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
										break;
									}
									cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy S8 Tablet. "<<a;
									cout<<"\n\n\t\tThere are two network mode option avilable.";
									cout<<"\n\n\t\t\t+---------+----------------+";
									cout<<"\n\t\t\t|   No.   |\tNetwork.   |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    1.   |\t  WIFI.    |";
									cout<<"\n\t\t\t|---------|----------------|";
									cout<<"\n\t\t\t|    2.   |\t   4G.     |";
									cout<<"\n\t\t\t+---------+----------------+";
									cout<<"\n\n\t\tSelect network type according to number. = ";
									cin>>n;
									switch(n)
									{
										case 1:
											{
												wifi=1;
												break;
											}
										case 2:
											{
												lte=2;
												break;
											}
										default :
											{
												cout<<"\n\n\t\t! Wrong value. !";
												break;
											}
											break;
									}
									cout<<"\n\n\t\t"<<f<<" Conform your specification. - ";
									if(sto==46)
									{
										cout<<"\n\n\t\tYour storage is 64 GB.";
									}
									else
									{
										cout<<"\n\n\t\tYour storage is 128 GB.";
									}
									if(wifi==1)
									{
										cout<<"\n\n\t\tYour network type is WIFI.";
									}
									else
									{
										cout<<"\n\n\t\tYour network type is LTE.";
									}
									if((lte==2)&&(sto==64))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S6 Lite Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S6 lite Tablet is. - ";
										cout<<"\n\n\t\tYour network type is LTE.";
										cout<<"\n\n\t\t"<<f<<" storage is 64GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S6 Lite Tablet MRP (Inclusive of all taxes). - 32,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s/galaxy-tab-s6-lite-gray-64gb-storage-4gb-ram-qualcomm-lte-sm-p619nzaainu/buy/";
									}
									else if((lte==2)&&(sto==128))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S6 Lite Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S6 lite Tablet is. - ";
										cout<<"\n\n\t\tYour network type is LTE.";
										cout<<"\n\n\t\t"<<f<<" storage is 128 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S6 Lite Tablet MRP (Inclusive of all taxes). - 35,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s/galaxy-tab-s6-lite-gray-64gb-storage-4gb-ram-qualcomm-lte-sm-p619nzaainu/buy/";
									}
									else if((wifi==1)&&(sto==64))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S6 Lite Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S6 lite Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 64 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S6 Lite Tablet MRP (Inclusive of all taxes). - 28,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s/galaxy-tab-s6-lite-gray-64gb-storage-4gb-ram-qualcomm-lte-sm-p619nzaainu/buy/";
									}
									else if((wifi==1)&&(sto==128))
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase Galaxy S6 Lite Tablet. "<<a;
										cout<<"\n\n\t\tYour Galaxy S6 lite Tablet is. - ";
										cout<<"\n\n\t\tYour network type is WIFI.";
										cout<<"\n\n\t\t"<<f<<" storage is 128 GB Storage.";
										cout<<"\n\n\t\tYour grand total of Galaxy S6 Lite Tablet MRP (Inclusive of all taxes). - 31,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tablets/galaxy-tab-s/galaxy-tab-s6-lite-gray-64gb-storage-4gb-ram-qualcomm-lte-sm-p619nzaainu/buy/";
									}
								}
							default :
								{
									cout<<"\n\n\t\tWrong value";
									break;
								}
								break;
						}
					}
			}
			myfun1();
		}
};

//TV CLASS
class tv : public samsung
{
	public:
		int v,screen,type,budget;
		char a=6,f=16;
		television()
		{
			cout<<"\n\n\t\t"<<a<<" You have choose a Television. "<<a;
			cout<<"\n\n\t\t\aThere are many options of Television are.";
			cout<<"\n\n\t\t\t+---------+-------------------------+";
			cout<<"\n\t\t\t|   No.   |\t     Options.       |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    1.   |\t   Screen size.     |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    2.   |\t      Types.        |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    3.   |\t   Resolutions.     |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    4.   |\t     Smart tv.      |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    5.   |\t     Features.      |";
			cout<<"\n\t\t\t|---------|-------------------------|";
			cout<<"\n\t\t\t|    6.   |\t       Price.       |";
			cout<<"\n\t\t\t+---------+-------------------------+";
			cout<<"\n\n\t\t"<<a<<" Select your option according to number = ";
			cin>>v;
			switch(v)
			{
				case 1:
					{
						cout<<"\n\n\t\t"<<a<<" You have choose a 'Screen size' option in Television. "<<a;
						cout<<"\n\n\t\t\aThere are many options avilable in 'Screen size' Television are.";
						cout<<"\n\n\t\t\t+---------+-------------------------+";
						cout<<"\n\t\t\t|   No.   |\t  Screen size.      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    1.   |\t   80cm(32*).       |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    2.   |      1m 08cm(43*).      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    3.   |      1m 23cm(49*).      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    4.   |      1m 25cm(50*).      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    5.   |      1m 38cm(55*).      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    6.   |      1m 46cm(58*).      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    7.   |      1m 52cm(60*).      |";
						cout<<"\n\t\t\t|---------|-------------------------|";
						cout<<"\n\t\t\t|    8.   |      1m 63cm(65*).      |";
						cout<<"\n\t\t\t+---------+-------------------------+";
						cout<<"\n\n\t\t"<<a<<" Select your Screen size according to number = ";
						cin>>screen;
						switch(screen)
						{
							case 1:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '80cm(32*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a many types of Television are avilable in '80cm(32*) Screen size' are.";
									cout<<"\n\n\t\t\t+---------+------------------+";
									cout<<"\n\t\t\t|   No.   |      Types.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    1.   |      T4310.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    2.   |      T4380.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    3.   |      T4900.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    4.   |      T4450.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    5.   |      T4410.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    6.   |      T4350.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    7.   |      T4050.      |";
									cout<<"\n\t\t\t|---------|------------------|";
									cout<<"\n\t\t\t|    8.   |      T4010.      |";
									cout<<"\n\t\t\t+---------+------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4310 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4310 Smart HD TV MRP (Inclusive of all taxes). - 13,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4310-32-inch-hd-smart-tv-ua32t4310akxxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4380 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4380 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4380-32-inch-hd-smart-tv-ua32t4380akxxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4900 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T490	0 Smart HD TV MRP (Inclusive of all taxes). - 23,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4900-32-inch-hd-smart-tv-ua32t4900akxxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4450 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4450 Smart HD TV MRP (Inclusive of all taxes). - 19,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4450-32-inch-hd-smart-tv-ua32t4450akxxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4410 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4410 Smart HD TV MRP (Inclusive of all taxes). - 18,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4410-32-inch-hd-smart-tv-ua32t4410akxxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4350 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4350 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4350-32-inch-hd-smart-tv-ua32t4350akxxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4050 HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4050 HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4050-32-inch-hd-tv-ua32t4050arxxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '80cm(32*) Screen size' T4010 HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '80cm(32*) Screen size' T4010 HD TV MRP (Inclusive of all taxes). - 13,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4010-32-inch-hd-tv-ua32t4010arxxl/";
												break;
											}
										default :
										{
											cout<<"\n\n\t\tInvalid value!";
											break;
										}
									}
									break;
								}
							case 2:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 08cm(43*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a many types of Television are avilable in '1m 08cm(43*) Screen size' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |      1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |      1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |      1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |      1m 08cm (43*) Q60B QLED 4K Smart TV.       \t   |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |                    More varients.                      |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 08cm(43*) Screen size' CUE60 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 08cm(43*) Screen size' CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--43-inch-ua43cue60aklxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 08cm(43*) Screen size' AUE65 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 08cm(43*) Screen size' AUE65 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 28,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-43-inch-uhd-4k-smart-tv-ua43aue65akxxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 08cm(43*) Screen size' AU7700 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 08cm(43*) Screen size' AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 37,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 08cm(43*) Screen size' Q60B QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 08cm(43*) Screen size' Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 54,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-43-inch-qled-4k-smart-tv-qa43q60baklxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<"There are many types of television are avilable in this type of '1m 08cm(43*) Screen size'."<<a;
												cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?43-inch";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
										break;
									}
								}
							case 3:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 23cm(49*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a no option avilable in Television '1m 08cm(43*) Screen size' are.";
									break;
								}
							case 4:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 25cm(50*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a many types of Television are avilable in '1m 25cm(50*) Screen size' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |      1m 25cm (50*) QN90C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |      1m 25cm (50*) CUE60 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |      1m 25cm (50*) BU8000 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |      1m 25cm (50*) Q60B QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |      1m 25cm (50*) CU7700 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    6.   |      1m 25cm (50*) CU8000 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    7.   |      1m 25cm (50*) Q60C QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    8.   |      1m 25cm (50*) AU7500 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    9.   |      1m 25cm (50*) QN90B Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' QN90C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,41,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-50-inch-neo-qled-4k-smart-tv-qa50qn90caklxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' CUE60 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 44,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--50-inch-ua50cue60aklxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' BU8000 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 56,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-50-inch-crystal-uhd-4k-smart-tv-ua50bu8000klxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' Q60B QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 64,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-50-inch-qled-4k-smart-tv-qa50q60baklxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' CU7700 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' CU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 55,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu7000-50-inch-ua50cu7700klxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' CU8000 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' CU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 62,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu8000-50-inch-ua50cu8000klxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' Q60C QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' Q60C QLED 4K Smart TV MRP (Inclusive of all taxes). - 69,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60c-50-inch-qled-4k-smart-tv-qa50q60caklxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' AU7500 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' AU7500 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 48,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7000-uhd-4k-smart-tv-2021-50-inch-ua50au7500klxl/";
												break;
											}
										case 9:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 25cm(50*) Screen size' QN90B Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 25cm(50*) Screen size' QN90B Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,05,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90b-50-inch-neo-qled-4k-smart-tv-qa50qn90baklxl/";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
									}
									break;
								}
							case 5:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 38cm(55*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a many types of Television are avilable in '1m 38cm(55*) Screen size' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |      1m 38cm (55*) QN85C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |      1m 38cm (55*) QN90C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |      1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |      1m 38cm (55*) AUE65 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |      1m 38cm (55*) AU7700 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    6.   |      1m 38cm (55*) BU8000 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    7.   |      1m 38cm (55*) Q60B QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    8.   |      1m 38cm (55*) Q60C QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    9.   |      1m 38cm (55*) AU7600 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    10.  |                      More varients.                    |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' QN85C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-55-inch-neo-qled-4k-smart-tv-qa55qn85caklxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' QN90C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,77,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-55-inch-neo-qled-4k-smart-tv-qa55qn90caklxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' AUE60 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 42,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-55-inch-ua55aue60aklxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' AUE65 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' AUE65 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 43,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-55-inch-uhd-4k-smart-tv-ua55aue65akxxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' AU7700 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 57,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-55-inch-ua55au7700klxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' BU8000 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 65,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-55-inch-crystal-uhd-4k-smart-tv-ua55bu8000klxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' Q60B QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 78,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-55-inch-qled-4k-smart-tv-qa55q60baklxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' Q60C QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' Q60C QLED 4K Smart TV MRP (Inclusive of all taxes). - 88,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60c-55-inch-qled-4k-smart-tv-qa55q60caklxl/";
												break;
											}
										case 9:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 38cm (55*) Screen size' AU7600 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 38cm (55*) Screen size' AU7600 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 50,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-55-inch-uhd-4k-smart-tv-ua55au7600kxxl/";
												break;
											}
										case 10:
											{
												cout<<"\n\n\n\t\t"<<a<<"There are many types of television are avilable in this type of '1m 08cm(43*) Screen size'."<<a;
												cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?55-inch";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
									}
								}
							case 6:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 46cm(58*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a no option avilable in Television '1m 46cm(58*) Screen size'.";
									break;
								}
							case 7:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 52cm(60*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere is one types of Television are avilable in '1m 52cm(60*) Screen size' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |     1m 52cm (60*) BU8000 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 52cm (60*) Screen size' BU8000 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung '1m 52cm (60* Screen size' BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 76,490 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-60-inch-crystal-uhd-4k-smart-tv-ua60bu8000klxl/";
									break;
								}
							case 8:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a '1m 38cm(55*) Screen size' option in Television. "<<a;
									cout<<"\n\n\t\tThere a many types of Television are avilable in '1m 38cm(55*) Screen size' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |      1m 63cm (65*) QN85C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |      1m 63cm (65*) QN95C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |      1m 63cm (65*) QN90C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |      1m 63cm (65*) QN800C Neo QLED 8K Smart TV.        |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |      1m 63cm (65*) QN700C Neo QLED 8K Smart TV.        |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    6.   |      1m 63cm (65*) AUE60 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    7.   |      1m 63cm (65*) Q60B QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    8.   |      1m 63cm (65*) CU8570 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    9.   |      1m 63cm (65*) CU7700 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    10.  |                      More varients.                    |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' QN85C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-65-inch-neo-qled-4k-smart-tv-qa65qn85caklxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' QN95C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' QN95C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,84,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95c-65-inch-neo-qled-4k-smart-tv-qa65qn95caklxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' QN90C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,39,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-65-inch-neo-qled-4k-smart-tv-qa65qn90caklxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' QN800C Neo QLED 8K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' QN800C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,64,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800c-65-inch-neo-qled-8k-smart-tv-qa65qn800ckxxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' QN700C Neo QLED 8K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' QN700C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn700c-65-inch-neo-qled-8k-smart-tv-qa65qn700ckxxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' AUE60 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 65,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-65-inch-ua65aue60aklxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' Q60B QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,29,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-65-inch-qled-4k-smart-tv-qa65q60baklxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' CU8570 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' CU8570 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 1,07,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-65-inch-qled-4k-smart-tv-qa65q60baklxl/";
												break;
											}
										case 9:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung '1m 63cm (65*) Screen size' CU7700 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung '1m 63cm (65*) Screen size' CU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 93,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu7000-65-inch-ua65cu7700klxl/";
												break;
											}
										case 10:
											{
												cout<<"\n\n\n\t\t"<<a<<"There are many types of television are avilable in this type of '1m 63cm(65*) Screen size'."<<a;
												cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?65-inch";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
									}
									break;
								}
						}
						break;
					}
				case 2:
					{
						cout<<"\n\n\t\t"<<a<<" You have choose a 'Type' option in Television. "<<a;
						cout<<"\n\n\t\t\aThere are many options avilable in 'Type' Television are.";
						cout<<"\n\n\t\t\t+---------+------------------+";
						cout<<"\n\t\t\t|   No.   |      Types.      |";
						cout<<"\n\t\t\t|---------+------------------|";
						cout<<"\n\t\t\t|    1.   |     QLED TV.     |";
						cout<<"\n\t\t\t|---------+------------------|";
						cout<<"\n\t\t\t|    2.   |    UHD 4K TV.    |";
						cout<<"\n\t\t\t|---------+------------------|";
						cout<<"\n\t\t\t|    3.   |    FULL HD TV.   |";
						cout<<"\n\t\t\t|---------+------------------|";
						cout<<"\n\t\t\t|    4.   |      HD TV.      |";
						cout<<"\n\t\t\t+---------+------------------+";
						cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
						cin>>screen;
						switch(screen)
						{
							case 1:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a QLED TV. "<<a;
									cout<<"\n\n\t\tThere are many option avilable in 'QLED TV' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |      1m 38cm (55*) QN85C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |      1m 63cm (65*) QN95C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |      1m 25cm (50*) QN90C Neo QLED 4K Smart TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |      1m 63cm (65*) QN800C Neo QLED 8K Smart TV.        |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |      1m 63cm (65*) QN700C Neo QLED 8K Smart TV.        |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    6.   |      2m 16cm (85*) QN900C Neo QLED 8K Smart TV.        |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    7.   |      1m 08cm (43*) LS03B The Frame QLED 4K TV.         |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    8.   |      1m 08cm (43*) Q60B QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    9.   |      1m 08cm (43*) Q60C QLED 4K Smart TV.              |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    10.  |      More varients avilable with many screeen size.    |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-55-inch-neo-qled-4k-smart-tv-qa55qn85caklxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,84,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95c-65-inch-neo-qled-4k-smart-tv-qa65qn95caklxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,41,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-50-inch-neo-qled-4k-smart-tv-qa50qn90caklxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,64,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800c-65-inch-neo-qled-8k-smart-tv-qa65qn800ckxxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn700c-65-inch-neo-qled-8k-smart-tv-qa65qn700ckxxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 12,24,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn900c-85-inch-neo-qled-8k-smart-tv-qa85qn900ckxxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) LS03B The Frame QLED 4K TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) LS03B The Frame QLED 4K TV MRP (Inclusive of all taxes). - 58,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/lifestyle-tvs/the-frame/ls03b-43-inch-the-frame-qled-4k-smart-tv-black-qa43ls03baklxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) Q60B QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 54,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-43-inch-qled-4k-smart-tv-qa43q60baklxl//";
												break;
											}
										case 9:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) Q60C QLED 4K Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) Q60C QLED 4K Smart TV MRP (Inclusive of all taxes). - 62,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60c-43-inch-qled-4k-smart-tv-qa43q60caklxl/";
												break;
											}
										case 10:
											{
												cout<<"\n\n\n\t\t"<<a<<"There are many option avilable in QLED TV."<<a;
												cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?qled-tv";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
									}
									break;
								}
							case 2:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a UHD 4K TV. "<<a;
									cout<<"\n\n\t\tThere are many option avilable in 'UHD TV' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |      1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |      1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |      1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV.      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |      1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |      2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    6.   |      1m 63cm (65*) CU8570 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    7.   |      1m 63cm (65*) CU7700 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    8.   |      1m 63cm (65*) CU8000 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    9.   |      1m 08cm (43*) AU7600 Crystal 4K UHD Smart TV.     |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    10.  |      More varients avilable with many screeen size.    |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--43-inch-ua43cue60aklxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 42,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-55-inch-ua55aue60aklxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 28,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-43-inch-uhd-4k-smart-tv-ua43aue65akxxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 37,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 3,19,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-85-inch-crystal-uhd-4k-smart-tv-ua85bu8000kxxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) CU8570 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) CU8570 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 1,07,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu8500-65-inch-ua65cu8570ulxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) CU7700 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) CU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 93,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu7000-65-inch-ua65cu7700klxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) CU8000 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) CU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 1,02,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu8000-65-inch-ua65cu8000klxl/";
												break;
											}
										case 9:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7600 Crystal 4K UHD Smart TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7600 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-43-inch-uhd-4k-smart-tv-ua43au7600kxxl/";
												break;
											}
										case 10:
											{
												cout<<"\n\n\n\t\t"<<a<<"There are many option avilable in QLED TV."<<a;
												cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
												cout<<"\n\n\t\t"<<f<<" hhttps://www.samsung.com/in/tvs/all-tvs/?uhd-4k-tv";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
									}
									break;
								}
							case 3:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a FULL HD TV. "<<a;
									cout<<"\n\n\t\tThere are many option avilable in 'FULL HD TV' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |           1m 08cm (43*) T5770 Smart HD TV.             |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |           1m 08cm (43*) 43TE50F Smart HD TV.           |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |           1m 08cm (43*) T5500 Smart FHD TV.            |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) T5770 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) T5770 Smart HD TV MRP (Inclusive of all taxes). - 35,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/t5770a-43-inch-full-hd-smart-tv-ua43t5770aubxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) 43TE50F Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) 43TE50F Smart HD TV MRP (Inclusive of all taxes). - 29,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/te50fa-43-inch-full-hd-smart-tv-ua43te50fakxxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) T5500 Smart FHD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) T5500 Smart FHD TV MRP (Inclusive of all taxes). - 34,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/t5500-43-inch-full-hd-smart-tv-ua43t5500akxxl/";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
											break;
									}
									break;
								}
							case 4:
								{
									cout<<"\n\n\t\t"<<a<<" You have choose a HD TV. "<<a;
									cout<<"\n\n\t\tThere are many option avilable in 'FULL HD TV' are.";
									cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\t\t\t|   No.   |                        Types.                          |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    1.   |           80cm (32*) T4310 Smart HD TV.                |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    2.   |           80cm (32*) T4380 Smart HD TV.                |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    3.   |           80cm (32*) T4900 Smart HD TV.                |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    4.   |           80cm (32*) T4450 Smart HD TV.                |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    5.   |           80cm (32*) T4410 Smart HD TV.                |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    6.   |           80cm (32*) T4350 Smart HD TV.                |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    7.   |           80cm (32*) T4050 HD TV.                      |";
									cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
									cout<<"\n\t\t\t|    8.   |           80cm (32*) T4010 HD TV.                      |";
									cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
									cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
									cin>>type;
									switch(type)
									{
										case 1:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4310 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4310 Smart HD TV MRP (Inclusive of all taxes). - 13,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4310-32-inch-hd-smart-tv-ua32t4310akxxl/";
												break;
											}
										case 2:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4380 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4380 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4380-32-inch-hd-smart-tv-ua32t4380akxxl/";
												break;
											}
										case 3:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4900 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4900 Smart HD TV MRP (Inclusive of all taxes). - 23,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4900-32-inch-hd-smart-tv-ua32t4900akxxl/";
												break;
											}
										case 4:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4450 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4450 Smart HD TV MRP (Inclusive of all taxes). - 19,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4450-32-inch-hd-smart-tv-ua32t4450akxxl/";
												break;
											}
										case 5:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4410 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4410 Smart HD TV MRP (Inclusive of all taxes). - 18,490 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4410-32-inch-hd-smart-tv-ua32t4410akxxl/";
												break;
											}
										case 6:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4350 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4350 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4350-32-inch-hd-smart-tv-ua32t4350akxxl/";
												break;
											}
										case 7:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4050 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4050 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4050-32-inch-hd-tv-ua32t4050arxxl/";
												break;
											}
										case 8:
											{
												cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T40510 Smart HD TV. "<<a;
												cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4010 Smart HD TV MRP (Inclusive of all taxes). - 13,990 RS.";
												cout<<"\n\n\n\t\tFor more information visit our website. -";
												cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4010-32-inch-hd-tv-ua32t4010arxxl/";
												break;
											}
										default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
										}
										break;
								}
								break;
						}
						break;
					}
				case 3:
					{
						
						cout<<"\n\n\t\t"<<a<<" You have choose a 'Resolution' option in Television. "<<a;
						cout<<"\n\n\t\tThere are many option avilable in 'FULL HD TV' are.";
						cout<<"\n\n\t\t\t+---------+--------------------------------+";
						cout<<"\n\t\t\t|   No.   |           Resolution.          |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    1.   |           CRYSTAL UHD.         |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    2.   |           QLED 8K.             |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    3.   |           QLED 4K.             |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    4.   |           ULTRA HD 4K.         |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    5.   |           FULL HD.             |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    6.   |           HD READY.            |";
						cout<<"\n\t\t\t+---------+--------------------------------+";
						cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
						cin>>screen;
						switch(screen)
						{
						case 1:
							{
								cout<<"\n\n\t\t"<<a<<" You have choose a 'CRYSTAL UHD Resolution' option in Television. "<<a;
								cout<<"\n\n\t\tThere are many option avilable in 'CRYSTAL UHD RESOLUTION TV' are.";
								cout<<"\n\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\t\t\t|   No.   |                          Types.                            |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    1.   |        1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV         |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    2.   |        1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV.        |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    3.   |        1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV.        |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    4.   |        1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    5.   |        2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    6.   |        1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    7.   |        1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
								cin>>type;
								switch(type)
								{
									case 1:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--43-inch-ua43cue60aklxl/";
											break;
										}
									case 2:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 42,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-55-inch-ua55aue60aklxl/";
											break;
										}
									case 3:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 28,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-43-inch-uhd-4k-smart-tv-ua43aue65akxxl/";
											break;
										}
									case 4:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 37,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
											break;
										}
									case 5:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 3,19,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-85-inch-crystal-uhd-4k-smart-tv-ua85bu8000kxxl/";
											break;
										}
									case 6:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 30,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7000-uhd-4k-smart-tv-2021-43-inch-ua43au7500klxl/";
											break;
										}
									case 7:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 11m 08cm (43*) BU8570 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 47,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8500-43-inch-crystal-uhd-4k-smart-tv-ua43bu8570ulxl/";
											break;
										}
									default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
								}
								break;
							}
						case 2:
							{
								cout<<"\n\n\t\t"<<a<<" You have choose a 'QLED 8K Resolution' option in Television. "<<a;
								cout<<"\n\n\t\tThere are many option avilable in 'CRYSTAL UHD RESOLUTION TV' are.";
								cout<<"\n\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\t\t\t|   No.   |                          Types.                            |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    1.   |        1m 63cm (65*) QN800C Neo QLED 8K Smart TV.          |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    2.   |        1m 63cm (65*) QN700C Neo QLED 8K Smart TV.          |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    3.   |        2m 16cm (85*) QN900C Neo QLED 8K Smart TV.          |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    4.   |        1m 63cm (65*) QN800B Neo QLED 8K Smart TV.          |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    5.   |        1m 63cm (65*) QN700B Neo QLED 8K Smart TV.          |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    6.   |        2m 16cm (85*) QN900A Neo QLED 8K Smart TV.          |";
								cout<<"\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
								cin>>type;
								switch(type)
								{
									case 1:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,64,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800c-65-inch-neo-qled-8k-smart-tv-qa65qn800ckxxl/";
											break;
										}
									case 2:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,14,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn700c-65-inch-neo-qled-8k-smart-tv-qa65qn700ckxxl/";
											break;
										}
									case 3:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 12,24,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn900c-85-inch-neo-qled-8k-smart-tv-qa85qn900ckxxl/";
											break;
										}
									case 4:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN800B Neo QLED 8K Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN800B Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,44,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800b-65-inch-neo-qled-8k-smart-tv-qa65qn800bkxxl/";
											break;
										}
									case 5:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN700B Neo QLED 8K Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN700B Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,07,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn700b-65-inch-neo-qled-8k-smart-tv-qa65qn700bkxxl/";
											break;
										}
									case 6:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) QN900A Neo QLED 8K Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) QN900A Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 11,49,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn900a-85-inch-neo-qled-8k-smart-tv-qa85qn900akxxl/";
											break;
										}
									default :
											{
												cout<<"\n\n\t\tInvalid value !!!";
												break;
											}
									break;
								}
							break;
							}
						case 3:
							{
								cout<<"\n\n\t\t"<<a<<" You have choose a 'QLED 4K Resolution' option in Television. "<<a;
								cout<<"\n\n\t\tThere are many option avilable in 'UHD TV' are.";
								cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
								cout<<"\n\t\t\t|   No.   |                        Types.                          |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    1.   |      1m 38cm (55*) QN85C Neo QLED 4K Smart TV.         |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    2.   |      1m 63cm (65*) QN95C Neo QLED 4K Smart TV.         |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    3.   |      1m 25cm (50*) QN90C Neo QLED 4K Smart TV.         |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    4.   |      1m 08cm (43*) Q60B QLED 4K Smart TV.              |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    5.   |      1m 08cm (43*) Q60C QLED 4K Smart TV.              |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    6.   |      1m 38cm (55*) QN95B Neo QLED 4K Smart TV.         |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    7.   |      1m 89cm (75*) Q70B QLED 4K Smart TV.              |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    8.   |      1m 25cm (50*) QN90B Neo QLED 4K Smart TV.         |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    9.   |      1m 38cm (55*) QN85B Neo QLED 4K Smart TV.         |";
								cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
								cout<<"\n\t\t\t|    10.  |      More varients avilable with many screeen size.    |";
								cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
								cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
								cin>>type;
								switch(type)
								{
								case 1:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-55-inch-neo-qled-4k-smart-tv-qa55qn85caklxl/";
										break;
									}
								case 2:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,84,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95c-65-inch-neo-qled-4k-smart-tv-qa65qn95caklxl/";
										break;
									}
								case 3:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,41,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-50-inch-neo-qled-4k-smart-tv-qa50qn90caklxl/";
										break;
									}
								case 4:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) Q60B QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 54,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-43-inch-qled-4k-smart-tv-qa43q60baklxl//";
										break;
									}
								case 5:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) Q60C QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) Q60C QLED 4K Smart TV MRP (Inclusive of all taxes). - 62,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60c-43-inch-qled-4k-smart-tv-qa43q60caklxl/";
										break;
									}
								case 6:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN95B Neo QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN95B Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95b-55-inch-neo-qled-4k-smart-tv-qa55qn95baklxl/";
										break;
									}
								case 7:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 89cm (75*) Q70B QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 89cm (75*) Q70B QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,69,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q70b-75-inch-qled-4k-smart-tv-qa75q70bakxxl/";
										break;
									}
								case 8:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) QN90B Neo QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) QN90B Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,05,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90b-50-inch-neo-qled-4k-smart-tv-qa50qn90baklxl/";
										break;
									}
								case 9:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN85B Neo QLED 4K Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN85B Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,19,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60c-43-inch-qled-4k-smart-tv-qa43q60caklxl/";
										break;
									}
								case 10:
									{
										cout<<"\n\n\n\t\t"<<a<<"There are many option avilable in QLED TV."<<a;
										cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?qled-4k";
										break;
									}
								break;
								}
								break;
							}
						case 4:
							{
								cout<<"\n\n\t\t"<<a<<" You have choose a 'ULTRA HD 4K Resolution' option in Television. "<<a;
								cout<<"\n\n\t\tThere are many option avilable in 'CRYSTAL UHD RESOLUTION TV' are.";
								cout<<"\n\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\t\t\t|   No.   |                          Types.                            |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    1.   |        1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV.        |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    2.   |        1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    3.   |        2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    4.   |        1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    5.   |        1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV.       |";
								cout<<"\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
								cin>>type;
								switch(type)
								{
									case 1:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 42,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-55-inch-ua55aue60aklxl/";
											break;
										}
									case 2:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 37,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
											break;
										}
									case 3:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 3,19,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-85-inch-crystal-uhd-4k-smart-tv-ua85bu8000kxxl/";
											break;
										}
									case 4:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 30,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7000-uhd-4k-smart-tv-2021-43-inch-ua43au7500klxl/";
											break;
										}
									case 5:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 11m 08cm (43*) BU8570 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 47,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8500-43-inch-crystal-uhd-4k-smart-tv-ua43bu8570ulxl/";
											break;
										}
									default :
										{
											cout<<"\n\n\t\tInvalid value !!!";
											break;
										}
								}
								break;
							}
						case 5:
							{
								cout<<"\n\n\t\t"<<a<<" You have choose a 'FULL HD Resolution' option in Television. "<<a;
								cout<<"\n\n\t\tThere are many option avilable in 'CRYSTAL UHD RESOLUTION TV' are.";
								cout<<"\n\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\t\t\t|   No.   |                          Types.                            |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    1.   |               80cm (32*) T4380 Smart HD TV.                |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    2.   |              1m 08cm (43*) T5770 Smart HD TV.              |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    3.   |             1m 08cm (43*) 43TE50F Smart HD TV.             |";
								cout<<"\n\t\t\t|---------|------------------------------------------------------------|";
								cout<<"\n\t\t\t|    4.   |              1m 08cm (43*) T5500 Smart FHD TV.             |";
								cout<<"\n\t\t\t+---------+------------------------------------------------------------+";
								cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
								cin>>type;
								switch(type)
								{
									case 1:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4380 Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4380 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4380-32-inch-hd-smart-tv-ua32t4380akxxl/";
											break;
										}
									case 2:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) T5770 Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) T5770 Smart HD TV MRP (Inclusive of all taxes). - 35,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/t5770a-43-inch-full-hd-smart-tv-ua43t5770aubxl/";
											break;
										}
									case 3:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) 43TE50F Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) 43TE50F Smart HD TV MRP (Inclusive of all taxes). - 29,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/te50fa-43-inch-full-hd-smart-tv-ua43te50fakxxl/";
											break;
										}
									case 4:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) T5500 Smart FHD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) T5500 Smart FHD TV MRP (Inclusive of all taxes). - 34,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/t5500-43-inch-full-hd-smart-tv-ua43t5500akxxl/";
											break;
										}
									break;
								}
								break;
							}
						case 6:
							{
								cout<<"\n\n\t\t"<<a<<" You have choose a 'FULL HD Resolution' option in Television. "<<a;
								cout<<"\n\n\t\tThere are many option avilable in 'CRYSTAL UHD RESOLUTION TV' are.";
								cout<<"\n\n\t\t\t+---------+-------------------------------------------------+";
								cout<<"\n\t\t\t|   No.   |                      Types.                     |";
								cout<<"\n\t\t\t|---------|-------------------------------------------------|";
								cout<<"\n\t\t\t|    1.   |             80cm (32*) T4310 Smart HD TV.       |";
								cout<<"\n\t\t\t|---------|-------------------------------------------------|";
								cout<<"\n\t\t\t|    2.   |             80cm (32*) T4350 Smart HD TV.       |";
								cout<<"\n\t\t\t|---------|-------------------------------------------------|";
								cout<<"\n\t\t\t|    3.   |             80cm (32*) T4050 HD TV.             |";
								cout<<"\n\t\t\t|---------|-------------------------------------------------|";
								cout<<"\n\t\t\t|    4.   |             80cm (32*) T4010 HD TV.             |";
								cout<<"\n\t\t\t+---------+-------------------------------------------------+";
								cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
								cin>>type;
								switch(type)
								{
									case 1:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4310 Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4310 Smart HD TV MRP (Inclusive of all taxes). - 13,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4310-32-inch-hd-smart-tv-ua32t4310akxxl/";
											break;
										}
									case 2:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4350 Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4350 Smart HD TV MRP (Inclusive of all taxes). - 14,490 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4350-32-inch-hd-smart-tv-ua32t4350akxxl/";
											break;
										}
									case 3:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4050 Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4050 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4050-32-inch-hd-tv-ua32t4050arxxl/";
											break;
										}
									case 4:
										{
											cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T40510 Smart HD TV. "<<a;
											cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4010 Smart HD TV MRP (Inclusive of all taxes). - 13,990 RS.";
											cout<<"\n\n\n\t\tFor more information visit our website. -";
											cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4010-32-inch-hd-tv-ua32t4010arxxl/";
											break;
										}
									default :
										{
											cout<<"\n\n\t\tInvalid value !!!";
											break;
										}
								}
								break;
							}
						default :
							{
								cout<<"\n\n\t\tInvalid value !!!";
								break;
							}
							break;
						}
						break;
					}
				case 4:
					{
						cout<<"\n\n\t\t"<<a<<" You have choose a 'Smart tv' option in Television. "<<a;
						cout<<"\n\n\t\tThere is only one option avilable in smart tv option is smart tv are.";
						cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
						cout<<"\n\t\t\t|   No.   |                        Types.                          |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    1.   |      1m 38cm (55*) QN85C Neo QLED 4K Smart TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    2.   |      1m 63cm (65*) QN95C Neo QLED 4K Smart TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    3.   |      1m 25cm (50*) QN90C Neo QLED 4K Smart TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    4.   |      1m 63cm (65*) QN800C Neo QLED 8K Smart TV.        |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    5.   |      1m 63cm (65*) QN700C Neo QLED 8K Smart TV.        |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    6.   |      2m 16cm (85*) QN900C Neo QLED 8K Smart TV.        |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    7.   |      1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV.      |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    8.   |      1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV.      |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    9.   |      1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV.     |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    10.  |      More varients avilable with many screeen size.    |";
						cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
						cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
						cin>>type;
						switch(type)
						{
							case 1:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-55-inch-neo-qled-4k-smart-tv-qa55qn85caklxl/";
									break;
								}
							case 2:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,84,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95c-65-inch-neo-qled-4k-smart-tv-qa65qn95caklxl/";
									break;
								}
							case 3:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,41,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-50-inch-neo-qled-4k-smart-tv-qa50qn90caklxl/";
									break;
								}
							case 4:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,64,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800c-65-inch-neo-qled-8k-smart-tv-qa65qn800ckxxl/";
									break;
								}
							case 5:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,14,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn700c-65-inch-neo-qled-8k-smart-tv-qa65qn700ckxxl/";
									break;
								}
							case 6:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 12,24,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn900c-85-inch-neo-qled-8k-smart-tv-qa85qn900ckxxl/";
									break;
								}
							case 7:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--43-inch-ua43cue60aklxl/";
									break;
								}
							case 8:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 42,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-55-inch-ua55aue60aklxl/";
									break;
								}
							case 9:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 37,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
									break;
								}
							case 10:
								{
									cout<<"\n\n\n\t\t"<<a<<"There are many option avilable in QLED TV."<<a;
									cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?qled-4k";
									break;
								}
							default :
								{
									cout<<"\n\n\t\tInvalid value !!!";
									break;
								}
								break;
						}
						break;
					}
				case 5:
					{
						cout<<"\n\n\t\t"<<a<<" You have choose a 'Feature' option in Television. "<<a;
						cout<<"\n\n\t\tThere is only one option avilable in feature option is smart hub are.";
						cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
						cout<<"\n\t\t\t|   No.   |                        Types.                          |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    1.   |      1m 38cm (55*) QN85C Neo QLED 4K Smart TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    2.   |      1m 63cm (65*) QN95C Neo QLED 4K Smart TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    3.   |      1m 25cm (50*) QN90C Neo QLED 4K Smart TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    4.   |      1m 63cm (65*) QN800C Neo QLED 8K Smart TV.        |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    5.   |      2m 16cm (85*) QN900C Neo QLED 8K Smart TV.        |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    6.   |      1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV.      |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    7.   |      2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV.     |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    8.   |      1m 08cm (43*) LS03B The Frame QLED 4K TV.         |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    9.   |      1m 08cm (43*) Q60B QLED 4K Smart TV.              |";
						cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
						cout<<"\n\t\t\t|    10.  |      More varients avilable with many screeen size.    |";
						cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
						cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
						cin>>type;
						switch(type)
						{
							case 1:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-55-inch-neo-qled-4k-smart-tv-qa55qn85caklxl/";
									break;
								}
							case 2:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,84,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95c-65-inch-neo-qled-4k-smart-tv-qa65qn95caklxl/";
									break;
								}
							case 3:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,41,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-50-inch-neo-qled-4k-smart-tv-qa50qn90caklxl/";
									break;
								}
							case 4:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,64,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800c-65-inch-neo-qled-8k-smart-tv-qa65qn800ckxxl/";
									break;
								}
							case 5:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 12,24,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn900c-85-inch-neo-qled-8k-smart-tv-qa85qn900ckxxl/";
									break;
								}
							case 6:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--43-inch-ua43cue60aklxl/";
									break;
								}
							case 7:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 3,19,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-85-inch-crystal-uhd-4k-smart-tv-ua85bu8000kxxl/";
									break;
								}
							case 8:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) LS03B The Frame QLED 4K TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) LS03B The Frame QLED 4K TV MRP (Inclusive of all taxes). - 58,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-85-inch-crystal-uhd-4k-smart-tv-ua85bu8000kxxl/";
									break;
								}
							case 9:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) Q60B QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) Q60B QLED 4K Smart TV MRP (Inclusive of all taxes). - 54,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/q60b-43-inch-qled-4k-smart-tv-qa43q60baklxl//";
									break;	
								}
							case 10:
								{
									cout<<"\n\n\n\t\t"<<a<<"There are many option avilable in QLED TV."<<a;
									cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?qled-4k";
									break;
								}
							default :
								{
									cout<<"\n\n\t\tInvalid value !!!";
									break;
								}
						}
						break;
					}
				case 6:
					{
						cout<<"\n\n\t\t"<<a<<" You have choose a 'PRICE' option in Television. "<<a;
						cout<<"\n\n\tPlease enter your budget (above 10,000 - upto) - ";
						cin>>budget;
						if(budget==10000)
						{
							cout<<"\n\n\tTelevision not found in your budget.";
						}
						else if(budget>=10000,budget<20000)
						{
							cout<<"\n\n\tTelevision avilable in your budget are - ";
							cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
							cout<<"\n\t\t\t|   No.   |                        Types.                          |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    1.   |           80cm (32*) T4310 Smart HD TV.                |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    2.   |           80cm (32*) T4380 Smart HD TV.                |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    3.   |           80cm (32*) T4450 Smart HD TV.                |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    4.   |           80cm (32*) T4410 Smart HD TV.                |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    5.   |           80cm (32*) T4350 Smart HD TV.                |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    6.   |           80cm (32*) T4050 HD TV.                      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    7.   |           80cm (32*) T4010 HD TV.                      |";
							cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
							cout<<"\n\n\tPlease select your tyv according to number - ";
							cin>>type;
							switch(type)
							{
								case 1:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4310 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4310 Smart HD TV MRP (Inclusive of all taxes). - 13,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4310-32-inch-hd-smart-tv-ua32t4310akxxl/";
										break;
									}
								case 2:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4380 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4380 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4380-32-inch-hd-smart-tv-ua32t4380akxxl/";
										break;
									}
								case 3:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4450 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4450 Smart HD TV MRP (Inclusive of all taxes). - 19,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4450-32-inch-hd-smart-tv-ua32t4450akxxl/";
										break;
									}
								case 4:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4410 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4410 Smart HD TV MRP (Inclusive of all taxes). - 18,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4410-32-inch-hd-smart-tv-ua32t4410akxxl/";
										break;
									}
								case 5:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4350 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4350 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4350-32-inch-hd-smart-tv-ua32t4350akxxl/";
										break;
									}
								case 6:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4050 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4050 Smart HD TV MRP (Inclusive of all taxes). - 14,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4050-32-inch-hd-tv-ua32t4050arxxl/";
										break;
									}
								case 7:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4010 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4010 Smart HD TV MRP (Inclusive of all taxes). - 13,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4010-32-inch-hd-tv-ua32t4010arxxl/";
										break;
									}
								default :
								{
									cout<<"\n\n\t\tInvalid value !!!";
									break;
								}
								break;
							}
						}
						else if(budget>20000,budget<=30000)
						{
							cout<<"\n\n\tTelevision avilable in your budget are - ";
							cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
							cout<<"\n\t\t\t|   No.   |                        Types.                          |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    1.   |           80cm (32*) T4900 Smart HD TV.                |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    2.   |         1m 08cm (43*) 43TE50F Smart HD TV.             |";
							cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
							cout<<"\n\n\tPlease select your tyv according to number - ";
							cin>>type;
							switch(type)
							{
								case 1:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 80cm (32*) T4900 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 80cm (32*) T4900 Smart HD TV MRP (Inclusive of all taxes). - 23,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/hd-tv/t4900-32-inch-hd-smart-tv-ua32t4900akxxl/";
										break;
									}
								case 2:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) 43TE50F Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) 43TE50F Smart HD TV MRP (Inclusive of all taxes). - 29,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/te50fa-43-inch-full-hd-smart-tv-ua43te50fakxxl/";
										break;
									}
								default :
									{
										cout<<"\n\n\t\tInvalid value !!!";
										break;
									}
								break;
							}
						}
						else if(budget>30000,budget<=40000)
						{
							cout<<"\n\n\tTelevision avilable in your budget are - ";
							cout<<"\n\n\t\t\t+---------+--------------------------------------------------------------+";
							cout<<"\n\t\t\t|   No.   |                              Types.                          |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    1.   |           1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV.       |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    2.   |           1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV.       |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    3.   |           1m 08cm (43*) AU7600 Crystal 4K UHD Smart TV.      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    4.   |           1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV.      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    5.   |           1m 08cm (43*) T5770 Smart HD TV.                   |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    6.   |           1m 08cm (43*) T5500 Smart FHD TV.                  |";
							cout<<"\n\t\t\t+---------+--------------------------------------------------------------+";
							cout<<"\n\n\tPlease select your tyv according to number - ";
							cin>>type;
							switch(type)
							{
								case 1:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 33,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--43-inch-ua43cue60aklxl/";
										break;
									}
								case 2:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AUE65 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-43-inch-uhd-4k-smart-tv-ua43aue65akxxl/";
										break;
									}
								case 3:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7600 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7600 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 35,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-43-inch-uhd-4k-smart-tv-ua43au7600kxxl/";
										break;
									}
								case 4:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7500 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 34,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7000-uhd-4k-smart-tv-2021-43-inch-ua43au7500klxl/";
										break;
									}
								case 5:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) T5770 Smart HD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) T5770 Smart HD TV MRP (Inclusive of all taxes). - 35,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/t5770a-43-inch-full-hd-smart-tv-ua43t5770aubxl/";
										break;
									}
								case 6:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) T5500 Smart FHD TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) T5500 Smart FHD TV MRP (Inclusive of all taxes). - 34,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/full-hd-tv/t5500-43-inch-full-hd-smart-tv-ua43t5500akxxl/";
										break;
									}
								default :
									{
										cout<<"\n\n\t\tInvalid value !!!";
										break;
									}
								break;
							}
						}
						else if(budget>40000,budget<=50000)
						{
							cout<<"\n\n\tTelevision avilable in your budget are - ";
							cout<<"\n\n\t\t\t+---------+--------------------------------------------------------------+";
							cout<<"\n\t\t\t|   No.   |                              Types.                          |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    1.   |           1m 38cm (55*) CUE60 Crystal 4K UHD Smart TV.       |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    2.   |           1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV.       |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    3.   |           1m 38cm (55*) AUE65 Crystal 4K UHD Smart TV.       |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    4.   |           1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV.      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    5.   |           1m 08cm (43*) CU7700 Crystal 4K UHD Smart TV.      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    6.   |           1m 25cm (50*) AU7500 Crystal 4K UHD Smart TV.      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    7.   |           1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV.      |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------------|";
							cout<<"\n\t\t\t|    8.   |           1m 08cm (43*) LS01T QLED 4K The Serif.             |";
							cout<<"\n\t\t\t+---------+--------------------------------------------------------------+";
							cout<<"\n\n\tPlease select your tyv according to number - ";
							cin>>type;
							switch(type)
							{
								case 1:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) CUE60 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) CUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 47,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cue60--55-inch-ua55cue60aklxl/";
										break;
									}
								case 2:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 45,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-55-inch-ua55aue60aklxl/";
										break;
									}
								case 3:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) AUE65 Crystal 4K UHD Smart TV.. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) AUE65 Crystal 4K UHD Smart TV. MRP (Inclusive of all taxes). - 46,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7002-55-inch-uhd-4k-smart-tv-ua55aue65akxxl/";
										break;
									}
								case 4:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 40,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
										break;
									}
								case 5:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) CU7700 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) CU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 45,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/cu7000-43-inch-ua43cu7700klxl/";
										break;
									}
								case 6:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) AU7500 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) AU7500 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 48,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7000-uhd-4k-smart-tv-2021-50-inch-ua50au7500klxl/";
										break;
									}
								case 7:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) BU8570 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 47,490 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8500-43-inch-crystal-uhd-4k-smart-tv-ua43bu8570ulxl/";
										break;
									}
								case 8:
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 08cm (43*) LS01T QLED 4K The Serif. "<<a;
										cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) LS01T QLED 4K The Serif MRP (Inclusive of all taxes). - 46,090 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/lifestyle-tvs/the-serif/ls01t-43-inch-the-serif-4k-smart-tv-cloud-white-qa43ls01takxxl/";
										break;
									}
								default :
								{
									cout<<"\n\n\t\tInvalid value !!!";
									break;
								}
								break;
							}
						}
						else if(budget>50000,budget<=100000)
						{
							cout<<"\n\n\tTelevision avilable in your budget are - ";
							cout<<"\n\n\t\t\t+---------+--------------------------------------------------------+";
							cout<<"\n\t\t\t|   No.   |                        Types.                          |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    1.   |      1m 38cm (55*) QN85C Neo QLED 4K Smart TV.         |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    2.   |      1m 63cm (65*) QN95C Neo QLED 4K Smart TV.         |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    3.   |      1m 25cm (50*) QN90C Neo QLED 4K Smart TV.         |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    4.   |      1m 63cm (65*) QN800C Neo QLED 8K Smart TV.        |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    5.   |      1m 63cm (65*) QN700C Neo QLED 8K Smart TV.        |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    6.   |      2m 16cm (85*) QN900C Neo QLED 8K Smart TV.        |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    7.   |      1m 63cm (65*) AUE60 Crystal 4K UHD Smart TV.     |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    8.   |      1m 89cm (75*) AU7700 Crystal 4K UHD Smart TV.     |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    9.   |      2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV.         |";
							cout<<"\n\t\t\t|---------|--------------------------------------------------------|";
							cout<<"\n\t\t\t|    10.  |      More varients avilable with many screeen size.    |";
							cout<<"\n\t\t\t+---------+--------------------------------------------------------+";
							cout<<"\n\n\t\t"<<a<<" Select your Television Type according to number = ";
							cin>>type;
							switch(type)
							{
								case 1:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 38cm (55*) QN85C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,59,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn85c-55-inch-neo-qled-4k-smart-tv-qa55qn85caklxl/";
									break;
								}
							case 2:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN95C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 2,84,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn95c-65-inch-neo-qled-4k-smart-tv-qa65qn95caklxl/";
									break;
								}
							case 3:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 25cm (50*) QN90C Neo QLED 4K Smart TV MRP (Inclusive of all taxes). - 1,41,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn90c-50-inch-neo-qled-4k-smart-tv-qa50qn90caklxl/";
									break;
								}
							case 4:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN800C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,64,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn800c-65-inch-neo-qled-8k-smart-tv-qa65qn800ckxxl/";
									break;
								}
							case 5:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) QN700C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 3,14,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn700c-65-inch-neo-qled-8k-smart-tv-qa65qn700ckxxl/";
									break;
								}
							case 6:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) QN900C Neo QLED 8K Smart TV MRP (Inclusive of all taxes). - 12,24,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/qled-tv/qn900c-85-inch-neo-qled-8k-smart-tv-qa85qn900ckxxl/";
									break;
								}
							case 7:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 63cm (65*) AUE60 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 63cm (65*) AUE60 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 31,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/aue60-uhd-4k-smart-tv-2021-65-inch-ua65aue60aklxl/";
									break;
								}
							case 8:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 1m 89cm (75*) AU7700 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 1m 08cm (43*) AU7700 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 1,35,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/au7700-4k-smart-crystal-uhd-tv-43-inch-ua43au7700klxl/";
									break;
								}
							case 9:
								{
									cout<<"\n\n\n\t\t"<<a<<" you have purchase a samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV. "<<a;
									cout<<"\n\n\t\tYour grand total of samsung 2m 16cm (85*) BU8000 Crystal 4K UHD Smart TV MRP (Inclusive of all taxes). - 3,19,990 RS.";
									cout<<"\n\n\n\t\tFor more information visit our website. -";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/uhd-4k-tv/bu8000-85-inch-crystal-uhd-4k-smart-tv-ua85bu8000kxxl/";
									break;
								}
							case 10:
								{
									cout<<"\n\n\n\t\t"<<a<<"There are many option avilable in QLED TV."<<a;
									cout<<"\n\n\t\tCopy the link which is mention below and paste it on the web browser to see our more option which avilable.";
									cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/tvs/all-tvs/?above-rs-50000";
									break;
								}
							default :
								{
									cout<<"\n\n\t\tInvalid value !!!";
									break;
								}
								break;
							}
						}
				}
			}
			myfun1();
		}
};

//sub class accessories
class accessories : public samsung
{
	public :
		acc()
		{
			cout<<"\n\n\tfdl,gnkd";
		}
};

//sub class watch
class watch : public samsung
{
	public :
		int v,screen,type,budget;
		char a=6,f=16;
		int lte,blue,conn;
		watc()
		{
			cout<<"\n\n\t\t"<<a<<" You have choose a Galaxy Watch. "<<a;
			cout<<"\n\n\t\t\aThere are three types of Galaxy Watch are.";
			cout<<"\n\n\t\t\t+---------+---------------------------+";
			cout<<"\n\t\t\t|   No.   |       Galaxy watch.       |";
			cout<<"\n\t\t\t|---------|---------------------------|";
			cout<<"\n\t\t\t|    1.   |       Galaxy Watch 5.     |";
			cout<<"\n\t\t\t|---------|---------------------------|";
			cout<<"\n\t\t\t|    2.   |       Galaxy Watch 4.     |";
			cout<<"\n\t\t\t|---------|---------------------------|";
			cout<<"\n\t\t\t|    3.   |       Galaxy Watch 3.     |";
			cout<<"\n\t\t\t+---------+---------------------------+";
			cout<<"\n\n\t\tSelect your Watch according to number. = ";
			cin>>v;
			switch(v)
			{
				case 1:
					{
						cout<<"\n\n\n\t\t"<<a<<" You have choose a Galaxy Watch 5. "<<a;
						cout<<"\n\n\t\t\aThere are three varient avialble in Galaxy Watch 5 are.";
						cout<<"\n\n\t\t\t+---------+--------------------------------+";
						cout<<"\n\t\t\t|   No.   |            Varients.           |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    1.   |        Galaxy Watch 5 PRO.     |";
						cout<<"\n\t\t\t|---------|--------------------------------|";
						cout<<"\n\t\t\t|    2.   |        Galaxy Watch 5.         |";
						cout<<"\n\t\t\t+---------+--------------------------------+";
						cout<<"\n\n\tSelect your watch according to number - ";
						cin>>screen;
						
						cout<<"\n\n\t\t"<<a<<" Before going to purchase the product. "<<a;
						cout<<"\n\n\t\t"<<a<<" Please select your specification. "<<a;
						cout<<"\n\n\t\tPlease your CONNECTIVITY.";
						cout<<"\n\n\t\t\t+---------+-------------------+";
						cout<<"\n\t\t\t|   No.   |    CONNECTIVTY.   |";
						cout<<"\n\t\t\t|---------|-------------------|";
						cout<<"\n\t\t\t|    1.   |         4G.       |";
						cout<<"\n\t\t\t|---------|-------------------|";
						cout<<"\n\t\t\t|    2.   |     Bluetooth.    |";
						cout<<"\n\t\t\t+---------+-------------------+";
						cout<<"\n\n\tSelect your CONNECTIVITY type according to number - ";
						cin>>conn;
						if(conn==1)
						{
							lte==1;
						}
						else
						{
							blue==2;
						}
						cout<<"\n\n\t\tCheck your connectivity";
						if(lte==1)
						{
							cout<<"\n\n\t\tYou have choose a 4G connectivity.";
						}
						else
						{
							cout<<"\n\n\t\tYou have choose a Bluetooth connectivity.";
						}
						switch(screen)
						{
							case 1:
								{
									if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 5 PRO. "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 5 PRO MRP (Inclusive of all taxes). - 49,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch5-pro-black-titanium-lte-sm-r925fzkainu/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 5 PRO. "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 5 PRO MRP (Inclusive of all taxes). - 44,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch5-pro-black-titanium-bluetooth-sm-r920nzkainu/buy/";
									}
									break;
								}
							case 2:
								{
									if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 5. "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 5 MRP (Inclusive of all taxes). - 35,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch5-pro-black-titanium-lte-sm-r925fzkainu/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 5. "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 5 MRP (Inclusive of all taxes). - 30,999 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch5-pro-black-titanium-bluetooth-sm-r920nzkainu/buy/";
									}
								}
						}
						break;
					}
				case 2:
					{
						cout<<"\n\n\n\t\t"<<a<<" You have choose a Galaxy Watch 4. "<<a;
						cout<<"\n\n\t\t\aThere are three varient avialble in Galaxy Watch 5 are.";
						cout<<"\n\n\t\t\t+---------+----------------------------------------+";
						cout<<"\n\t\t\t|   No.   |             Varients.                  |";
						cout<<"\n\t\t\t|---------|----------------------------------------|";
						cout<<"\n\t\t\t|    1.   |     Galaxy Watch 4 Classic (46mm).     |";
						cout<<"\n\t\t\t|---------|----------------------------------------|";
						cout<<"\n\t\t\t|    2.   |     Galaxy Watch 4 Classic (42mm).     |";
						cout<<"\n\t\t\t|---------|----------------------------------------|";
						cout<<"\n\t\t\t|    2.   |     Galaxy Watch 4 (44mm).             |";
						cout<<"\n\t\t\t|---------|----------------------------------------|";
						cout<<"\n\t\t\t|    2.   |     Galaxy Watch 4 (40mm).             |";
						cout<<"\n\t\t\t+---------+----------------------------------------+";
						cout<<"\n\n\tSelect your watch according to number - ";
						cin>>screen;
						
						cout<<"\n\n\t\t"<<a<<" Before going to purchase the product. "<<a;
						cout<<"\n\n\t\t"<<a<<" Please select your specification. "<<a;
						cout<<"\n\n\t\tPlease your CONNECTIVITY.";
						cout<<"\n\n\t\t\t+---------+-------------------+";
						cout<<"\n\t\t\t|   No.   |    CONNECTIVTY.   |";
						cout<<"\n\t\t\t|---------|-------------------|";
						cout<<"\n\t\t\t|    1.   |         4G.       |";
						cout<<"\n\t\t\t|---------|-------------------|";
						cout<<"\n\t\t\t|    2.   |     Bluetooth.    |";
						cout<<"\n\t\t\t+---------+-------------------+";
						cout<<"\n\n\tSelect your CONNECTIVITY type according to number - ";
						cin>>conn;
						if(conn==1)
						{
							lte==1;
						}
						else
						{
							blue==2;
						}
						cout<<"\n\n\t\tCheck your connectivity";
						if(lte==1)
						{
							cout<<"\n\n\t\tYou have choose a 4G connectivity.";
						}
						else
						{
							cout<<"\n\n\t\tYou have choose a Bluetooth connectivity.";
						}
						
						switch(screen)
						{
							case 1:
								{
									if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 Classic (46mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 Classic (46mm) MRP (Inclusive of all taxes). - 39,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-classic-silver-lte-sm-r895fzsainu/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 Classic (46mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 Classic (46mm) MRP (Inclusive of all taxes). - 34,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-black-bluetooth-sm-r870nzkainu/buy/";
									}
									break;
								}
							case 2:
								{
									if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 Classic (42mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 Classic (42mm) MRP (Inclusive of all taxes). - 36,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-classic-silver-lte-sm-r895fzsainu/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 Classic (42mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 Classic (42mm) MRP (Inclusive of all taxes). - 31,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-black-bluetooth-sm-r870nzkainu/buy/";
									}
								}
							case 3:
								{
									if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 (44mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 (44mm) MRP (Inclusive of all taxes). - 14,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-classic-silver-lte-sm-r895fzsainu/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 (44mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 (44mm) MRP (Inclusive of all taxes). - 12,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-black-bluetooth-sm-r870nzkainu/buy/";
									}
								}
							case 4:
								{
									if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 (40mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 (40mm) MRP (Inclusive of all taxes). - 14,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-classic-silver-lte-sm-r895fzsainu/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 (40mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 4 (40mm) MRP (Inclusive of all taxes). - 12,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch4-black-bluetooth-sm-r870nzkainu/buy/";
									}
								}
							break;
						}
					}
				case 3:
					{
						cout<<"\n\n\n\t\t"<<a<<" You have choose a Galaxy Watch 3. "<<a;
						cout<<"\n\n\t\t"<<a<<" Before going to purchase the product. "<<a;
						cout<<"\n\n\t\t"<<a<<" Please select your specification. "<<a;
						cout<<"\n\n\t\tPlease your CONNECTIVITY.";
						cout<<"\n\n\t\t\t+---------+-------------------+";
						cout<<"\n\t\t\t|   No.   |    CONNECTIVTY.   |";
						cout<<"\n\t\t\t|---------|-------------------|";
						cout<<"\n\t\t\t|    1.   |         4G.       |";
						cout<<"\n\t\t\t|---------|-------------------|";
						cout<<"\n\t\t\t|    2.   |     Bluetooth.    |";
						cout<<"\n\t\t\t+---------+-------------------+";
						cout<<"\n\n\tSelect your CONNECTIVITY type according to number - ";
						cin>>conn;
						if(conn==1)
						{
							lte==1;
						}
						else
						{
							blue==2;
						}
						cout<<"\n\n\t\tCheck your connectivity";
						if(lte==1)
						{
							cout<<"\n\n\t\tYou have choose a 4G connectivity.";
						}
						else
						{
							cout<<"\n\n\t\tYou have choose a Bluetooth connectivity.";
						}
						if(lte==1)
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 3 (45mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is 4G.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 3 (45mm) MRP (Inclusive of all taxes). - 21,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch3-45mm-mystic-silver-lte-sm-r845fzsains/buy/";
									}
									else
									{
										cout<<"\n\n\n\t\t"<<a<<" you have purchase a Samsung Galaxy watch 4 (45mm). "<<a;
										cout<<"\n\n\t\tAnd, your connectivity is Bluetooth.";
										cout<<"\n\n\t\tYour grand total of Samsung Galaxy watch 5 (45mm) MRP (Inclusive of all taxes). - 26,990 RS.";
										cout<<"\n\n\n\t\tFor more information visit our website. -";
										cout<<"\n\n\t\t"<<f<<" https://www.samsung.com/in/watches/galaxy-watch/galaxy-watch3-45mm-mystic-black-sm-r840ntkains/buy/";
									}
						break;
					}
			}
			myfun1();
			
		//	kanishk();
	}
};


class ayush:public samsung
{
	public:
		int kanishk,bhavesh;
		aaa()
		{
			
			//samsung sam;
			mobile m;
			tablet t;
			laptop l;
			tv tel;
			refrigerators r;
			watch wat;
			accessories as;
			
			cout<<"\n\tHello Sir/Mam.";
			cout<<"\n\n\tWelcome to Samsung store.";
			cout<<"\n\n\tWhat type of shoping you want to do - ";
			cout<<"\n\n\t\t\t+---------+----------------------------+";
			cout<<"\n\t\t\t|   No.   |        Samsung.            |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    1.   |      Mobile phone.         |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    2.   |      Tablet.               |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    3.   |      Galaxy book.          |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    4.   |      Television.           |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    5.   |      Refrigerator.         |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    6.   |      Monitor.              |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    7.   |      Air conditioner.      |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    8.   |      Washing machine.      |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    9.   |      Vaccum cleaner.       |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    10.  |      Air purifier.         |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    11.  |      Projector.            |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    12.  |      Sound devices.        |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    13.  |      Galaxy watchs.        |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    14.  |      Galaxy buds.          |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    15.  |      Accessories.          |";
			cout<<"\n\t\t\t+---------+----------------------------+";
			cout << "\n\n\tPress Enter to see avilable product in store.";
			cin.ignore();
			cout<<"\n\n\tProduct which are avilable in store are - ";
			cout<<"\n\n\t\t\t+---------+----------------------------+";
			cout<<"\n\t\t\t|   No.   |        Samsung.            |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    1.   |      Mobile phone.         |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    2.   |      Tablet.               |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    3.   |      Galaxy book.          |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    4.   |      Television.           |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    5.   |      Refrigerator.         |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\t\t\t|    6.   |      Galaxy watchs.        |";
			cout<<"\n\t\t\t|---------|----------------------------|";
			cout<<"\n\n\tPlease select your Product which you want to buy according to number which is given above - ";
			cin>>bhavesh;
			switch(bhavesh)
			{
				case 1:
					{
						//moblie phones
						m.mob();
						break;
					}
				case 2:
					{
						//tablet
						t.tab();
						break;
					}
				case 3:
					{
						//Galaxy book
						l.lap();
						break;
					}
				case 4:
					{
						//Television
						tel.television();
						break;
					}
				case 5:
					{
						//refrigretor
						r.ref();
						break;
					}
				case 6:
					{
						//	galaxy watch
						wat.watc();
						//sam.myfun1();
						break;
					}
				default :
					{
						cout<<"\n\n\tInvalid value";
						break;
					}
					break;
			}
		}
		getch();
};


//
main()
{
	int b=20;
	ayush aya;
	//aya.myfun1();
	cout << "\n\n\tPress Enter to start shooping.";
	cin.ignore();
	aya.aaa();
	getch();
}

