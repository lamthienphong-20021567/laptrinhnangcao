#include<iostream>
#include<cstring>
using namespace std;
struct hanghoa
{
	char tenhang[30];
	double  sl, gia, thanhtien;
};
int n,j;
hanghoa Hanghoa[100];
double thanhtienhang(double sl, double gia)
{
	double thanhtien;
	return thanhtien = sl*gia;
}
bool sotien(double tien, double sl[], double gia[], int n)
{
	double tongtien = 0;
	for(int i=0;i<n;i++)
	tongtien = tongtien+sl[i]*gia[i];
	if(tien>=tongtien) return 1;
	else return 0;
}
void Get_firstname(char name[], char firstname[])
{
	int i;
	for(int i=strlen(name);name[i]!=' ';i--)
	{
	   int len = strlen(name)-i;
	   firstname[len] = '\0';}
}
void Swap(hanghoa &x, hanghoa &y)
{
	hanghoa temp;
	temp = x;x = y; y = temp;
}
void Sort_List_by_name()
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			char fn1[30], fn2[30];
			Get_firstname(Hanghoa[i].tenhang, fn1) ; strcat(fn1, Hanghoa[i].tenhang);
			Get_firstname(Hanghoa[j].tenhang, fn2) ; strcat(fn2, Hanghoa[j].tenhang);
			if(strcmp(fn1, fn2)>0)
			Swap(Hanghoa[i], Hanghoa[j]); 
		}
	}
}
int main()
{
	double tien,tongtien;cout<<"so tien : ";cin>>tien;cout << endl;
	cout << "so luong hang can mua: ";cin >> n;
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout << "nhap ten hang: ";cin.getline(Hanghoa[i].tenhang, 30);
		cout << "nhap so luong: ";cin >> Hanghoa[i].sl;
		cout << "nhap gia: ";cin >> Hanghoa[i].gia;
		Hanghoa[i].thanhtien = thanhtienhang(Hanghoa[i].sl, Hanghoa[i].gia);
	}
	double a[100], b[100];
	for(int i=0;i<n;i++)
	{
		a[i] = Hanghoa[i].sl;
		b[i] = Hanghoa[i].gia;
	}
	cout << "danh sach mua hang la:\n";
	for(int i=0;i<n;i++)
	cout << Hanghoa[i].tenhang<< "\t" << Hanghoa[i].sl <<"\t"<< Hanghoa[i].gia<<"\t" << Hanghoa[i].thanhtien << "\n";
	if(sotien(tien, a, b, n)==0)
	{
		int choice;cout<<"nhap lua chon: ";cin>>choice;
		switch(choice)
		{
			case 1:
				{
					double min = Hanghoa[0].gia;
					for(int i=0;i<n;i++)
					{
						if(min>Hanghoa[i].gia)
						{
							min = Hanghoa[i].gia;
							int j = i;
						}
					}
					tongtien = Hanghoa[j].sl*min;
					cout << "hang mua la:\n" <<Hanghoa[j].tenhang <<"\t"<<tongtien;
				}
				case 2:
					{
						
					double min = Hanghoa[0].thanhtien;
					for(int i=0;i<n;i++)
					{
						if(min>Hanghoa[i].thanhtien)
						{
							min = Hanghoa[i].thanhtien;
							int j = i;
						}
					}
					tongtien = Hanghoa[j].thanhtien;
					cout << "hang mua la:\n" <<Hanghoa[j].tenhang <<"\t"<<tongtien;
					}
		}
	}
	return 0;
}
