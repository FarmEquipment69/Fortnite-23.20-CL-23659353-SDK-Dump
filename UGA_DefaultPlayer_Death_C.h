// BlueprintGeneratedClass /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// Size: 0xd08
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{
	unsigned char unreflected_cf4[0x4]; // 0xcf4 (0x4) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xcf8 (0x8)
	struct FGameplayTag FadeCapsuleStWCue; // 0xd00 (0x4)
	struct FGameplayTag FadeCapsuleAthenaCue; // 0xd04 (0x4)

	/* Functions */

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection (Has no native function)
	void PickDeathMontageSection(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death (Has no native function)
	void ExecuteUbergraphGADefaultPlayerDeath(int& EntryPoint, enum ESubGame& CallFuncGetSubGameReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Final | 0x00008000)
};

