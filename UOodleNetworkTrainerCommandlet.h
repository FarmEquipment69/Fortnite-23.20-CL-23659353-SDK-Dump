// Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0xa0
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
	bool bCompressionTest; // 0x80 (0x1)
	bool bWriteV5Dictionaries; // 0x81 (0x1)
	unsigned char unreflected_82[0x2]; // 0x82 (0x2) 
	int HashTableSize; // 0x84 (0x4)
	int DictionarySize; // 0x88 (0x4)
	int DictionaryTrials; // 0x8c (0x4)
	int TrialRandomness; // 0x90 (0x4)
	int TrialGenerations; // 0x94 (0x4)
	bool bNoTrials; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)
};

