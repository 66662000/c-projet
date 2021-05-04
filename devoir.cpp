#include<iostream>
#include<cmath>
#include<string.h>
#include<vector>
#include<math.h>
using namespace std;


 main ()
{

int x, nb,no,no1,no2;
string conv, next;
cout<<" @Menu:\n\n"<<"1- Operation de codage/Decodage/Transcodage\n";
cout<<"2- Operations mathematiques\n";
cout<<"3- Gestion d information sur un etudiant\n";
cout<<"4- Ma realisation \n\n";
cout<<"Entrez le numero de votre choix: "; cin>> x;

if(x=1)
{
    cout<<"Operation de codage/Decodage/Transcodage\n 1- Decimal \n 2- Binaire\n 3- hexadecimal\n Entrer le numero de votre choix: ";
    cin>>no;
    if(no==1)
    {
        cout<<"Conversion Decimal en:\n 1- binaire\n 2- octal\n 3- Hexadecimal.\n Entrer le No: ";
        cin>>no1;
        if(no1==1)
        {
            cout<<"Conversion decimal en binaire.\n ";
            unsigned long long num;
    cout<<"Entrer le nombre decimal a convertir: ";
    cin>>num;
    vector<int> bit_vector;

    while (num>0)
    {
        bit_vector.push_back(num%2);
        num /=2;
    }
    cout<<"Resultat en binaire: ";
    for(int i=bit_vector.size() - 1; i>=0; --i)
        {
          cout<<bit_vector.at(i);

        }
     }

       if(no1==2)
        {
            cout<<"Convertion decimal en octal.\n ";
            unsigned long long num;
    cout<<"Entrer le nombre decimal a convertir: ";
    cin>>num;
    vector<int> bit_vector;

    while (num>0)
      {
        bit_vector.push_back(num%8);
        num /=8;
      }
    cout<<"Resultat en binaire: ";
    for(int i=bit_vector.size() - 1; i>=0; --i)
        {
          cout<<bit_vector.at(i);

        }
      }
      if(no1==3)
      {
          int dec_num, r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "\n\n Convertion des nombres decimal en hexadecimal :\n";
	cout << "---------------------------------------------------\n";
	cout << " Entrez le nombre decimal: ";
	cin>> dec_num;

        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
        }
        cout<<" Le nombre hexadecimal est: "<<hexdec_num<<"\n";

      }

   }
   if(no==2)
   {
       cout<<"Conversion binaire en: 1- Decimal  2- Octal  3- Hexadecimal\n"<<"Choisissez un No: ";
       cin>>no1;
       if(no1==1)
       {
         long binaryNumber, decimalNumber = 0, j = 1, remainder;
	cout << "\n\n Conversio nombre binaire en decimal:\n";
	cout << "-----------------------------------------------\n";
	cout << " Entrez le nombre binaire: ";
	cin>> binaryNumber;
  while (binaryNumber != 0)
  {
   remainder = binaryNumber % 10;
   decimalNumber = decimalNumber + remainder * j;
   j = j * 2;
   binaryNumber = binaryNumber / 10;
  }
  cout<<" Le nombre decimal: " << decimalNumber<<"\n";
       }
       if(no1==2)
       {
           int binnum1, binaryNumber,rem, decnum=0, quot, i=1, j;
        int octnum[100];
	cout << "\n\n Conversion d un nombre binaire en octal:\n";
	cout << "---------------------------------------------\n";
	cout << " Entrez le nombre binaire: ";
	cin>> binaryNumber;
        binnum1=binaryNumber;
      while(binaryNumber > 0)
        {
            rem = binaryNumber % 10;
            decnum = decnum + rem*i;
            i = i*2;
            binaryNumber = binaryNumber/10;
        }
		i=1;
        quot = decnum;

        while(quot > 0)
        {
            octnum[i++] = quot % 8;
            quot = quot / 8;
        }
        cout<<" La valeur de " <<binnum1<< " en octal est : ";
        for(j=i-1; j>0; j--)
        {
            cout<<octnum[j];
        }
 cout<<"\n";
       }
       if(no1==3)
       {
           int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << "\n\n Convert a binary number to hexadecimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber > 0)
  {
   rem = binaryNumber % 2;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0)
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value: ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9)
   {
    cout<<(char)(hex[j] + 55)<<"";
   }
   else
   {
    cout<<hex[j]<<"";
   }
  }
       }
   }
   if(no==3)
   {
       cout<<"Conversion Hexacimal en: 1- binaire 2- octal 3- Decimal.\n Entrer le No: ";
        cin>>no1;
        if(no1==1)
        {
            cout<<"Convertion d un nombre Hexadecimal en binaire.\n";
            long int i=0;
	char binnum[100], hexdec[100];
	cout<<"Entrez le nombre Hexadecimal: ";
	cin>>hexdec;
	cout<<"\nLe nombre en binaire: ";
	while(hexdec[i])
	{
		switch(hexdec[i])
		{
			case '0' : cout<<"0000";
				break;
			case '1' : cout<<"0001";
				break;
			case '2' : cout<<"0010";
				break;
			case '3' : cout<<"0011";
				break;
			case '4' : cout<<"0100";
				break;
			case '5' : cout<<"0101";
				break;
			case '6' : cout<<"0110";
				break;
			case '7' : cout<<"0111";
				break;
			case '8' : cout<<"1000";
				break;
			case '9' : cout<<"1001";
				break;
			case 'A' : cout<<"1010";
				break;
			case 'B' : cout<<"1011";
				break;
			case 'C' : cout<<"1100";
				break;
			case 'D' : cout<<"1101";
				break;
			case 'E' : cout<<"1110";
				break;
			case 'F' : cout<<"1111";
				break;
			case 'a' : cout<<"1010";
				break;
			case 'b' : cout<<"1011";
				break;
			case 'c' : cout<<"1100";
				break;
			case 'd' : cout<<"1101";
				break;
			case 'e' : cout<<"1110";
				break;
			case 'f' : cout<<"1111";
				break;
			default : cout<<"\nInvalid Hexadecimal Digit "<<hexdec[i];
	}
   i++;
  }

        }
        if(no1==2)
        {
          cout<<"Convertion d un nombre Hexadecimal en octal.\n";
          int decimalNum=0, octalNum[30], rem, i=0, len=0;
    char hexDecNum[10];
    cout<<"Entrez le nombre Hexadecimal: ";
    cin>>hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            return 0;
        }
        decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout<<"\nResultat en octal: ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
        }
        if( no==3)
        {
          cout<<"Convertion d un nombre Hexadecimal en decimal.\n";
          char num[20];
    int i, r, len, hex = 0;

    cout<<"Entrez un nombre Hexadecimal : ";
    cin>>num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout<<"\nSa valeur en decimal " << num << " est : " << hex<<endl<<endl;

        }
   }

}

}
