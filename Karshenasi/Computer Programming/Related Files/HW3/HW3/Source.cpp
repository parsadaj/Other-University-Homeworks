#include <iostream>
using namespace std;
void SWAP(double& a , double& b) // tarife tabe e SWAP ke jaye a va b dar hafeze ra avaz mikonad
{
	double temp=a;
	a=b;
	b=temp;
}
double taghsim(double a , double b) // tarife tabei baraye anjame amale taghsim bedune moshkel
{
	double surat=a;
	double makhraj=b;
	double javab=surat/makhraj;
	return javab;
}
double zarb(double a[2][2],double b[2][2],int i,int j) // tabe i ke ke komak mikonad do matris ra zarb konim. dar asl derayaye satre i om va sutune j om az matrise zarb ra midahad ke dar tabe e main mitavanim ba yek halghe (for) araye i baraye matris zarb besazim
{
	double cij=0,x;
	for(int k=0;k<2;k++)
	{
		x = a[i][k]*b[k][j];
		cij+=x;	
	}
	return cij;
}
double zarb(double a[3][3],double b[3][3],int i,int j) // tabe i ke ke komak mikonad do matris ra zarb konim. dar asl derayaye satre i om va sutune j om az matrise zarb ra midahad ke dar tabe e main mitavanim ba yek halghe (for) araye i baraye matris zarb besazim
{
	double cij=0,x;
	for(int k=0;k<3;k++)
	{
		x = a[i][k]*b[k][j];
		cij+=x;	
	}
	return cij;
}
//int main() // azmune tabe e zarb baraye matris 3*3
//{
//	double c[3][3];
//	double a[3][3]; 
//		for (int i=0;i<3;i++) // daryaft matris
//			for (int j=0;j<3;j++)
//				cin >> a[i][j];
//		double b[3][3]; 
//		for (int i=0;i<3;i++) // daryaft matris
//			for (int j=0;j<3;j++)
//				cin >> b[i][j];
//	for(int i=0;i<3;i++)
//		for(int j=0;j<3;j++)
//			c[i][j]=zarb(a,b,i,j);
//	for(int i=0;i<3;i++) // namayeshe matris
//		{
//			for(int j=0;j<3;j++)
//					cout << c[i][j] << "\t";
//		cout << "\n";
//		}
//	return 0;
//}

//int main() // azmune tabe e zarb baryae matris 2*2
//{
//	double c[2][2];
//	double a[2][2]; 
//		for (int i=0;i<2;i++) // daryaft matris
//			for (int j=0;j<2;j++)
//				cin >> a[i][j];
//		double b[2][2]; 
//		for (int i=0;i<2;i++) // daryaft matris
//			for (int j=0;j<2;j++)
//				cin >> b[i][j];
//	for(int i=0;i<2;i++)
//		for(int j=0;j<2;j++)
//			c[i][j]=zarb(a,b,i,j);
//	for(int i=0;i<2;i++) // namayeshe matris
//		{
//			for(int j=0;j<2;j++)
//					cout << c[i][j] << "\t";
//		cout << "\n";
//		}
//	return 0;
//}

//int main() // azmun tabe e taghsim
//{
//	int a,b=1;
//	while (b!=0)
//	{
//		cin >> a>>b;
//		cout <<taghsim(a,b);
//	}
//	return 0;
//}

//int main() // azmun baraye SWAP
//{
//	int a,b;
//	cin >> a>>b;
//	SWAP(a,b);
//	cout <<a<<b;
//}

