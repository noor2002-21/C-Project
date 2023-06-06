////Noor Alqassab 2210003554,Raghad Alkhalaf 2210003671,Atheer Almalahi 2210003601,Randa Alghamdi	2190005914
//Newton's Second Law [ F=ma ]. Ohm’s Law Formula [ V= RI  ]. Mass-energy equivalence [ E= mc²  ]. Density [p=m/v].
#include <iostream>
#include <cmath>
const float c= 300000;//The speed of light
using namespace std;
//Ohm’s Law Formula [ V= RI  ]
float voltage(float R, float I){ //[V=RI]
  cout<<" Enter the value of the electrical resistance:"<<endl;
     cin>>R;
     cout<<" Enter the value of the electric current:"<<endl;
     cin>>I;
      return R*I;
	}
 float resistance(float V,float I){ //[R=V/I]
   cout<<" Enter the value of the electrical voltage:"<<endl;
     cin>>V;
     cout<<" Enter the value of the electric current:"<< endl;
     cin>>I;
      return V/I;
	}
 float current(float V, float R){ //[I=V/R]
    cout<<" Enter the value of the electrical voltage:"<<endl;
     cin>>V;
      cout<<" Enter the value of the electrical resistance:"<<endl;
      cin>>R;
     return V/R;
	 	}
//Newton's Second Law [ F=ma ]	 	
float force(float M, float a){ //[F=MA]
  cout<<" Enter the value of the mass:"<<endl;
     cin>>M;
     cout<<" Enter the value of the accelerationt:"<<endl;
     cin>>a;
      return M*a;
	}
 float Mass(float F,float a){ //[M=F/A]
   cout<<" Enter the value of the force:"<<endl;
     cin>>F;
     cout<<" Enter the value of the accelerationt:"<< endl;
     cin>>a;
      return F/a;
	}
 float accelerationt(float F, float M){ //[A=F/M]
    cout<<" Enter the value of the force:"<<endl;
     cin>>F;
      cout<<" Enter the value of the mass:"<<endl;
      cin>>M;
     return F/M;
	 	}
//Mass-energy equivalence [ E= mc² ]
float Energy(float m,float c){ //[E=mc²]
	cout<<"Enter the value of the mass:";
		cin>>m;
	 return m* pow(c,2);
	}
float mass(float E,float c){ //[m=E/c²]
		cout<<" Enter the value of the energy:"<<endl;
     cin>>E;
     return E/ pow(c,2);
	}
		
//Density [p=m/v]
float Density(float m4,float v){ //[P=M/V]
   cout<<" Enter the value of the mass:"<<endl;
     cin>>m4;
     cout<<" Enter the value of the volume:"<< endl;
     cin>>v;
      return m4/v;
}
float mass4(float P, float v){ //[M=P*V]
  cout<<" Enter the value of the density:"<<endl;
     cin>>P;
     cout<<" Enter the value of the volume:"<<endl;
     cin>>v;
      return P*v;
  }
