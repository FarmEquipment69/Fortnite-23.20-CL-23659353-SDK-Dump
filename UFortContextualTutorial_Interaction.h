// Class /Script/FortniteGame.FortContextualTutorial_Interaction
// Size: 0x118
class UFortContextualTutorial_Interaction : public UFortContextualTutorial
{
	unsigned char unreflected_f8[0x10]; // 0xf8 (0x10) 
	struct TWeakObjectPtr<class AActor> WeakInstigatingActor; // 0x108 (0x8)
	unsigned char padding_110[0x8]; // 0x110 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortContextualTutorial_Interaction.HandleInteractSuccessTrigger (Underlying native function: HandleInteractSuccessTrigger 0x856d740)
	void HandleInteractSuccessTrigger(struct FGameplayTag& Tags, int& Count); // (Final | Native | Private)
};

