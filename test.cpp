
class Blah{
	
	int a;
public:	
Blah(int b){
	a=b;
	}
};

int main(){
	Blah myBlah(5);
	Blah* myBlah2 = new Blah(7);
	delete myBlah2;

}