int main()
{
	int n;
	cout << "salam\nlotfan tedad satr haye matris morabai khod ra vared konid\n(faghat aadade 2 va 3 ghabele ghabul mibashand)\n";
	cin >> n;
	while (n!=2&&n!=3)
	{
		cout << "adad e vared shode morede ghabul nist\nadade digari vared konid\n";
		cin >> n;
	}
	if (n==2)
	{
		cout << "lotfan be tartib a11 a12 a21 a22 ra vared konid\n";
		double a[2][2]; 
		for (int i=0;i<2;i++) // daryaft matris
			for (int j=0;j<2;j++)
				cin >> a[i][j];
		cout << " matrise shoma besurate zir ast:\n";
		for(int i=0;i<2;i++) // namayeshe matris
		{
			for(int j=0;j<2;j++)
					cout << a[i][j] << "\t";
		cout << "\n";
		}
		cout << "yeki az adade zir ra baraye namayeshe matlube khod vared konid:\n1 : taranahade\n2 : makus\n3 : tavane 2\n4 : tavane 3\n5 : tavane 10\n6 : tavane 100\n0 : khuruj az barname\n";
		int q=0;
		{
			cin>>q;
			while(q!=0&&q!=1&&q!=2&&q!=3&&q!=4&&q!=5&&q!=6)
			{
				cout << "adad e vared shode morede ghabul nist\ndobaretalashkonid\n";
					cin >> q;
			}
			if (q==1) // taranahade matris
			{ 
				for(int i=0;i<2;i++)
					for(int j=0;j<i;j++)
						SWAP(a[i][j],a[j][i]);
				for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
						cout << a[i][j] << "\t";
				cout << "\n";
				}
			}
			if(q==2)
			{
				double det= a[0][0]*a[1][1]-a[1][0]*a[0][1];
				if (det==0) cout<<"makus napazir\n";
				else
				{
					SWAP(a[0][0],a[1][1]);
					a[1][0]= -a[1][0];
					a[0][1]= -a[0][1];
					for(int i=0;i<2;i++)
						for(int j=0;j<2;j++)
							a[i][j]=taghsim(a[i][j],det);
					for(int i=0;i<2;i++)
					{
						for(int j=0;j<2;j++)
							cout << a[i][j] << "\t";
					cout << "\n";
					}
				}
			}
			else
			{
				if (q==3||q==4) q--;
				else if (q==5) q=10;
				else if (q==6) q=100;
				double b[2][2],c[2][2];
				for(int i=0;i<2;i++)
					for(int j=0;j<2;j++)
						b[i][j]=a[i][j];
				for(int k=1;k<q;k++) 
				{
					for(int i=0;i<2;i++)
						for(int j=0;j<2;j++)
							c[i][j]=zarb(a,b,i,j);
					for(int ii=0;ii<2;ii++)
								for(int jj=0;jj<2;jj++)
									b[ii][jj]=c[ii][jj];
				}
				for(int i=0;i<2;i++) // namayeshe matris
				{
					for(int j=0;j<2;j++)
							cout << b[i][j] << "\t";
					cout << "\n";
				}
			}
		}
		
	}








	if (n==3)
	{
		cout << "lotfan be tartib a11 a12 a13 a21 a22 a23 a31 a32 a33 ra vared konid\n";
		double a[3][3];
		for (int i=0;i<3;i++)
			for (int j=0;j<3;j++)
				cin >> a[i][j];
		cout << " matrise shoma besurate zir ast:\n";
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
					cout << a[i][j] << "\t";
		cout << endl;
		}
		cout << "yeki az adade zir ra baraye namayeshe matlube khod vared konid:\n1 : taranahade\n2 : makus\n3 : tavane 2\n4 : tavane 3\n5 : tavane 10\n6 : tavane 100\n0 : khuruj az barname\n";
		int q=0;
		{
			cin>>q;
			if (q==1) // taranahade matris
			{ 
				for(int i=0;i<3;i++)
					for(int j=0;j<i;j++)
						SWAP(a[i][j],a[j][i]);
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
						cout << a[i][j] << "\t";
				cout << "\n";
				}
			}
			if(q==2)
			{
				double det= a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]-a[0][2]*a[1][1]*a[2][0]-a[0][1]*a[1][0]*a[2][2]-a[0][0]*a[1][2]*a[2][1];
				if (det==0) cout<<"makus napazir\n";
				else
				{
					double b[3][3];
					b[0][0]=a[2][2]*a[1][1]-a[2][1]*a[1][2];
					b[0][1]=-a[2][2]*a[0][1]+a[2][1]*a[0][2];
					b[0][2]=a[1][2]*a[0][1]-a[1][1]*a[0][2];
					b[1][0]=a[2][0]*a[1][2]-a[2][2]*a[1][0];
					b[1][1]=a[2][2]*a[0][0]-a[2][0]*a[0][2];
					b[1][2]=-a[1][2]*a[0][0]+a[1][0]*a[0][2];
					b[2][0]=a[2][1]*a[1][0]-a[2][0]*a[1][1];
					b[2][1]=-a[2][1]*a[0][0]+a[2][0]*a[0][1];
					b[2][2]=a[1][1]*a[0][0]-a[1][0]*a[0][1];

					for(int i=0;i<3;i++)
					{
						for(int j=0;j<3;j++)
						{
							if (taghsim(b[i][j],det)>0) cout << "+";
							cout << taghsim(b[i][j],det) << "\t\t";
						}
					cout << "\n";
					}
				}
			}

			else
			{
				if (q==3||q==4) q--;
				else if (q==5) q=10;
				else if (q==6) q=100;
				double b[3][3],c[3][3];
				for(int i=0;i<3;i++)
					for(int j=0;j<3;j++)
						b[i][j]=a[i][j];
				for(int k=1;k<q;k++) 
				{
					for(int i=0;i<3;i++)
						for(int j=0;j<3;j++)
							c[i][j]=zarb(a,b,i,j);
					for(int ii=0;ii<3;ii++)
								for(int jj=0;jj<3;jj++)
									b[ii][jj]=c[ii][jj];
				}
				for(int i=0;i<3;i++) // namayeshe matris
				{
					for(int j=0;j<3;j++)
							cout << b[i][j] << "\t";
					cout << "\n";
				}
			}
		}
	}
	char khuruj;
	cin >> khuruj;
	return 0;
}