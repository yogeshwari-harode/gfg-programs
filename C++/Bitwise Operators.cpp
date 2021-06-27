void bitWiseOperation(int a, int b, int c){
    
	int d= a^a;
	cout<< d << endl;
	int e= c^b;
	cout<< e << endl;
	int f= a&b;
	cout<< f << endl;
	int g= c|(a^a);
	cout<<g << endl;
	e= ~e;
	cout<<e << endl;
}
