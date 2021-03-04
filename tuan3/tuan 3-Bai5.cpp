#include<iostream>
#include<cstring>
using namespace std;
	struct sinhvien
	{
	    string name;
		double diemtoan,diemly,diemanh,trungbinh;
	};
	int n;
	sinhvien Sinhvien[100];
void Swap(sinhvien &x, sinhvien &y)
  {
  	sinhvien tmp;
  	tmp = x; x = y; y = tmp;
  }
void Sort_List_by_toan()
{
	int i,j;
	for(int i=0;i<n;i++)
	{
	   for(int j=i+1;j<n;j++)
   	 {
	   if(Sinhvien[i].diemtoan < Sinhvien[j].diemtoan)
	   Swap(Sinhvien[i], Sinhvien[j]);
      }
    }
}
void Sort_List_by_ly()
{
	int i,j;
	for(int i=0;i<n;i++)
	{
	   for(int j=i+1;j<n;j++)
   	 {
	   if(Sinhvien[i].diemly < Sinhvien[j].diemly)
	   Swap(Sinhvien[i], Sinhvien[j]);
      }
    }
}
void Sort_List_by_tb()
{
	int i,j;
	for(int i=0;i<n;i++)
	{
	   for(int j=i+1;j<n;j++)
   	 {
	   if(Sinhvien[i].trungbinh < Sinhvien[j].trungbinh)
	   Swap(Sinhvien[i], Sinhvien[j]);
      }
    }
}
double tb(double a, double b, double c)
{
	double tb;
	return tb = (a+b+c)/3;
}
int main()
{
	cout << "nhap n: ";cin >> n;
	for(int i=0;i<n;i++)
	{
		cout << "ten sinh vien: ";
		fflush(stdin);
		getline(cin, Sinhvien[i].name);
		cout << "nhap diem toan sinh vien " << i+1 << " : ";
		cin >> Sinhvien[i].diemtoan;
		cout << "nhap diem ly sinh vien " << i+1 <<" : ";
		cin >> Sinhvien[i].diemly;
		cout << "nhap diem anh sinh vien "<<i+1 <<" : ";
		cin >> Sinhvien[i].diemanh;
		cout << "diem trung binh cua sinh vien " << i+1 << " : ";
		Sinhvien[i].trungbinh = tb(Sinhvien[i].diemtoan, Sinhvien[i].diemly, Sinhvien[i].diemanh);
		cout << Sinhvien[i].trungbinh << "\n";
	}
	Sort_List_by_toan();
	 cout <<"danh sach sinh vien theo diem toan la:\n ";
	for(int i=0;i<n;i++)
	{
	  cout  << Sinhvien[i].name<< "\t" <<  Sinhvien[i].diemtoan<<"\t" << Sinhvien[i].diemly<<"\t"<<Sinhvien[i].diemanh<< "\n";;
	}	
	Sort_List_by_ly();
	cout <<"danh sach sinh vien theo diem ly la:\n ";
	for(int i=0;i<n;i++)
	{
	  cout  << Sinhvien[i].name<< "\t" <<  Sinhvien[i].diemtoan<<"\t" << Sinhvien[i].diemly<<"\t"<<Sinhvien[i].diemanh<< "\n";;
	}	
	Sort_List_by_tb();
		cout <<"danh sach sinh vien theo diem trung binh la:\n ";
	for(int i=0;i<n;i++)
	{
	  cout  << Sinhvien[i].name<< "\t" <<Sinhvien[i].trungbinh<<"\t"<<  Sinhvien[i].diemtoan<<"\t" << Sinhvien[i].diemly<<"\t"<<Sinhvien[i].diemanh<< "\n";
	}	
	return 0;
}

