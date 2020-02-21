//
//  Candidate.cpp
//  Chapter4Problem1
//
//  Created by Edgar Olvera on 2/20/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#include "Candidate.hpp"

Candidate::Candidate(std::string name, int votes) {
    setCandidate(name, votes);
}


std::string Candidate::getCandidateName() {
    return this->name;
}

int Candidate::getVotesReceived() {
    return num_votes;
}

void Candidate::setCandidate(std::string name, int votes) {
    this->name = name;
    num_votes = votes;
}

void Candidate::setCandidateName(std::string name) {
    this->name = name;
}

void Candidate::setVotesReceived(int votes) {
    num_votes = votes;
}

void Candidate::print() {
    std::cout << std::setw(15) <<  name << "" << std::setw(20) << num_votes;
}












