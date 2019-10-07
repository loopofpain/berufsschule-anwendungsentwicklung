#include <iostream>;

using namespace std;

/*
	This program shows how to cast numbers correctly and calculate a correct result.
*/
int main() {
	unsigned int votesCandidateA = 77;
	unsigned int votesCandidateB = 114;
	unsigned int numberOfVotes = votesCandidateA + votesCandidateB;
	double shareCandidateA = ((double)votesCandidateA / (double)numberOfVotes) * 100;
	double shareCandidateB = ((double)votesCandidateB / (double)numberOfVotes) * 100;
	cout << "Candidate A: " << shareCandidateA << endl;
	cout << "Candidate B: " << shareCandidateB << endl;
	return getchar();
}