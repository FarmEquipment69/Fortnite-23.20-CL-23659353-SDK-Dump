// Class /Script/FortniteGame.FortAbilityDecoTool
// Size: 0x10d8
class AFortAbilityDecoTool : public AFortDecoTool
{
	struct FAbilityToolSpawnParameters CachedSpawnParameters; // 0x1098 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityDecoTool.GetSpawnParameters (Underlying native function: GetSpawnParameters 0x900dcf8)
	void GetSpawnParameters(struct FAbilityToolSpawnParameters& OutSpawnParamters); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilityDecoTool.GetPlacementAbilityInstance (Underlying native function: GetPlacementAbilityInstance 0x900da34)
	class UFortGameplayAbility* GetPlacementAbilityInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityDecoTool.GetPlacementAbilityHandle (Underlying native function: GetPlacementAbilityHandle 0x900da08)
	struct FGameplayAbilitySpecHandle GetPlacementAbilityHandle(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityDecoTool.AbilitySpawnDeco (Underlying native function: AbilitySpawnDeco 0x900c5ac)
	class ABuildingActor* AbilitySpawnDeco(struct FAbilityToolSpawnParameters& SpawnParameters); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

