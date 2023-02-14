#include <iostream>

#include "cutlist.h"

int processCutlist(std::vector<float> cutlist) {
	auto two_by_fours = new std::vector<TwoByFourCutlist>(
		new TwoByFourCutlist();
	);

	for (int i=0; i<cutlist.size(); i++) {
		
	}
}

TwoByFourCutlist::TwoByFourCutlist(float boardlen)
	: remaining_len(boardlen) {}

void TwoByFourCutlist::AddCut(float cut) {
	remaining_len -= cut;
	cutlist.push_back(cut);
}

bool TwoByFourCutlist::CanCut(float cut) {
	return remaining_len > cut;
}

std::vector<float> TwoByFourCutlist::GetCutlist() {
	return cutlist;
}
