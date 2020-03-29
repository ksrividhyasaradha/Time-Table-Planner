#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

float s=0;
int temp[8];
int t=1; long double l=0;
fstream f("per1.txt",ios::in|ios::out);
fstream ft("permu1.txt",ios::in|ios::out);
fstream f2("per2.txt",ios::in|ios::out);
void permute( char a[],int i,int n,int h)
{


  int j;
  if(i==n)   { f<<a<<'\n';
  }
  else
   { for(j=i;j<n;j++)
      { char temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	permute(a,i+1,n,h);
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
   }
}


void permute1( char a[],int i,int n,int h)
{


  int j;
  if(i==n)   { ft<<a<<'\n';
  }
  else
   { for(j=i;j<n;j++)
      { char temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	permute1(a,i+1,n,h);
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
   }
}
void permute2( char a[],int i,int n,int h)
{


  int j;
  if(i==n)   { f2<<a<<'\n';
  }
  else
   { for(j=i;j<n;j++)
      { char temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	permute2(a,i+1,n,h);
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
   }
}



struct ts1112a
{ int eng,mat,phy,chem,csc,we,pt,gst,yoga,cscl,phyl,cheml; };
struct ts1112b
{ int eng,mat,phy,chem,bio,we,pt,gst,yoga,biol,phyl,cheml; };
struct ts1112c
{ int acc,eco,bst,mat,mar,eng,we,pt,yoga,gst; };
struct slot
{ unsigned int period;
  int check;
};
char subjects[18][9];
void subject_pop()
{   strcpy(subjects[0],"Eng");
    strcpy(subjects[1],"Mat");
    strcpy(subjects[2],"Phy");
    strcpy(subjects[3],"Chem");
    strcpy(subjects[4],"Bio" );
    strcpy(subjects[5],"Csc");
    strcpy(subjects[6],"phyl");
    strcpy(subjects[7],"cheml");
    strcpy(subjects[8],"biol");
    strcpy(subjects[9],"cscl" );
    strcpy(subjects[10],"acc" );
    strcpy(subjects[11],"bst" );
    strcpy(subjects[12],"eco");
    strcpy(subjects[13],"mar");
    strcpy(subjects[14],"we");
    strcpy(subjects[15],"pt");
    strcpy(subjects[16],"yoga");
    strcpy(subjects[17],"gst");
 }
char days[6][6]={"Mon","Tue","Wed","Thu","Fri","Sat"};

class teacher
{ public:
  slot tt[6][8];
  teacher()
  { for(int i=0;i<6;i++)
	 for( int j=0;j<8;j++)
	      { tt[i][j].period=0;
		tt[i][j].check=0;
	      }
  }

  int check1(int m,int n)
     {
	if(tt[m][n].check==0)
	{
	  return 1;
	}
	else if(tt[m][n].check == 1)
	{
	  return 0;
	}
	else
	{
	  return 1;
	}
  }
  void pop(int m,int n,int x)
  {
    tt[m][n].period=x;
    tt[m][n].check=1;
  }
  void disp()
  { for (int i=1;i<10;i++)
      {  getch();
	cout<<'\n';
	for( int j=0;j<5;j++)
	{ for(int k=0;k<8;k++)
	  cout<<T[i].tt[j][k].period<<' ';
	  cout<<'\n';
	}
     }
  }
}T[30];
class csc1112
{ int subjs[12],eng,mat,phy,chem,csc,phyl,cheml,cscl,we,pt,yoga,gst;
  slot tt[6][8];
  slot dl[5][8];
  slot dls[5];
  ts1112a TSa;
  public:
  csc1112()
  { subjs[0]=1;
    subjs[1]=2;
    subjs[2]=3;
    subjs[3]=4;
    subjs[4]=6;
    subjs[5]=7;
    subjs[6]=8;
    subjs[7]=10;
    subjs[8]=15;
    subjs[9]=16;
    subjs[10]=17;
    subjs[11]=18 ;
    for(int i=0;i<5;i++)
       for( int j=0;j<8;j++)
	   { tt[i][j].check=0; tt[i][j].period=0; }
  }
  void disp()
  {

    cout<<setw(12)<<"   I"<<setw(9)<<"II"<<setw(9)<<"III"<<setw(9)<<"IV"
	     <<setw(9)<<"V"<<setw(9)<<"VI"<<setw(9)<<"VII"<<setw(10)<<"VIII\n";

     for(int i=0;i<6;i++)
       { cout<<days[i];
	 for(int j=0;j<8;j++)
	   {  cout<<setw(9);
	      if(i==5 ) if(j>=5) break;
	      //cout<<tt[i][j].period;
	      switch(tt[i][j].period)
		    { case 1: cout<<"Eng"; break;
		      case 2: cout<<"Mat"; break;
		      case 3: cout<<"Phy"; break;
		      case 4: cout<<"Chem"; break;
		      case 6: cout<<"CSc"; break;
		      case 7: cout<<"Phyl"; break;
		      case 8: cout<<"Cheml"; break;
		      case 10: cout<<"CScl"; break;
		      case 15: cout<<"W.E."; break;
		      case 16: cout<<"P.T."; break;
		      case 17: cout<<"Yoga"; break;
		      case 18: cout<<"G.S.T."; break;
		    }

	   }

     cout<<'\n';
   }
//       for(i=0;i<5;i++)
//	      cout<<setw(9)<<tt[5][i].period;
  }

  void read()
  { cout<<"TEACHER CODES\n"
    <<"1.Mrs.Mary Immanuel Arasi\n"
    <<"2.Ms.S.E.S.K. Priya\n"
    <<"3.Mrs.S.Bhargavi\n"
    <<"4.Mrs.B.Subha\n"
    <<"5.Mrs.K.Chitra\n"
    <<"6.Mrs.Padmam Radhakrishnan\n"
    <<"7.Mrs.S.Sindu\n"
    <<"8.Mrs.Bindu K.P.\n"
    <<"9.Mrs.Uma Thiagarajan\n"
    <<"10.Mrs.Devikala\n"
    <<"13.Mrs.Meera Nanda Kumar\n"
    <<"14.Mrs.R.Kanjana\n";

    cout<<"Enter teacher registration number in the following format:\n";
    cout<<"1.Eng, 2.Mat, 3.Phy, 4.Chem, 5.Csc, 6.Phy lab, 7.Chem lab,\n";
    cout<<"8.Csc lab, 9.W.E., 10.G.S.T., 11.Yoga, 12.P.T.\n";
    cin>>eng>>mat>>phy>>chem>>csc>>phyl>>cheml>>cscl>>we>>gst>>yoga>>pt;

  }
  int ret_teacher(int sub)
  { if(sub==1)
	 return eng;
    if(sub==2)
       return mat;
    if(sub==3)
       return phy;
    if(sub==4)
       return chem;
    if(sub==6)
       return csc;
    if(sub==7)
       return phyl;
    if(sub==8)
       return cheml;
    if(sub==10)
       return cscl;
    if(sub==15)
       return we;
    if(sub==17)
       return yoga;
    if(sub==18)
       return pt;
    if(sub==16)
       return gst;


   }
  int teacheck(int m,int n,int s)
   { int x=ret_teacher(s);
     return T[x].check1(m,n);

   }
  void lab(int clas)
  { if(clas==11)
    { int s;
      tt[0][3].period=10;tt[0][4].period=10;
      dl[0][3].period=10;dl[0][4].period=10;
      tt[0][3].check=tt[0][4].check=1;
      dl[0][3].check=dl[0][4].check=1;
      s=ret_teacher(10);
      T[s].tt[0][3].period=T[s].tt[0][4].period=111;
      T[s].tt[0][3].check=T[s].tt[0][4].check=1;
      s=ret_teacher(8);
      T[s].tt[0][3].period=T[s].tt[0][4].period=111;
      T[s].tt[0][3].check=T[s].tt[0][4].check=1;

      tt[0][7].period=17;
      tt[0][7].check=1;
      dl[0][7].period=17;
      dl[0][7].check=1;

      tt[1][6].period=tt[1][7].period=8;
      dl[1][6].period=dl[1][7].period=8;
      s=ret_teacher(8);
      T[s].tt[1][6].period=T[s].tt[1][7].period=111;
      T[s].tt[1][6].check=T[s].tt[1][7].check=1;
      s=ret_teacher(7);
      T[s].tt[1][6].period=T[s].tt[1][7].period=111;
      T[s].tt[1][6].check=T[s].tt[1][7].check=1;

      tt[3][3].period=7;tt[3][4].period=7;
      dl[3][3].period=7;dl[3][4].period=7;
      s=ret_teacher(7);
      T[s].tt[3][3].period=T[s].tt[3][4].period=111;
      T[s].tt[3][3].check=T[s].tt[3][4].check=1;
      s=ret_teacher(10);
      T[s].tt[3][3].period=T[s].tt[3][4].period=111;
      T[s].tt[3][3].check=T[s].tt[3][4].check=1;



      tt[1][6].check=tt[1][7].check=1;
      tt[3][3].check=tt[3][4].check=1;
      dl[1][6].check=dl[1][7].check=1;
      dl[3][3].check=dl[3][4].check=1;
      tt[2][7].period=17;
      tt[2][7].check=1;
      dl[2][7].period=17;
      dl[2][7].check=1;
    }
    else
    { int s;
      tt[4][3].period=10;tt[4][4].period=10;
      tt[4][3].check=1;tt[4][4].check=1;
      s=ret_teacher(10);
      T[s].tt[4][3].period=T[s].tt[4][4].period=121;
      T[s].tt[4][3].check=T[s].tt[4][4].check=1;
      s=ret_teacher(7);
      T[s].tt[4][3].period=T[s].tt[4][4].period=121;
      T[s].tt[4][3].check=T[s].tt[4][4].check=1;

      tt[1][3].period=8;tt[1][4].period=8;
      s=ret_teacher(8);
      T[s].tt[1][3].period=T[s].tt[1][4].period=121;
      T[s].tt[1][3].check=T[s].tt[1][4].check=1;
      s=ret_teacher(10);
      T[s].tt[1][3].period=T[s].tt[1][4].period=121;
      T[s].tt[1][3].check=T[s].tt[1][4].check=1;

      tt[2][3].period=7;tt[2][4].period=7;
      s=ret_teacher(7);
      T[s].tt[2][3].period=T[s].tt[2][4].period=121;
      T[s].tt[2][3].check=T[s].tt[2][4].check=1;
      s=ret_teacher(8);
      T[s].tt[2][3].period=T[s].tt[2][4].period=121;
      T[s].tt[2][3].check=T[s].tt[2][4].check=1;

      dl[4][3].period=10;dl[4][4].period=10;
      dl[1][3].period=8;dl[1][4].period=8;
      dl[2][3].period=7;dl[2][4].period=7;
      tt[4][3].check=1;tt[4][4].check=1;
      tt[1][3].check=1;tt[1][4].check=1;
      tt[2][3].check=1;tt[2][4].check=1;
      tt[0][4].period=17;tt[0][4].check=1;
      tt[2][7].period=17;tt[2][7].check=1;
      dl[0][4].period=17;dl[0][4].check=1;
      dl[2][7].period=17;dl[2][7].check=1;
      dl[4][3].check=1;dl[4][4].check=1;
      dl[1][3].check=1;dl[1][4].check=1;
      dl[2][3].check=1;dl[2][4].check=1;
    }
  }
  void set(int clas)
  { int count=0;
    for(int i=0;i<5;i++)
     { count=0;
       for(int j=0;j<8;j++)
	{ if(dl[i][j].check==0)
	   { dl[i][j].period=subjs[count++];
	     dl[i][j].check=1;
	   }
	  if(count==5)  break;
	}
     }


   int list[9]={2,15,4,6,18,15,2,18,16},l=0,pr=3;
    for( i=0;i<5;i++)
       for( int j=5;j<8;j++ )
	  {if(l==7) break;
	   if(dl[i][j].check==0)
		 { dl[i][j].period=list[l++];
		   dl[i][j].check=1;
		 }
	  }
    for(i=0;i<3;i++)
     { dls[i].period=subjs[i];
       dls[i].check=1;
     }
     dls[3].period=18; dls[3].check=1;
     dls[4].period=16; dls[4].check=1;
/*	for(int g=0;g<5;g++)
	{ cout<<dls[g].period<<' '; }
     cout<<'\n';
*/
  char s[9];
  for(int h=0;h<5;h++)
   {
     for(int g=0;g<8;g++)
       {	s[g]=char((dl[h][g].period)+96);

	}
     permute(s,0,8,h);
     best(h,clas);
   }

  }
   void sat(int clas)
{

	//int m=0;*/

	char s[6],a[6];
	for(int g=0;g<5;g++)
	s[g]=char((dls[g].period)+96);
	//f.open("per1.txt",ios::out);
	permute(s,0,5,0);
	//
	f.close();

	f.open("per1.txt",ios::in);
	f.seekg(0,ios::beg);
	int  flag4=1;
	int m =0;
	while(f)
	{ 	int list[8];

		f>>a;
		int point=0,subs=0,flag=1,flag1=1,flag2=1,flag3=1,pos,tr=0;
		for(int i=0;a[i];i++)
		list[subs++]=a[i]-96;

		for(int b=0;b<5;b++)
		{
			if(tt[5][b].check==1) {
			if(list[b]!=tt[5][b].period)
			{ flag=0; }
					     }
			if(teacheck(5,b,list[b])==0)
			{ flag2=0;  }

		     /*	if(list[b]>14)  {
			if(b<4)
			{  flag1=0; }    } */
		}



		if(flag&&flag2)
		{
			for(int j=0;j<5;j++)
			{ 	tt[5][j].period=list[j];
				tt[5][j].check=1;
				int o=ret_teacher(list[j]);
				if(list[j]!=17)
				{
					if(clas==11)
					{ T[o].tt[5][j].period=111; T[o].tt[5][j].check=1; }
					else
					{ T[o].tt[5][j].period=121; T[o].tt[5][j].check=1; }
				}
			}

		} m++;
		// m = m +1;
		if(f.eof()){   f.close() ;f.open("per1.txt",ios::out);  break; }
	}




  }


  void best(int day,int clas)
  { 	startover:
	f.close();
	int D=day;
	char a[9];
	long sd=0,f1=0,f0=0;

	f.open("per1.txt",ios::in);
	f.seekg(0,ios::beg);
	int  flag4=1;
	int m =0;
	while(f)
	{ 	int list[8];

		f>>a;

		int point=0,subs=0,flag=1,flag1=1,flag2=1,flag3=1,pos,tr=0;
		for(int i=0;a[i];i++)
		{
		list[subs++]=a[i]-96;

		}

		for(int b=0;b<8;b++)
		{
			if(tt[day][b].check==1) {
			if(list[b]!=tt[day][b].period)
			{ flag=0; }
			;                        }
			if(list[b]<=6||list[b]>=11) {
			if(teacheck(day,b,list[b])==0)
			{ flag2=0;  }                }

			if(list[b]>14)  {
			if(b<4)
			{  flag1=0; }    }
		}
		if(flag&&flag1&&flag2)
		{
			for(int j=0;j<8;j++)
			{ 	if(list[j]==0) goto startover;

				tt[day][j].period=list[j];
				tt[day][j].check=1;
				int o=ret_teacher(list[j]);
				if(list[j]!=17)
				{
					if(clas==11)
					{ T[o].tt[day][j].period=111; T[o].tt[day][j].check=1; }
					else
					{ T[o].tt[day][j].period=121; T[o].tt[day][j].check=1; }
				}
			}

		}

		if(f.eof()) {   f.close() ;f.open("per1.txt",ios::out);  break; }
	}

  }



}A12,A11;


class bio1112
{ int subjs[13];
  slot tt[6][8];
  slot dl[5][8];
  slot dls[5];
  ts1112b TSb;
  int eng,mat,phy,chem,bio,phyl,cheml,biol,we,pt,yoga,gst;
  public:
  bio1112()
  { subjs[0]=1;
    subjs[1]=2;
    subjs[2]=3;
    subjs[3]=4;
    subjs[4]=5;
    subjs[5]=7;
    subjs[6]=8;
    subjs[7]=9;
    subjs[8]=15;
    subjs[9]=16;
    subjs[10]=17;
    subjs[11]=18 ;
    for(int i=0;i<5;i++)
       for( int j=0;j<8;j++)
	   { tt[i][j].check=0; tt[i][j].period=0; }
  }
  void disp()
  {      cout<<setw(12)<<"   I"<<setw(9)<<"II"<<setw(9)<<"III"<<setw(9)<<"IV"
	     <<setw(9)<<"V"<<setw(9)<<"VI"<<setw(9)<<"VII"<<setw(10)<<"VIII\n";
	 for(int i=0;i<6;i++)
	  {cout<<days[i];
	   for(int j=0;j<8;j++)
	    {  cout<<setw(9);
	    if(i==5) if(j>=5) break;
	      //cout<<tt[i][j].period;
	      switch(tt[i][j].period)
		  {   case 1: cout<<"Eng"; break;
		      case 2: cout<<"Mat"; break;
		      case 3: cout<<"Phy"; break;
		      case 4: cout<<"Chem"; break;
		      case 5: cout<<"Bio"; break;
		      case 7: cout<<"Phyl"; break;
		      case 8: cout<<"Cheml"; break;
		      case 9: cout<<"Biol"; break;
		      case 15: cout<<"W.E."; break;
		      case 16: cout<<"P.T."; break;
		      case 17: cout<<"Yoga"; break;
		      case 18: cout<<"G.S.T."; break;
		  }

	   }
	 cout<<'\n';
       }
  }
  void read()
  { cout<<"TEACHER CODES\n"
    <<"1.Mrs.Mary Immanuel Arasi\n"
    <<"2.Ms.S.E.S.K. Priya\n"
    <<"3.Mrs.S.Bhargavi\n"
    <<"4.Mrs.B.Subha\n"
    <<"5.Mrs.K.Chitra\n"
    <<"6.Mrs.Padmam Radhakrishnan\n"
    <<"7.Mrs.S.Sindu\n"
    <<"8.Mrs.Bindu K.P.\n"
    <<"9.Mrs.Uma Thiagarajan\n"
    <<"10.Mrs.Devikala\n"
    <<"13.Mrs.Meera Nanda Kumar\n"
    <<"14.Mrs.R.Kanjana\n";

    cout<<"Enter teacher registration number in the following format:\n"
	<<"1.Eng, 2.Mat, 3.Phy, 4.Chem, 5.Bio, 6.Phy lab, 7.Chem lab,\n"
	<<"8.Bio lab, 9.W.E., 10.G.S.T., 11.Yoga, 12.P.T.\n";
    cin>>eng>>mat>>phy>>chem>>bio>>phyl>>cheml>>biol>>we>>gst>>yoga>>pt;


  }
  int ret_teacher(int sub)
  { if(sub==1)
	 return eng;
    if(sub==2)
       return mat;
    if(sub==3)
       return phy;
    if(sub==4)
       return chem;
    if(sub==5)
       return 2;
    if(sub==7)
       return phyl;
    if(sub==8)
       return cheml;
    if(sub==9)
       return biol;
    if(sub==15)
       return we;
    if(sub==17)
       return yoga;
    if(sub==18)
       return pt;
    if(sub==16)
       return gst;

   /*if(strcmpi("eng",subjects[sub-1])==0)
       return TSb.eng;
    if(strcmpi("mat",subjects[sub-1])==0)
       return TSb.mat;
    if(strcmpi("phy",subjects[sub-1])==0)
       return TSb.phy;
    if(strcmpi("chem",subjects[sub-1])==0)
       return TSb.chem;
    if(strcmpi("bio",subjects[sub-1])==0)
       return TSb.bio;
    if(strcmpi("phyl",subjects[sub-1])==0)
       return TSb.phyl;
    if(strcmpi("cheml",subjects[sub-1])==0)
       return TSb.cheml;
    if(strcmpi("biol",subjects[sub-1])==0)
       return TSb.biol;
    if(strcmpi("we",subjects[sub-1])==0)
       return TSb.we;
    if(strcmpi("yoga",subjects[sub-1])==0)
       return TSb.yoga;
    if(strcmpi("pt",subjects[sub-1])==0)
       return TSb.pt;
    if(strcmpi("gst",subjects[sub-1])==0)
       return TSb.gst;     */
   }

  int teacheck(int m,int n,int s)
   {
     int x=ret_teacher(s);
     if(s==5) x=2;
     return T[x].check1(m,n);
   }

  void lab(int clas)
  { if(clas==11)
    { int s;
      tt[0][6].period=9;tt[0][7].period=9;
      dl[0][6].period=9;dl[0][7].period=9;
      tt[0][6].check=tt[0][7].check=1;
      dl[0][6].check=dl[0][7].check=1;
      s=ret_teacher(9);
      T[s].tt[0][6].period=T[s].tt[0][7].period=112;
      T[s].tt[0][6].check=T[s].tt[0][7].check=1;
      s=ret_teacher(7);
      T[s].tt[0][6].period=T[s].tt[0][7].period=112;
      T[s].tt[0][6].check=T[s].tt[0][7].check=1;

      tt[3][4].period=17;
      tt[3][4].check=1;
      dl[3][4].period=17;
      dl[3][4].check=1;

      tt[2][6].period=tt[2][7].period=8;
      dl[2][6].period=dl[2][7].period=8;
      s=ret_teacher(8);
      T[s].tt[2][6].period=T[s].tt[2][7].period=112;
      T[s].tt[2][6].check=T[s].tt[2][7].check=1;
      s=ret_teacher(9);
      T[s].tt[2][6].period=T[s].tt[2][7].period=112;
      T[s].tt[2][6].check=T[s].tt[2][7].check=1;

      tt[4][6].period=7;tt[4][7].period=7;
      dl[4][6].period=7;dl[4][7].period=7;
      s=ret_teacher(7);
      T[s].tt[4][6].period=T[s].tt[4][7].period=112;
      T[s].tt[4][6].check=T[s].tt[4][7].check=1;
      s=ret_teacher(8);
      T[s].tt[4][6].period=T[s].tt[4][7].period=112;
      T[s].tt[4][6].check=T[s].tt[4][7].check=1;



      tt[4][6].check=tt[4][7].check=1;
      tt[2][6].check=tt[2][7].check=1;
      dl[4][6].check=dl[4][7].check=1;
      dl[2][6].check=dl[2][7].check=1;
      tt[1][4].period=17;
      tt[1][4].check=1;
      dl[1][4].period=17;
      dl[1][4].check=1;
    }
    else
    { int s;
      tt[4][3].period=9;tt[4][4].period=9;
      tt[4][3].check=1;tt[4][4].check=1;
      s=ret_teacher(9);
      T[s].tt[4][3].period=T[s].tt[4][4].period=122;
     T[s].tt[4][3].check=T[s].tt[4][4].check=1;
      s=ret_teacher(8);
      T[s].tt[4][3].period=T[s].tt[4][4].period=122;
      T[s].tt[4][3].check=T[s].tt[4][4].check=1;

      tt[1][3].period=7;tt[1][4].period=7;
      s=ret_teacher(7);
      T[s].tt[1][3].period=T[s].tt[1][4].period=122;
      T[s].tt[1][3].check=T[s].tt[1][4].check=1;
      s=ret_teacher(9);
      T[s].tt[1][3].period=T[s].tt[1][4].period=122;
      T[s].tt[1][3].check=T[s].tt[1][4].check=1;

      tt[3][6].period=8;tt[3][7].period=8;
      s=ret_teacher(8);
      T[s].tt[3][6].period=T[s].tt[3][7].period=122;
      T[s].tt[3][6].check=T[s].tt[3][7].check=1;
      s=ret_teacher(7);
      T[s].tt[3][6].period=T[s].tt[3][7].period=122;
      T[s].tt[3][6].check=T[s].tt[3][7].check=1;

      dl[4][3].period=9;dl[4][4].period=9;
      dl[1][3].period=7;dl[1][4].period=7;
      dl[3][6].period=8;dl[3][7].period=8;
      tt[4][3].check=1;tt[4][4].check=1;
      tt[1][3].check=1;tt[1][4].check=1;
      tt[3][6].check=1;tt[3][7].check=1;
      tt[4][7].period=17;tt[4][7].check=1;
      tt[2][4].period=17;tt[2][4].check=1;
      dl[2][4].period=17;dl[2][4].check=1;
      dl[4][7].period=17;dl[4][7].check=1;
      dl[4][3].check=1;dl[4][4].check=1;
      dl[1][3].check=1;dl[1][4].check=1;
      dl[3][6].check=1;dl[3][7].check=1;
    }
  }
  void set(int clas)
  {
    int count=0;
    for(int i=0;i<5;i++)
     { count=0;
       for(int j=0;j<8;j++)
	{ if(dl[i][j].check==0)
	   {
	     dl[i][j].period=subjs[count++];
	     dl[i][j].check=1;
	   }
	  if(count==5)  break;
	}
     }


   int list[9]={15,4,2,18,2,5,15,18,16},l=0,pr=3;
    for( i=0;i<6;i++)
       for( int j=5;j<8;j++ )
	  {  if(l>=7)
		dls[pr++].period=list[l++];
	     if(dl[i][j].check==0)
		 { dl[i][j].period=list[l++];
		   dl[i][j].check=1;
		 }
	  }
    for(i=0;i<3;i++)

     { dls[i].period=subjs[i];
       dls[i].check=1;
     }

  char s[9];
  for(int h=0;h<5;h++)
   {
     for(int g=0;g<8;g++)
     {
	s[g]=char((dl[h][g].period)+96);
     }
     permute1(s,0,8,h);
     best(h,clas);
   }

  }
  void sat(int clas)
{

	//int m=0;*/

	char s[6],a[6];
	for(int g=0;g<5;g++)
	s[g]=char((dls[g].period)+96);
	//f.open("per1.txt",ios::out);
	permute1(s,0,5,0);
	//
	ft.close();

	ft.open("permu1.txt",ios::in);
	ft.seekg(0,ios::beg);
	int  flag4=1;
	int m =0;
	while(ft)
	{ 	int list[8];

		ft>>a;
		int point=0,subs=0,flag=1,flag1=1,flag2=1,flag3=1,pos,tr=0;
		for(int i=0;a[i];i++)
		list[subs++]=a[i]-96;

		for(int b=0;b<5;b++)
		{
			if(tt[5][b].check==1) {
			if(list[b]!=tt[5][b].period)
			{ flag=0; }
					     }
			if(teacheck(5,b,list[b])==0)
			{ flag2=0;  }

		     /*	if(list[b]>14)  {
			if(b<4)
			{  flag1=0; }    } */
		}



		if(flag&&flag2)
		{
			for(int j=0;j<5;j++)
			{ 	tt[5][j].period=list[j];
				tt[5][j].check=1;
				int o=ret_teacher(list[j]);
				if(list[j]!=17)
				{
					if(clas==11)
					{ T[o].tt[5][j].period=111; T[o].tt[5][j].check=1; }
					else
					{ T[o].tt[5][j].period=121; T[o].tt[5][j].check=1; }
				}
			}

		} m++;
		// m = m +1;
		if(ft.eof()){   ft.close() ;ft.open("permu1.txt",ios::out);  break; }
	}




  }


   void best(int day,int clas)
  {
	startover:

	ft.close();
	int D=day;
	char a[9];
	long sd=0,f1=0,f0=0;

	ft.open("permu1.txt",ios::in);
	ft.seekg(0,ios::beg);
	int flag4=1;
	int m =0;
	while(ft)
	{ 	int list[8];

		ft>>a;

		int point=0,subs=0,flag=1,flag1=1,flag2=1,flag3=1,pos,tr=0;
		for(int i=0;a[i];i++)
		{
		 list[i]=a[i]-96;

		}

		for(int b=0;b<8;b++)
		{
			if(tt[day][b].check==1) {
			if(list[b]!=tt[day][b].period)
			{ flag=0; }
			;                        }
			if(list[b]<=6||list[b]>=11)
		      {	if(teacheck(day,b,list[b])==0)
			{ flag2=0;  }
		      }

			if(list[b]>14)  {
			if(b<4)
			{  flag1=0; }    }
		}
	if(flag&&flag1&&flag2)
		{
			for(int j=0;j<8;j++)
			{

				if(list[j]==0) goto startover;


				tt[day][j].period=list[j];
				tt[day][j].check=1;
				int o=ret_teacher(list[j]);

				if(list[j]!=17)
				{
					if(clas==11)
					{ T[o].tt[day][j].period=112; T[o].tt[day][j].check=1; }
					else
					 T[o].tt[day][j].period=122; T[o].tt[day][j].check=1;


				}
			}

		}

		if(ft.eof()) {   ft.close() ;ft.open("permu1.txt",ios::out);  break; }
	}

  }




}B11,B12; 
void main()
{
  clrscr();
  f.flush();
  ft.flush();
  subject_pop();

  cout<<"\t\t12A\n";
  A12.read();
  clrscr();
  cout<<"\t\t11A\n";
  A11.read();
  clrscr();
  cout<<"\t\t12B\n";
  B12.read();
  clrscr();
  cout<<"\t\t11B\n";
  B11.read();
  clrscr();

  A12.lab(12);
  A11.lab(11);
  B12.lab(12);
  B11.lab(11);

  cout<<setw(40)<<"12a\n";
  A12.set(12);
  A12.sat(12);
  A12.disp();

  cout<<"\n"<<setw(40)<<"11a\n";
  A11.set(11);
  A11.sat(11);
  A11.disp();
  getch();

  cout<<"\n"<<setw(40)<<"12b\n";
  B12.set(12);
  B12.sat(12);
  B12.disp();

  cout<<"\n"<<setw(40)<<"11b\n";
  B11.set(11);
  B11.sat(11);
  B11.disp();
  getch();
  cin.clear();
  cin.ignore(10000,'\n');
//  T[0].disp();
  f.close();
  ft.close();
  memset(subjects, 0 , sizeof(subjects));

  getch();
}
