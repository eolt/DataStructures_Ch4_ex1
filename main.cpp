//
//  main.cpp
//  Chapter4Problem1
//
//  Created by Edgar Olvera on 2/20/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Candidate.hpp"

using namespace std;

void displayCandidates(vector<Candidate>&, float);

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<Candidate> candidates;
    
    /*  ------- Test Cases ------------
    candidates.push_back(Candidate("Johnson", 5000));
    
    candidates.push_back(Candidate("Miller", 4000));
    candidates.push_back(Candidate("Duffy", 6000));
    candidates.push_back(Candidate("Robinson", 2500));
    candidates.push_back(Candidate("Sam", 1800));
    */
    
    int num{};
    std::string candidateName{};
    int votesRecieved{};
    
    cout << "Enter the number candidates: ";
    cin >> num;
    for(int i{}; i < num; ++i){
        cout << "Enter candidate's last name: ";
        cin >> candidateName;
        cout << "Enter number of votes recieved: ";
        cin >> votesRecieved;
        
        candidates.push_back(Candidate(candidateName, votesRecieved));
        cout << endl;
    }
    
    displayCandidates(candidates, 19300);
    
    return 0;
}


void displayCandidates(vector<Candidate>& candidates, float total){
    int topVotes{};
    string winner{};
    
    cout << fixed << setprecision(2);
    cout << left;
    cout << setw(13) << "Candidate" << "" << setw(20) << "Votes Recieved" << "" << "% of Total Votes" << endl;
    
    for(int i{}; i < candidates.size(); ++i){
        candidates.at(i).print();
        
        cout << (candidates.at(i).getVotesReceived() / total) * 100 << endl;
        
        if(candidates.at(i).getVotesReceived() > topVotes){
            topVotes = candidates.at(i).getVotesReceived();
            winner = candidates.at(i).getCandidateName();
        }
    }
    
    cout << setprecision(0);
    cout << setw(15) << "Total " << "" << total << endl;
    cout << "The Winner of the Election is " << winner << "." << endl;
    cout << endl;
}
