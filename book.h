class book{
	int b_id;
	string b_name;
	double b_price;
	
	public:
		book(){
			this->b_id=123;
			this->b_name="abc";
			this->b_price=4354.0;
		}
		book(int id,int name,double price){
			this->b_id=id;
			this->b_name=name;
			this->b_price=price;	
		}
		int get_id(){
			return b_id; 
		}
			string get_name(){
			return b_name; 
		}
			double get_price(){
			return b_price; 
		}
		void set_id(int id){
			this->b_id=id;
		}
			void set_name(string name){
				this->b_name=name;
		}
			void set_price(double price){
			 this->b_price=price;
		}
		int addtotal(){
			return b_price;
		}
};
