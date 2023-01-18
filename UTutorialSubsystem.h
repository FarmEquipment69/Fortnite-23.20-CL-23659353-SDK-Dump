// Class /Script/FortniteGame.TutorialSubsystem
// Size: 0x98
class UTutorialSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct TWeakObjectPtr<class AFortAthenaTutorialManager> TutorialManager; // 0x40 (0x8)
	unsigned char padding_48[0x50]; // 0x48 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.TutorialSubsystem.IsInTutorial (Underlying native function: IsInTutorial 0x856dd54)
	bool IsInTutorial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

