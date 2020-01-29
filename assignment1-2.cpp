void shuffle_and_rotate (std::vector<int>& Xi_vec) {
std::random_shuffle (psi_vec.begin(), psi_vec.end());
size_t N = Xi_vec.size();
std::vector<int> S(N);
for (size_t i=0; i<N; ++i) S[i] = ((0==i)?1:S[i-1])+(Xi_vec[i]-1);
int min_ele=std::numeric_limits<int>::max();
int min_index=-1;
for (size_t i=0; i<N; ++i)
if (min_ele>S[i]) { min_ele=S[i]; min_index=i; }
std::rotate(Xi_vec.begin(), Xi_vec.begin()+min_index+1, Xi_vec.end());
｝