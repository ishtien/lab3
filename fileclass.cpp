
class fileclass{
public:
	fileclass::void insertion_sort(vector<int> & v){
		sort(v.begin(),v.end());
	}
	fileclass::void set(vector<int> &v){
		tmp=v;
	} 
	fileclass::int get(int i){
		return tmp[i];
	}
private:
	fileclass::vector <int> tmp;
};
