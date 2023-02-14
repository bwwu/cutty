#ifndef CUTLIST_H
#define CUTLIST_H

#include <vector>

#define EIGHT_FT_TWO_BY_FOUR_LEN 8*12.0

int processCutlist(std::vector<float> cutlist);

class TwoByFourCutlist {
public:
	TwoByFourCutlist(float boardlen = EIGHT_FT_TWO_BY_FOUR_LEN);
	void AddCut(float cut);
	bool CanCut(float cut);
	std::vector<float> GetCutlist();

private:
	std::vector<float> cutlist;
	float remaining_len;
};


#endif
