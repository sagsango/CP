template<class type>
class maxstack{
	private:
	stack<pair<type,type>>st;
	public:
	int size()  { 	return st.size(); 	 }
	bool empty() {	return st.empty();	 }
	type pop(){
		type x = st.top().first; st.pop();
		return x;
	}
	void push(type x){
		type mx = st.empty() ? x :  x > st.top().second ? x : st.top().second;
		st.push({x,mx});
	}
	type max(){
		return st.top().second;
	}
};
