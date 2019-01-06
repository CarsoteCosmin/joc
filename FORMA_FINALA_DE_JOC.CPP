#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <cstring>
#include <limits>
#include <stdio.h>
using namespace std;
int main ()
{
    srand ( time(NULL) );
    char sir[100];
    long long bani=500,copibani1,copibani2,copibani3,z;
    int x,y,incercari1=5,incercari2=7,incercari3=10,x1,x2,x3;
         do{x1= rand() % 200+1;
            x2= rand() % 150+1;
            x3= rand() % 100+1;
            cout<<x1<<" "<<x2<<" "<<x3<<endl;
            cout<<" Suma de bani cu care incepi este "<<bani<<" $"<<endl;
         do{cout<<" Alege dificultatea jocului: Greu=5 incercari , Mediu=7 incercari , Usor=10 incercari."<<endl<<" "<<endl;
            /*scanf("%s", sir);*/
            cin.get(sir,100);
            if(strcmp(sir,"7")==0)
           {cout<<" Tocmai ai apasat pe numarul meu preferat."<<endl;
            return 0;}
            if(strcmp(sir,"greu")!=0 &&  strcmp(sir,"mediu")!=0 &&  strcmp(sir,"usor")!=0 && strcmp(sir,"Greu")!=0 && strcmp(sir,"Mediu")!=0 && strcmp(sir,"Usor")!=0)
            cout<<" Hotomane ai doar trei variante."<<endl<<" "<<endl;
            }while(strcmp(sir,"greu")==0 &&  strcmp(sir,"mediu")==0 &&  strcmp(sir,"usor")==0 && strcmp(sir,"Greu")==0 && strcmp(sir,"Mediu")==0 && strcmp(sir,"Usor")==0);
            if(strcmp(sir,"greu")==0 || strcmp(sir,"Greu")==0)
            {cout<<" Pe ce suma doriti sa pariati?"<<endl;
            cin>>z;
            if(z<=bani && z!=0 && z>0)
           {copibani1=bani;
            bani=bani-z;}
            else
            {cout<<" Nu poti paria pe atat."<<endl;
            return 0;}
            cout<<" Suma de bani ramasa este "<<bani<<" $"<<endl;
            cout<<" Incercati sa ghiciti un numar intre 1 si 200."<<endl<<" "<<endl;
            cout<<" Aveti 5 incercari."<<endl;
            incercari1=5;
            while(x1!=y && incercari1!=0)
    {
            if(x1!=y)
            cout<<"incercari="<<incercari1--<<endl;
            cin>>y;
            if(x1>y)
            cout<<" Prea mic."<<endl;
            if(x1<y)
            cout<<" Prea mare."<<endl;
    }
            if(incercari1==0 && x1!=y)
            {cout<<" Ai pierdut."<<endl<<" Numarul care trebuia ghicit era "<<x1<<endl;
            cout<<" bani="<<bani<<" $"<<endl;}
            else
                if(5-incercari1==1)
                {cout<<" Ai ghicit dintr-o incercare."<<endl;
                if(bani==0)
            bani=bani+copibani1+z*2;
            else
            bani=bani+z*2;
            cout<<" Suma de bani pe care o aveti este "<<bani<<" $"<<endl<<" "<<endl;}
            else
            {cout<<" Ai ghicit numarul din "<<5-incercari1<<" incercari."<<endl;
            if(bani==0)
            bani=bani+copibani1+z*2;
            else
            bani=bani+z*2;
            cout<<" Suma de bani pe care o aveti este "<<bani<<" $"<<endl<<" "<<endl;}
    }
            if(strcmp(sir,"mediu")==0 || strcmp(sir,"Mediu")==0)
    {       cout<<" Pe ce suma doriti sa pariati?"<<endl;
            cin>>z;
            if(z<=bani && z!=0 && z>0)
            {copibani2=bani;
            bani=bani-z;}
            else
            {cout<<" Nu poti paria pe atat."<<endl;
            return 0;}
            cout<<" Suma de bani ramasa este "<<bani<<" $"<<endl;
            cout<<" Incercati sa ghiciti un numar intre 1 si 150."<<endl<<" "<<endl;
            cout<<" Aveti 7 incercari."<<endl;
            incercari2=7;
            while(x2!=y && incercari2!=0)
    {
            if(x2!=y)
            cout<<"incercari="<<incercari2--<<endl;
            cin>>y;
            if(x2>y)
            cout<<" Prea mic."<<endl;
            if(x2<y)
            cout<<" Prea mare."<<endl;}
            if(incercari2==0 && x2!=y)
           {cout<<" Ai pierdut."<<endl<<" Numarul care trebuia ghicit era "<<x2<<endl;
            cout<<" bani="<<bani<<" $"<<endl;}
            else
                if(7-incercari2==1)
                {cout<<" Ai ghicit dintr-o incercare."<<endl;
                if(bani==0)
            bani=bani+copibani2+z/2;
            else
            bani=bani+z/2;
            cout<<" Suma de bani pe care o aveti este "<<bani<<" $"<<endl<<" "<<endl;}
            else
           {cout<<" Ai ghicit numarul din "<<7-incercari2<<" incercari."<<endl;
            if(bani==0)
            bani=bani+copibani2+z/2;
            else
            bani=bani+z/2;
            cout<<" Suma de bani pe care o aveti este "<<bani<<" $"<<endl<<" "<<endl;}}
            if(strcmp(sir,"usor")==0 || strcmp(sir,"Usor")==0)
            {cout<<" Pe ce suma doriti sa pariati?"<<endl;
            cin>>z;
            if(z<=bani && z!=0 && z>0)
           {copibani3=bani;
            bani=bani-z;}
            else
            {cout<<" Nu poti paria pe atat"<<endl;
            return 0;}
            cout<<" Suma de bani ramasa este "<<bani<<" $"<<endl;
            cout<<" Incercati sa ghiciti un numar intre 1 si 100."<<endl<<" "<<endl;
            cout<<" Aveti 10 incercari."<<endl;
            incercari3=10;
            while(x3!=y && incercari3!=0)
    {
            if(x3!=y)
            cout<<"incercari="<<incercari3--<<endl;
            cin>>y;
            if(x3>y)
            cout<<" Prea mic."<<endl;
            if(x3<y)
            cout<<" Prea mare."<<endl;
              }
            if(incercari3==0 && x3!=y)
            {cout<<" Ai pierdut."<<endl<<" Numarul care trebuia ghicit era "<<x3<<endl;
            cout<<" bani="<<bani<<" $"<<endl;}
            else
                if(10-incercari3==1)
                {cout<<" Ai ghicit dintr-o incercare."<<endl;
                if(bani==0)
            bani=bani+copibani3+z/4;
            else
            bani=bani+z/4;
            cout<<" Suma de bani pe care o aveti este "<<bani<<" $"<<endl<<" "<<endl;}
            else
            {cout<<" Ai ghicit numarul din "<<10-incercari3<<" incercari."<<endl;
            if(bani==0)
            bani=bani+copibani3+z/4;
            else
            bani=bani+z/4;
            cout<<" Suma de bani pe care o aveti este "<<bani<<" $"<<endl<<" "<<endl;}}

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
           }while(bani!=0);
}
