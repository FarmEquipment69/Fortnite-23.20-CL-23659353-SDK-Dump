// Class /Script/FortniteUI.AthenaEventMatchTeamWidgetBase
// Size: 0x2f0
class UAthenaEventMatchTeamWidgetBase : public UCommonUserWidget
{
	struct TArray<class UAthenaEventMatchPlayerWidgetBase*> PlayerWidgets; // 0x290 (0x10)
	unsigned char SquadId; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	struct FLinearColor TeamColor; // 0x2a4 (0x10)
	int MaxTeamSize; // 0x2b4 (0x4)
	class UClass* PlayerWidgetClass; // 0x2b8 (0x8)
	unsigned char unreflected_2c0[0x18]; // 0x2c0 (0x18) 
	struct TArray<struct TWeakObjectPtr<class UAthenaRemotePlayerViewData>> PlayerDatas; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x8]; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchTeamWidgetBase.OnPlayerWidgetAdded (Has no native function)
	void OnPlayerWidgetAdded(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchTeamWidgetBase.OnPlayerDisconnectedChanged (Underlying native function: OnPlayerDisconnectedChanged 0x22ba130)
	void OnPlayerDisconnectedChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsDisconnected); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaEventMatchTeamWidgetBase.OnPlayerDeadStateChanged (Underlying native function: OnPlayerDeadStateChanged 0x22ba224)
	void OnPlayerDeadStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsDead); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaEventMatchTeamWidgetBase.IsTeamDead (Underlying native function: IsTeamDead 0xa5bb294)
	bool IsTeamDead(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaEventMatchTeamWidgetBase.GetTeamKills (Underlying native function: GetTeamKills 0xa5b9680)
	int GetTeamKills(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