float volume(float m4,float P){ //[V=M/P]
   cout<<" Enter the value of the mass:"<<endl;
     cin>>m4;
     cout<<" Enter the value of the density:"<< endl;
     cin>>P;
      return m4/P;
}
int main()
{
	float V,R,I;//Ohm’s Law Formula [ V= RI  ]
	float F,M,a;//Newton's Second Law [ F=ma ]
	float E,m;//Mass-energy equivalence [ E= mc² ]
	const float c= 300000;//The speed of light
	float P,v,m4;//Density [p=m/v]
    char choose,A,B,C;//FOR MUNE
	int ch,ch1;//FOR MUNE
	do
	{
    cout<<"***************Welcome to our program that Calculates the  4 laws of physics***************"<<endl;
    cout<<"_______________Choose from the list_______________"<<endl<<"1)Ohm’s Law Formula "<<endl<<"2)Newton's Second Law"<<endl<<"3)Mass-energy equivalence"<<endl<<"4)Density"<<endl<<"5)To stop"<<endl;
    cin>>ch;
     switch(ch) 
    {	
    do{
    	case 1://1)Ohm’s Law Formula 
		cout<<"Ohm Law Formula "<<endl;
    	cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the voltage  "<<endl<<"B)To calculate the electrical resistance "<<endl<<"C)To calculate the electric current"<<endl;
    	cin>>choose;
    if(choose=='A')//To calculate the voltage
	{
	 float V=voltage(R,I);
     cout<<"Voltage= "<<V <<" V"<<endl;
    }
    else if (choose=='B')//To calculate the electrical resistance 
	{
		float R=resistance(V,I);
       cout<<"Electrical resistance= "<<R<<" Ohm"<<endl;
   }
    else if(choose=='C')//To calculate the electric current
	{
	  float I=current(V,R);
      cout<<"Electric current= "<<I<<" A"<<endl;
	  }
    else {
     cout<<"Error"<<endl;
	 }
	 	cout<<"1)To return to the list  2)To return to the law"<<endl;
	 	cin>>ch1;
	 	}while(ch1 !=1);//Loop
   	       break;
   	       do{
    	case 2://2)Newton's Second Law
		cout<<"Newton's Second Law"<<endl;
    	cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the force "<<endl<<"B)To calculate the mass "<<endl<<"C)To calculate the accelerationt"<<endl;
    cin>>choose;
    if(choose=='A')//To calculate the force
	{
	   float F=force(M,a);
	   cout<<"Force= "<<F<<" N"<<endl;
	   
    }
    else if (choose=='B')//To calculate the mass 
	{
		float M=Mass(F,a);
		cout<<"Mass= "<<M<<" Kg"<<endl;
   }
    else if(choose=='C')//To calculate the accelerationt
	{
		float a=accelerationt(F,M);
		cout<<"Accelerationt= "<<a<<" m/s^2"<<endl;
	  }
    else {
	 }
	 	cout<<"1)To return to the list  2)To return to the law"<<endl;
	 	cin>>ch1;
	 	}while(ch1 !=1);//Loop
    	       break;
    do{
    	case 3://3)Mass-energy equivalence
		cout<<"Mass-energy equivalence"<<endl;
    	cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the energy "<<endl<<"B)To calculate the mass "<<endl;
    cin>>choose;
    if(choose=='A')//To calculate the energy
	{
		float E=Energy(m,c);
		cout<<"Energy= "<<E<<" J"<<endl;
    }
    else if (choose=='B')//To calculate the mass 
	{
		float m=mass(E,c);
		cout<<"Mass= "<<m<<" Kg"<<endl;
		
   }
    else {
     cout<<"Error"<<endl;
	 }
	 	cout<<"1)1)To return to the list 2)To return to the law"<<endl;
	 	cin>>ch1;
	 	}while(ch1 !=1);//Loop
    	       break;   
	do{   
    	case 4://4)Density	
		cout<<"Density"<<endl;
    		cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the Density "<<endl<<"B)To calculate the mass "<<endl<<"C)To calculate the volume"<<endl;
    cin>>choose;
    if(choose=='A')//To calculate the Density
	{
		float P=Density(m4,v);
		cout<<"Density= "<<P<<" kg/m^3"<<endl;
    }
    else if (choose=='B')//To calculate the mass
	{
		float m4=mass4(P,v);
		cout<<"Mass= "<<m4<<" Kg"<<endl;
   }
    else if(choose=='C')//To calculate the volume
	{
		float v=volume(m4,P);
		cout<<"Volume= "<<v<<" m^3"<<endl;
	  }
    else {
     cout<<"Error"<<endl;
	 }
	 	cout<<"1)To return to the list  2)To return to the law"<<endl;
	 	cin>>ch1;
	 	}while(ch1 !=1);//Loop
    	       break;
    	case 5://5)To stop
    		cout<<"The program has stopped"<<endl;    
			  break; 	
    default:cout<<"Error"<<endl;
    }
	 }while(ch !=5);//Loop
	 
    return 0;}
