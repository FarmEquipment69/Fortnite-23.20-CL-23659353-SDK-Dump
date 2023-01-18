// Class /Script/FortniteGame.FortExpeditionItem
// Size: 0x168
class UFortExpeditionItem : public UFortAccountItem
{
	int expeditionmaxtargetpower; // 0x108 (0x4)
	int expeditionmintargetpower; // 0x10c (0x4)
	struct FDateTime* expeditionstarttime; // 0x110 (0x8)
	struct FDateTime* expeditionendtime; // 0x118 (0x8)
	struct FDateTime* expeditionexpirationstarttime; // 0x120 (0x8)
	struct FDateTime* expeditionexpirationendtime; // 0x128 (0x8)
	struct FString expeditionsquadid; // 0x130 (0x10)
	struct FString expeditionslotid; // 0x140 (0x10)
	struct TArray<struct FString> expeditioncriteria; // 0x150 (0x10)
	float expeditionsuccesschance; // 0x160 (0x4)
	unsigned char padding_164[0x4]; // 0x164 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortExpeditionItem.IsExpeditionInProgress (Underlying native function: IsExpeditionInProgress 0x8eab568)
	bool IsExpeditionInProgress(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.IsExpeditionCompleted (Underlying native function: IsExpeditionCompleted 0x8eab4d8)
	bool IsExpeditionCompleted(struct FDateTime*& UtcNow); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.HasExpeditionExpired (Underlying native function: HasExpeditionExpired 0x8eab208)
	bool HasExpeditionExpired(struct FDateTime*& UtcNow); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetTargetPowerLevel (Underlying native function: GetTargetPowerLevel 0x8eaaac8)
	float GetTargetPowerLevel(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetRemainingExpeditionExpirationDuration (Underlying native function: GetRemainingExpeditionExpirationDuration 0x8eaa75c)
	struct FTimespan* GetRemainingExpeditionExpirationDuration(struct FDateTime*& UtcNow); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetRemainingExpeditionDuration (Underlying native function: GetRemainingExpeditionDuration 0x8eaa6cc)
	struct FTimespan* GetRemainingExpeditionDuration(struct FDateTime*& UtcNow); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetMinTargetPowerLevelToBegin (Underlying native function: GetMinTargetPowerLevelToBegin 0x8eaa39c)
	float GetMinTargetPowerLevelToBegin(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetExpeditionSuccessChance (Underlying native function: GetExpeditionSuccessChance 0x8eaa040)
	float GetExpeditionSuccessChance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetExpeditionSquadId (Underlying native function: GetExpeditionSquadId 0x8eaa014)
	struct FName GetExpeditionSquadId(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetBonusCriteriaTags (Underlying native function: GetBonusCriteriaTags 0x8ea9ca4)
	void GetBonusCriteriaTags(struct TArray<struct FGameplayTag>& OutBonusCriteria); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItem.GetBonusCriteriaBP (Underlying native function: GetBonusCriteriaBP 0x8ea9c0c)
	void GetBonusCriteriaBP(struct TArray<struct FFortCriteriaRequirementData>& OutBonusCriteria); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

