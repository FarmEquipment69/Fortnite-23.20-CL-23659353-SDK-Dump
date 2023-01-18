// Class /Script/FortniteAI.AthenaAIBlueprintLibrary
// Size: 0x28
class UAthenaAIBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.MakeBotGroupsTakeEachOtherAsTargets (Underlying native function: MakeBotGroupsTakeEachOtherAsTargets 0xa35b730)
	static void MakeBotGroupsTakeEachOtherAsTargets(struct TArray<class AActor*>& GroupA, struct TArray<class AActor*>& GroupB, enum EPerceptionState& PerceptionState, float& ForgetTime, float& ForgetDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.KillBots (Underlying native function: KillBots 0xa35b248)
	static void KillBots(class UObject*& WorldContextObject, bool& bKillPlayers, bool& bKillNoneParticipants, unsigned char& TeamIndex, class AActor*& BotOwner); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.JoinTeam (Underlying native function: JoinTeam 0xa35b0fc)
	static void JoinTeam(class UObject*& WorldContextObject, class AController*& SourceTeamController, class AController*& DestinationTeamController); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.IsWeaponSupported (Underlying native function: IsWeaponSupported 0xa35af64)
	static bool IsWeaponSupported(class UObject*& WorldContextObject, class AFortWeapon*& FortWeapon); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.IsItemDefinitionSupported (Underlying native function: IsItemDefinitionSupported 0xa35ac34)
	static bool IsItemDefinitionSupported(class UObject*& WorldContextObject, class UFortItemDefinition*& FortItemDef); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIServicePlayerBots (Underlying native function: GetAIServicePlayerBots 0xa35aa88)
	static class UAthenaAIServicePlayerBots* GetAIServicePlayerBots(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceLoot (Underlying native function: GetAIServiceLoot 0xa35a9bc)
	static class UAthenaAIServiceLoot* GetAIServiceLoot(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceCreativePlayerBots (Underlying native function: GetAIServiceCreativePlayerBots 0xa35a93c)
	static class UAthenaAIServiceCreativePlayerBots* GetAIServiceCreativePlayerBots(class UObject*& WorldContextObject); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.GetAIPopulationTracker (Underlying native function: GetAIPopulationTracker 0xa35a8a4)
	static class UAthenaAIPopulationTracker* GetAIPopulationTracker(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.AthenaSpawnAIFromClass (Underlying native function: AthenaSpawnAIFromClass 0xa359d54)
	static class APawn* AthenaSpawnAIFromClass(class UObject*& WorldContextObject, class UClass*& PawnClass, class UBehaviorTree*& BehaviorTree, struct FVector& Location, struct FRotator& Rotation, bool& bNoCollisionFail, class AActor*& Owner); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIBlueprintLibrary.AIPawnFromGAHasLuringPickupAsGoal (Underlying native function: AIPawnFromGAHasLuringPickupAsGoal 0xa359be8)
	static bool AIPawnFromGAHasLuringPickupAsGoal(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTag& GameplayTag, float& MaxLifetime, enum EFortPickupSpawnSource& RequiredPickupSpawnSource); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

