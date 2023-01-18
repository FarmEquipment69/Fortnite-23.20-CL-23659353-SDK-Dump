// Class /Script/FortniteGame.FortGameplayCueNotifyAthena_AIAlertState
// Size: 0x9f0
class AFortGameplayCueNotifyAthena_AIAlertState : public AFortGameplayCueNotify_Loop
{
	class UStaticMeshComponent* SpriteMeshComponent; // 0x960 (0x8)
	struct FName SpriteMeshAttachSocketName; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	struct FTransform SpriteMeshRelativeTransform; // 0x970 (0x60)
	int FillIconDataFloatIndex; // 0x9d0 (0x4)
	float StealthMeterStartValue; // 0x9d4 (0x4)
	int CurrentGameplayEffectLevel; // 0x9d8 (0x4)
	float CurrentStealthMeterPctFilled; // 0x9dc (0x4)
	class UFortAthenaAlertStateComponent* CurrentAlertStateComponent; // 0x9e0 (0x8)
	unsigned char padding_9e8[0x8]; // 0x9e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotifyAthena_AIAlertState.OnTeamChanged (Underlying native function: OnTeamChanged 0x8266c20)
	void OnTeamChanged(unsigned char& OldTeam); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayCueNotifyAthena_AIAlertState.HandleAbilitySystemComponentInitialized (Underlying native function: HandleAbilitySystemComponentInitialized 0x826556c)
	void HandleAbilitySystemComponentInitialized(class UFortAbilitySystemComponent*& AbilitySystemComponent, class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayCueNotifyAthena_AIAlertState.AlertStateHideTagCallback (Underlying native function: AlertStateHideTagCallback 0x8264930)
	void AlertStateHideTagCallback(struct FGameplayTag& tag, int& NewCount); // (Final | Native | Private)
};

