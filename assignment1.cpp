template <typename P_k_type>
std::vector<int> generate_tree (int N, int seed, P_k_type pi_k) {
std::vector<int> Xi_vec;
boost::mt19937 prng(seed);
bool generated(false);
do {
int k(0), nodes_consumed(0), edges_consumed(0);
double sum_of_xi(0.0);
while (N != nodes_consumed) {
const double xi = pi_k(i);
boost::binomial_distribution<> dist((n-sum_of_N_i), xi/(1-sum_of_xi));
const int n_k = dist(prng);
for (int i=nodes_consumed; i<(nodes_consumed+n_k);++i) Xi_vec[i]=k;
nodes_consumed += n_k;
edges_consumed += n_k*k;
sum_of_xi += xi;
++k;
}
if (edges_consumed==(N-1)) generated=true;
} while (false==generated);
return Xi_vec;
}