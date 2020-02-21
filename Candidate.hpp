//
//  Candidate.hpp
//  Chapter4Problem1
//
//  Created by Edgar Olvera on 2/20/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#ifndef Candidate_hpp
#define Candidate_hpp

#include <string>
#include <iostream>
#include <iomanip>

class Candidate {
    std::string name;
    int num_votes;
public:
    Candidate(std::string name = "", int votes = 0);
    std::string getCandidateName();
    int getVotesReceived();
    
    void setCandidate(std::string name, int votes);
    void setCandidateName(std::string name);
    void setVotesReceived(int votes);
    
    void print();
};

#endif /* Candidate_hpp */
