#include <iostream>
#include <string>
using namespace std;

class unggas {
	public:
		void suara(string bunyi);
		int terbang(string sayap);
		string renang;
		void ukuranTelur(string ukuran);
		void jumlahTelur(int jumlah);
};
int main(){
	unggas ayamlaki,ayambini,itiklaki,itikbini;
	ayamlaki.renang	="kada bisa bakunyung ";
	ayambini.renang ="kada bisa bakunyung ";
	itiklaki.renang	="harat bakunyung ";
	itikbini.renang	="harat bakunyung ";
	
	cout <<(ayamlaki.renang);
	ayamlaki.suara("kukuruyuk");
	ayamlaki.terbang("kada kawa tinggi ");
	ayamlaki.ukuranTelur("laki kada bahintalu");
	ayamlaki.jumlahTelur(0);
	
	cout <<(ayambini.renang);
	ayambini.suara("kutakkutak");
	ayambini.terbang("kada kawa tinggi ");
	ayambini.ukuranTelur("sadang");
	ayambini.jumlahTelur(15);
	
	cout <<(itiklaki.renang);
	itiklaki.suara("gugakgugak");
	itiklaki.terbang("harat jua tarabang ");
	itiklaki.ukuranTelur("laki kada bahintalu");
	itiklaki.jumlahTelur(0);
	
	cout <<(itikbini.renang);
}
void unggas::suara(string bunyi){
	cout <<"bunyinya "<<bunyi<<endl;
}
int unggas::terbang(string sayap){
	cout <<"terbang "<<sayap<<endl;
}
void unggas::ukuranTelur(string ukuran){
	cout <<"hintalunya: "<<ukuran<<endl;
}
void unggas::jumlahTelur(int jumlah){
	cout <<"bahintalu "<<jumlah<<" butir"<<endl;
}
