// Class /Script/FortniteGame.FortNpcItemDefinition
// Size: 0x900
class UFortNpcItemDefinition : public UFortWorldItemDefinition
{
	struct TArray<struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition>> ChallengeBundles; // 0x8e8 (0x10)
	unsigned char padding_8f8[0x8]; // 0x8f8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortNpcItemDefinition.GetChallengeBundles (Underlying native function: GetChallengeBundles 0x8a78044)
	struct TArray<struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition>> GetChallengeBundles(); // (Final | Native | Public | BlueprintCallable)
};

