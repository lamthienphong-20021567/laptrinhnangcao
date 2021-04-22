#include<iostream>
using namespace std;
struct sv
{
	char *name;
};
struct s
{
	int diem;
};
int main()
{
	sv sinhvien[2];
	sinhvien[1].name = "K";
	cout<<sinhvien[1].name;
	//cout<<sinhvien[1].diem;
}
// khi sao chep to mot struct khac ct se bi loi,khong chay
// sao chep duoc toi mang neu mang duoc khai bao trong struct
