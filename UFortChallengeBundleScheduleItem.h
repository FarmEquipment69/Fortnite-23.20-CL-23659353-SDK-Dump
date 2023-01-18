// Class /Script/FortniteGame.FortChallengeBundleScheduleItem
// Size: 0x118
class UFortChallengeBundleScheduleItem : public UFortAccountItem
{
	struct TArray<struct FString> GrantedBundles; // 0x108 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortChallengeBundleScheduleItem.GetScheduleDefinitionBP (Underlying native function: GetScheduleDefinitionBP 0x868c5ec)
	class UFortChallengeBundleScheduleDefinition* GetScheduleDefinitionBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleItem.GetPercentageComplete (Underlying native function: GetPercentageComplete 0x868c0f8)
	float GetPercentageComplete(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleItem.GetAchievedCount (Underlying native function: GetAchievedCount 0x868b694)
	void GetAchievedCount(int& OutTotalAchievedCount, int& OutTotalRequiredCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

