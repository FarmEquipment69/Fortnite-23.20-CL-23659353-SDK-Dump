// Class /Script/FortniteUI.InfiltrationStatusWidget
// Size: 0x470
class UInfiltrationStatusWidget : public ULTMWidgetBase
{
	struct FInfiltrationModeState PrevModeState; // 0x328 (0x30)
	struct TArray<class UInfiltrationIntelStatusWidget*> IntelStatusWidgets; // 0x358 (0x10)
	struct TMap<enum EIntelStateEnum, class USoundBase*> AttackerAudioCues; // 0x368 (0x50)
	struct TMap<enum EIntelStateEnum, class USoundBase*> DefenderAudioCues; // 0x3b8 (0x50)
	struct TMap<enum EIntelStateEnum, class USoundBase*> SpamSounds; // 0x408 (0x50)
	float SpamThrottle; // 0x458 (0x4)
	unsigned char padding_45c[0x14]; // 0x45c (0x14)

	/* Functions */

	// Function /Script/FortniteUI.InfiltrationStatusWidget.IsLocalPlayerDefending (Underlying native function: IsLocalPlayerDefending 0xa57e63c)
	bool IsLocalPlayerDefending(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.IsLocalPlayerAttacking (Underlying native function: IsLocalPlayerAttacking 0xa57e53c)
	bool IsLocalPlayerAttacking(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.IsCurrentlyADraw (Underlying native function: IsCurrentlyADraw 0xa57e4a4)
	bool IsCurrentlyADraw(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.GetSoundFromIntelState (Underlying native function: GetSoundFromIntelState 0xa57cfdc)
	class USoundBase* GetSoundFromIntelState(enum EIntelStateEnum& InState, bool& bIsDefender); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.GetNumOfRounds (Underlying native function: GetNumOfRounds 0xa57cdbc)
	int GetNumOfRounds(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.GetDefendingTeam (Underlying native function: GetDefendingTeam 0xa57cbd4)
	unsigned char GetDefendingTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.GetCurrentRound (Underlying native function: GetCurrentRound 0xa57cac0)
	int GetCurrentRound(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationStatusWidget.GetAttackingTeam (Underlying native function: GetAttackingTeam 0xa57c7e4)
	unsigned char GetAttackingTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

