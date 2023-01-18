// Class /Script/FortniteGame.FortMatchmakingActor
// Size: 0x7f8
class AFortMatchmakingActor : public ABuildingActor
{
	struct FText LeaderInteractDetailsText; // 0x780 (0x18)
	struct FLinearColor LeaderInteractDetailsColor; // 0x798 (0x10)
	struct FText MemberInteractDetailsText; // 0x7a8 (0x18)
	struct FLinearColor MemberInteractDetailsColor; // 0x7c0 (0x10)
	struct TWeakObjectPtr<class UClass> MatchmakingWidgetClass; // 0x7d0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortMatchmakingActor.ShouldUseBlueprintMMSCode (Underlying native function: ShouldUseBlueprintMMSCode 0x8970d90)
	bool ShouldUseBlueprintMMSCode(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingActor.GetMMSCodeForLocalPlayerParty (Underlying native function: GetMMSCodeForLocalPlayerParty 0x896ca30)
	struct FString GetMMSCodeForLocalPlayerParty(); // (Final | Native | Protected | BlueprintCallable)
};

