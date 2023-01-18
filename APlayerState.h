// Class /Script/Engine.PlayerState
// Size: 0x3a0
class APlayerState : public AInfo
{
	float Score; // 0x288 (0x4)
	int PlayerId; // 0x28c (0x4)
	unsigned char CompressedPing; // 0x290 (0x1)
	unsigned char unreflected_291[0x1]; // 0x291 (0x1) 
	unsigned char bShouldUpdateReplicatedPing; // 0x292 (0x1)
	unsigned char bIsSpectator; // 0x292 (0x1)
	unsigned char bOnlySpectator; // 0x292 (0x1)
	unsigned char bIsABot; // 0x292 (0x1)
	unsigned char bIsInactive; // 0x292 (0x1)
	unsigned char bFromPreviousLevel; // 0x292 (0x1)
	unsigned char unreflected_293[0x1]; // 0x293 (0x1) 
	int StartTime; // 0x294 (0x4)
	class UClass* EngineMessageClass; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x8]; // 0x2a0 (0x8) 
	struct FString SavedNetworkAddress; // 0x2a8 (0x10)
	struct FUniqueNetIdRepl UniqueId; // 0x2b8 (0x30)
	unsigned char unreflected_2e8[0x8]; // 0x2e8 (0x8) 
	struct FMulticastInlineDelegate OnPawnSet; // 0x2f0 (0x10)
	class APawn* PawnPrivate; // 0x300 (0x8)
	unsigned char unreflected_308[0x78]; // 0x308 (0x78) 
	struct FString PlayerNamePrivate; // 0x380 (0x10)
	unsigned char padding_390[0x10]; // 0x390 (0x10)

	/* Functions */

	// Function /Script/Engine.PlayerState.ReceiveOverrideWith (Has no native function)
	void ReceiveOverrideWith(class APlayerState*& OldPlayerState); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.PlayerState.ReceiveCopyProperties (Has no native function)
	void ReceiveCopyProperties(class APlayerState*& NewPlayerState); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.PlayerState.OnRep_UniqueId (Underlying native function: OnRep_UniqueId 0x4866d04)
	void OnRepUniqueId(); // (Native | Public)

	// Function /Script/Engine.PlayerState.OnRep_Score (Underlying native function: OnRep_Score 0x23eff98)
	void OnRepScore(); // (Native | Public)

	// Function /Script/Engine.PlayerState.OnRep_PlayerName (Underlying native function: OnRep_PlayerName 0x22c0e58)
	void OnRepPlayerName(); // (Native | Public)

	// Function /Script/Engine.PlayerState.OnRep_PlayerID (Underlying native function: OnRep_PlayerID 0x2646488)
	void OnRepPlayerID(); // (Native | Public)

	// Function /Script/Engine.PlayerState.OnRep_bIsInactive (Underlying native function: OnRep_bIsInactive 0x8546790)
	void OnRepbIsInactive(); // (Native | Public)

	// Function /Script/Engine.PlayerState.OnPawnPrivateDestroyed (Underlying native function: OnPawnPrivateDestroyed 0x2383e18)
	void OnPawnPrivateDestroyed(class AActor*& InActor); // (Final | Native | Private)

	// Function /Script/Engine.PlayerState.IsSpectator (Underlying native function: IsSpectator 0x9f194b8)
	bool IsSpectator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.IsOnlyASpectator (Underlying native function: IsOnlyASpectator 0x9f1949c)
	bool IsOnlyASpectator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.IsABot (Underlying native function: IsABot 0x9f19480)
	bool IsABot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetScore (Underlying native function: GetScore 0x83915e4)
	float GetScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetPlayerName (Underlying native function: GetPlayerName 0x2690e14)
	struct FString GetPlayerName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetPlayerId (Underlying native function: GetPlayerId 0x9f19468)
	int GetPlayerId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetPlayerController (Underlying native function: GetPlayerController 0x9f19424)
	class APlayerController* GetPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetPingInMilliseconds (Underlying native function: GetPingInMilliseconds 0x9f19404)
	float GetPingInMilliseconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetPawn (Underlying native function: GetPawn 0x9f193ec)
	class APawn* GetPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.GetCompressedPing (Underlying native function: GetCompressedPing 0x8700490)
	unsigned char GetCompressedPing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerState.BP_GetUniqueId (Underlying native function: BP_GetUniqueId 0x8dde1d8)
	struct FUniqueNetIdRepl BPGetUniqueId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

