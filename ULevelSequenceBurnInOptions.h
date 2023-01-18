// Class /Script/LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50
class ULevelSequenceBurnInOptions : public UObject
{
	bool bUseBurnIn; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FSoftClassPath BurnInClass; // 0x30 (0x18)
	class ULevelSequenceBurnInInitSettings* Settings; // 0x48 (0x8)

	/* Functions */

	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn (Underlying native function: SetBurnIn 0x9bd69bc)
	void SetBurnIn(struct FSoftClassPath& InBurnInClass); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

