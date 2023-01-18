// Class /Script/FortniteGame.FortMissionBlueprintLibrary
// Size: 0x28
class UFortMissionBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortMissionBlueprintLibrary.SkydiveFromLocation (Underlying native function: SkydiveFromLocation 0x8b0f48c)
	static void SkydiveFromLocation(bool& bFromBus, class AFortPlayerPawn*& InPawn, struct FVector& FallLocation, class UAthenaGliderItemDefinition*& GliderOverride); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionBlueprintLibrary.Skydive (Underlying native function: Skydive 0x8b0f32c)
	static bool Skydive(bool& bFromBus, class AFortPlayerPawn*& InPawn, class UAthenaGliderItemDefinition*& GliderOverride); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionBlueprintLibrary.BindPlayerToObjective (Underlying native function: BindPlayerToObjective 0x8b07400)
	static void BindPlayerToObjective(class AFortPlayerController*& PlayerController, class UFortQuestItemDefinition*& QuestItemDefinition, struct FName& QuestObjectiveBackendName, struct FDelegate& OnObjectiveUpdatedDelegate); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

