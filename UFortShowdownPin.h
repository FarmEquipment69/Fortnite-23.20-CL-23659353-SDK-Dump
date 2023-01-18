// Class /Script/FortniteUI.FortShowdownPin
// Size: 0x720
class UFortShowdownPin : public UFortShowdownDetailView
{
	bool bTryUsingAlternativeScore; // 0x718 (0x1)
	bool bUseAbbreviatedScore; // 0x719 (0x1)
	unsigned char unreflected_71a[0x2]; // 0x71a (0x2) 
	int LastBestScore; // 0x71c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownPin.ShouldUseAlternativeScore (Underlying native function: ShouldUseAlternativeScore 0xa8f2d88)
	bool ShouldUseAlternativeScore(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownPin.GetScoreToDisplay (Underlying native function: GetScoreToDisplay 0xa8edf98)
	int GetScoreToDisplay(bool& bUseBestPin); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownPin.GetAlternativeScoreToDisplay (Underlying native function: GetAlternativeScoreToDisplay 0xa8eaa68)
	int GetAlternativeScoreToDisplay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

