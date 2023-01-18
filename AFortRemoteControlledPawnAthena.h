// Class /Script/FortniteGame.FortRemoteControlledPawnAthena
// Size: 0x52e0
class AFortRemoteControlledPawnAthena : public AFortPlayerPawnAthena
{
	bool bCurrentlyDelayingLaunch; // 0x5260 (0x1)
	unsigned char unreflected_5261[0x3]; // 0x5261 (0x3) 
	float ServerFuseStartTime; // 0x5264 (0x4)
	unsigned char RCTeam; // 0x5268 (0x1)
	unsigned char unreflected_5269[0x3]; // 0x5269 (0x3) 
	struct TWeakObjectPtr<class AFortPlayerPawnAthena> ControllingPlayerPawn; // 0x526c (0x8)
	struct TWeakObjectPtr<class AFortPlayerPawnAthena> SpectateReturnPlayerPawn; // 0x5274 (0x8)
	unsigned char unreflected_527c[0x4]; // 0x527c (0x4) 
	class UFortAbilitySystemComponent* OverrideAbilitySystemComponent; // 0x5280 (0x8)
	float TriggeredHealthThreshold; // 0x5288 (0x4)
	unsigned char unreflected_528c[0x4]; // 0x528c (0x4) 
	struct TArray<struct FFortGameplayEffectContainerSpec> EffectContainerSpecToApplyOnKills; // 0x5290 (0x10)
	class UFortRemoteControlPawnSet* RemoteControlPawnSet; // 0x52a0 (0x8)
	bool bTriggeredForDestroy; // 0x52a8 (0x1)
	unsigned char unreflected_52a9[0x3]; // 0x52a9 (0x3) 
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x52ac (0x8)
	unsigned char unreflected_52b4[0x4]; // 0x52b4 (0x4) 
	class UClass* RemoteControlledPawnDefaultCameraClass; // 0x52b8 (0x8)
	class UClass* RemoteControlledPawnTriggeredCameraClass; // 0x52c0 (0x8)
	class UClass* ControllingPlayerEffect; // 0x52c8 (0x8)
	struct FActiveGameplayEffectHandle* ControllingPlayerEffectHandle; // 0x52d0 (0x8)
	bool bIsKeyboardTurnPressed; // 0x52d8 (0x1)
	bool bIsKeyboardLookPressed; // 0x52d9 (0x1)
	unsigned char padding_52da[0x6]; // 0x52da (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.TriggerDestroyRemoteControlPawn (Underlying native function: TriggerDestroyRemoteControlPawn 0x8e49f0c)
	void TriggerDestroyRemoteControlPawn(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.SetupRemoteControlPawn (Underlying native function: SetupRemoteControlPawn 0x8e49a18)
	void SetupRemoteControlPawn(class AFortPlayerControllerAthena*& InFortPC, class AFortPlayerPawnAthena*& InControllingPawn, struct TEnumAsByte<EFortCustomMovement>& CustomMovementType, struct TArray<struct FFortGameplayEffectContainerSpec>& EffectContainerSpecOnKill); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnTriggeredHealthThreshold (Underlying native function: OnTriggeredHealthThreshold 0x8e48844)
	void OnTriggeredHealthThreshold(float& PreviousTriggeredHealthThreshold, float& CurrentTriggeredHealthThreshold); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_TriggeredHealthThreshold (Underlying native function: OnRep_TriggeredHealthThreshold 0x8e485a4)
	void OnRepTriggeredHealthThreshold(float& PreviousTriggeredHealthThreshold); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_TriggeredForDestroy (Underlying native function: OnRep_TriggeredForDestroy 0x8e48580)
	void OnRepTriggeredForDestroy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_OverrideAbilitySystemComponent (Underlying native function: OnRep_OverrideAbilitySystemComponent 0x8e48344)
	void OnRepOverrideAbilitySystemComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnRep_ControllingPlayerPawn (Underlying native function: OnRep_ControllingPlayerPawn 0x8e482f4)
	void OnRepControllingPlayerPawn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnDoKill (Underlying native function: OnDoKill 0x8e48094)
	void OnDoKill(); // (BlueprintAuthorityOnly | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnClientSetupRemoteControlPawn (Underlying native function: OnClientSetupRemoteControlPawn 0x8e47ffc)
	void OnClientSetupRemoteControlPawn(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.OnCapsuleTouch (Underlying native function: OnCapsuleTouch 0x8e47e34)
	void OnCapsuleTouch(class UPrimitiveComponent*& HitComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.IsCurrentlyDelayingLaunch (Underlying native function: IsCurrentlyDelayingLaunch 0x8e47778)
	bool IsCurrentlyDelayingLaunch(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.HandleControllingPlayerOutOfHealth (Underlying native function: HandleControllingPlayerOutOfHealth 0x8e467e0)
	void HandleControllingPlayerOutOfHealth(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.GetOutOfHealthExplodeDelay (Underlying native function: GetOutOfHealthExplodeDelay 0x8e46384)
	float GetOutOfHealthExplodeDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.GetLaunchDelay (Underlying native function: GetLaunchDelay 0x8e46270)
	float GetLaunchDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.GetFuseLength (Underlying native function: GetFuseLength 0x8e46250)
	float GetFuseLength(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRemoteControlledPawnAthena.BeginCapsuleOverlap (Underlying native function: BeginCapsuleOverlap 0x832ec0c)
	void BeginCapsuleOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)
};

