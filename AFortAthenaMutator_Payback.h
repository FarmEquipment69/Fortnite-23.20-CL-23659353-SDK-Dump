// Class /Script/FortniteGame.FortAthenaMutator_Payback
// Size: 0x458
class AFortAthenaMutator_Payback : public AFortAthenaMutator
{
	class UClass* PaybackMarkerEffectClass; // 0x330 (0x8)
	struct FScalableFloat bEffectLastsUntilRespawn; // 0x338 (0x28)
	struct FScalableFloat DefaultEffectDuration; // 0x360 (0x28)
	struct FGameplayTag SetByCallerDurationTag; // 0x388 (0x4)
	struct FGameplayTag ShowPaybackHUDTag; // 0x38c (0x4)
	struct FScalableFloat bNewEffectPerKill; // 0x390 (0x28)
	struct FScalableFloat ExtraPointsPerPaybackKill; // 0x3b8 (0x28)
	struct FMulticastInlineDelegate OnPaybackKill; // 0x3e0 (0x10)
	struct TArray<struct FPaybackMutatorEffectData> PaybackEffectDataArray; // 0x3f0 (0x10)
	unsigned char padding_400[0x58]; // 0x400 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.OnDeadStateChanged (Underlying native function: OnDeadStateChanged 0x70dc11c)
	void OnDeadStateChanged(class AFortPlayerStateAthena*& VictimPlayerState, bool& bDead); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.NetMulticast_OnPaybackKill (Underlying native function: NetMulticast_OnPaybackKill 0x84ee3c4)
	void NetMulticastOnPaybackKill(class AFortPlayerStateAthena*& KillerPlayerState, class AFortPlayerStateAthena*& VictimPlayerState); // (Final | Net | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.IsMarkedForPaybackByTeam (Underlying native function: IsMarkedForPaybackByTeam 0x84ee180)
	bool IsMarkedForPaybackByTeam(class APlayerState*& PlayerState, unsigned char& Team); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.IsMarkedForPayback (Underlying native function: IsMarkedForPayback 0x84ee0f0)
	bool IsMarkedForPayback(class APlayerState*& PlayerState); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.GetTeamPlayersMarkedForPayback (Underlying native function: GetTeamPlayersMarkedForPayback 0x84edf2c)
	void GetTeamPlayersMarkedForPayback(struct TArray<class AFortPlayerStateAthena*>& OutPlayerStates, unsigned char& Team); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.GetPlayersToPayBack (Underlying native function: GetPlayersToPayBack 0x84edd4c)
	void GetPlayersToPayBack(struct TArray<class AFortPlayerStateAthena*>& OutPlayerStatesToPayBack, class APlayerState*& AttackerPlayerState); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.GetPaybackTimeRemaining (Underlying native function: GetPaybackTimeRemaining 0x84edbcc)
	float GetPaybackTimeRemaining(class APlayerState*& KillerPlayerState, unsigned char& VictimTeam); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.GetPaybackTeams (Underlying native function: GetPaybackTeams 0x84edadc)
	void GetPaybackTeams(struct TArray<unsigned char>& OutTeams, class APlayerState*& PlayerState); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.GetHighestPaybackTimeRemaining (Underlying native function: GetHighestPaybackTimeRemaining 0x84eda4c)
	float GetHighestPaybackTimeRemaining(class APlayerState*& KillerPlayerState); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Payback.GetAllPlayersMarkedForPayback (Underlying native function: GetAllPlayersMarkedForPayback 0x84ed818)
	void GetAllPlayersMarkedForPayback(struct TArray<class AFortPlayerStateAthena*>& OutPlayerStates); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

