#include <iostream.h>
#include <conio.h>
int main()
{
	int a,b,c,n;
	a=0;
	b=1;
	cout<<"PROGRAM UNTUK MENETUKAN DERET BILANGAN FIBONACCI"<<endl<<endl;
	cout<<"Bagas Adi Nugraha"<<endl<<endl;
	cout<<"============================================="<<endl<<endl;
	cout<<"Batas atas dari Deret bilangan Fibonacci : ";cin>>n;
	cout<<endl;
	cout<<"Deret Bilangan Fibonacci sampai angka "<<n<<" adalah: "<<endl<<endl;
	cout<<"          "<<a<<" "<<b<<" ";

	n=(n-2);
	for (c=1;c<=n; c++)
	{
		if (c%2==1)
		{
			a=a+b;
			cout<<a<<" ";
		}
		else
		{
			b=b+a;
			cout<<b<<" ";
		}
	}
	getch();
	return 0;
}
