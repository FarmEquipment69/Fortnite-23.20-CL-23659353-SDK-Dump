// Class /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement
// Size: 0x308
class UFortControllerComponent_IndicatedActorManagement : public UFortControllerComponent
{
	struct FIndicatedActorInfoArray IndicatedActorList; // 0xa0 (0x120)
	struct TArray<struct FIndicatedActorInfoEntry> DeferredIndicatedActorList; // 0x1c0 (0x10)
	struct FStenciledActorInfoArray StenciledActorList; // 0x1d0 (0x120)
	struct TArray<struct FStenciledActorInfoEntry> DeferredStenciledActorList; // 0x2f0 (0x10)
	unsigned char padding_300[0x8]; // 0x300 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveGroupFromStenciledList (Underlying native function: RemoveGroupFromStenciledList 0x76c0ea4)
	void RemoveGroupFromStenciledList(struct FString& GroupIdentifier, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveGroupFromIndicatedList (Underlying native function: RemoveGroupFromIndicatedList 0x76c0ea4)
	void RemoveGroupFromIndicatedList(struct FString& GroupIdentifier, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveActorFromStenciledList (Underlying native function: RemoveActorFromStenciledList 0x70dc11c)
	void RemoveActorFromStenciledList(class AActor*& StenciledActor, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.RemoveActorFromIndicatedList (Underlying native function: RemoveActorFromIndicatedList 0x70dc11c)
	void RemoveActorFromIndicatedList(class AActor*& IndicatedActor, bool& bIncludeSquad); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.OnHardCoreBeaconPlayerPawnPossessed (Underlying native function: OnHardCoreBeaconPlayerPawnPossessed 0x71a663c)
	void OnHardCoreBeaconPlayerPawnPossessed(class APawn*& PossessedPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.OnHardCoreBeaconPlayerPawnDied (Underlying native function: OnHardCoreBeaconPlayerPawnDied 0x86d0798)
	void OnHardCoreBeaconPlayerPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.AddActorsToStenciledList (Underlying native function: AddActorsToStenciledList 0x86cf074)
	void AddActorsToStenciledList(struct TArray<class AActor*>& StenciledActors, struct FStenciledActorData& Data, bool& bAddAsUnique, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry); // (Final | 0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_IndicatedActorManagement.AddActorsToIndicatedList (Underlying native function: AddActorsToIndicatedList 0x86cee68)
	void AddActorsToIndicatedList(struct TArray<class AActor*>& IndicatedActors, struct FIndicatedActorData& Data, bool& bAddAsUnique, bool& bAllowOwningPlayer, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry); // (Final | 0x00000002 | Native | Public | HasOutParms)
};

