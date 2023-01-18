// Class /Script/Engine.CheatManager
// Size: 0x88
class UCheatManager : public UObject
{
	class ADebugCameraController* DebugCameraControllerRef; // 0x28 (0x8)
	class UClass* DebugCameraControllerClass; // 0x30 (0x8)
	unsigned char unreflected_38[0x40]; // 0x38 (0x40) 
	struct TArray<class UCheatManagerExtension*> CheatManagerExtensions; // 0x78 (0x10)

	/* Functions */

	// Function /Script/Engine.CheatManager.Walk (Underlying native function: Walk 0x134bfb4)
	void Walk(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.ViewSelf (Underlying native function: ViewSelf 0x9cc07d4)
	void ViewSelf(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ViewPlayer (Underlying native function: ViewPlayer 0x9cc067c)
	void ViewPlayer(struct FString& S); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ViewClass (Underlying native function: ViewClass 0x9cc05f8)
	void ViewClass(class UClass*& DesiredClass); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ViewActor (Underlying native function: ViewActor 0x9cc0574)
	void ViewActor(struct FName& ActorName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.UpdateSafeArea (Underlying native function: UpdateSafeArea 0x9cc0558)
	void UpdateSafeArea(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet (Underlying native function: ToggleServerStatReplicatorUpdateStatNet 0x9cc0510)
	void ToggleServerStatReplicatorUpdateStatNet(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite (Underlying native function: ToggleServerStatReplicatorClientOverwrite 0x9cc04c8)
	void ToggleServerStatReplicatorClientOverwrite(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleDebugCamera (Underlying native function: ToggleDebugCamera 0x9cc04b0)
	void ToggleDebugCamera(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ToggleAILogging (Underlying native function: ToggleAILogging 0x9cc0498)
	void ToggleAILogging(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.TestCollisionDistance (Underlying native function: TestCollisionDistance 0x6e180a8)
	void TestCollisionDistance(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.Teleport (Underlying native function: Teleport 0x28b2a48)
	void Teleport(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.Summon (Underlying native function: Summon 0x9cc0340)
	void Summon(struct FString& ClassName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.StreamLevelOut (Underlying native function: StreamLevelOut 0x9cc02bc)
	void StreamLevelOut(struct FName& PackageName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.StreamLevelIn (Underlying native function: StreamLevelIn 0x9cc0238)
	void StreamLevelIn(struct FName& PackageName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.SpawnServerStatReplicator (Underlying native function: SpawnServerStatReplicator 0x9cbff58)
	void SpawnServerStatReplicator(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.Slomo (Underlying native function: Slomo 0x7203c38)
	void Slomo(float& NewTimeDilation); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.SetWorldOrigin (Underlying native function: SetWorldOrigin 0x9cbff44)
	void SetWorldOrigin(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.SetMouseSensitivityToDefault (Underlying native function: SetMouseSensitivityToDefault 0x9cbfea8)
	void SetMouseSensitivityToDefault(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ServerToggleAILogging (Underlying native function: ServerToggleAILogging 0x9cbfe5c)
	void ServerToggleAILogging(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.CheatManager.ReceiveInitCheatManager (Has no native function)
	void ReceiveInitCheatManager(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.CheatManager.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.CheatManager.PlayersOnly (Underlying native function: PlayersOnly 0x9cbe79c)
	void PlayersOnly(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.OnPlayerEndPlayed (Underlying native function: OnPlayerEndPlayed 0x9cbe54c)
	void OnPlayerEndPlayed(class AActor*& Player, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/Engine.CheatManager.OnlyLoadLevel (Underlying native function: OnlyLoadLevel 0x9cbe610)
	void OnlyLoadLevel(struct FName& PackageName); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.LogLoc (Underlying native function: LogLoc 0x9cbe534)
	void LogLoc(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.InvertMouse (Underlying native function: InvertMouse 0x6ae83e0)
	void InvertMouse(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.God (Underlying native function: God 0x6b14184)
	void God(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.Ghost (Underlying native function: Ghost 0x6adf948)
	void Ghost(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.GetPlayerController (Underlying native function: GetPlayerController 0x9cbe220)
	class APlayerController* GetPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CheatManager.FreezeFrame (Underlying native function: FreezeFrame 0x735d47c)
	void FreezeFrame(float& Delay); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.Fly (Underlying native function: Fly 0x743b798)
	void Fly(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.FlushLog (Underlying native function: FlushLog 0x9cbe0ec)
	void FlushLog(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.EnableDebugCamera (Underlying native function: EnableDebugCamera 0x6ae517c)
	void EnableDebugCamera(); // (Native | Protected | BlueprintCallable)

	// Function /Script/Engine.CheatManager.DumpVoiceMutingState (Underlying native function: DumpVoiceMutingState 0x721ce64)
	void DumpVoiceMutingState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DumpPartyState (Underlying native function: DumpPartyState 0x721ce7c)
	void DumpPartyState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DumpOnlineSessionState (Underlying native function: DumpOnlineSessionState 0x721cec0)
	void DumpOnlineSessionState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DumpChatState (Underlying native function: DumpChatState 0x721d17c)
	void DumpChatState(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DisableDebugCamera (Underlying native function: DisableDebugCamera 0x9cbe0d4)
	void DisableDebugCamera(); // (Native | Protected | BlueprintCallable)

	// Function /Script/Engine.CheatManager.DestroyTarget (Underlying native function: DestroyTarget 0x9cbe0bc)
	void DestroyTarget(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.DestroyServerStatReplicator (Underlying native function: DestroyServerStatReplicator 0x9cbe0a8)
	void DestroyServerStatReplicator(); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DestroyPawns (Underlying native function: DestroyPawns 0x9cbe024)
	void DestroyPawns(class UClass*& aClass); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DestroyAllPawnsExceptTarget (Underlying native function: DestroyAllPawnsExceptTarget 0x814132c)
	void DestroyAllPawnsExceptTarget(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DestroyAll (Underlying native function: DestroyAll 0x9cbdfa0)
	void DestroyAll(class UClass*& aClass); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepSize (Underlying native function: DebugCapsuleSweepSize 0x9cbded8)
	void DebugCapsuleSweepSize(float& HalfHeight, float& Radius); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepPawn (Underlying native function: DebugCapsuleSweepPawn 0x721ce4c)
	void DebugCapsuleSweepPawn(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepComplex (Underlying native function: DebugCapsuleSweepComplex 0x89ead14)
	void DebugCapsuleSweepComplex(bool& bTraceComplex); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepClear (Underlying native function: DebugCapsuleSweepClear 0x721cf5c)
	void DebugCapsuleSweepClear(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepChannel (Underlying native function: DebugCapsuleSweepChannel 0x9cbde54)
	void DebugCapsuleSweepChannel(struct TEnumAsByte<ECollisionChannel>& Channel); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweepCapture (Underlying native function: DebugCapsuleSweepCapture 0x9cbde3c)
	void DebugCapsuleSweepCapture(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DebugCapsuleSweep (Underlying native function: DebugCapsuleSweep 0x9cbde24)
	void DebugCapsuleSweep(); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.DamageTarget (Underlying native function: DamageTarget 0x9cbdd9c)
	void DamageTarget(float& DamageAmount); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.CheatScript (Underlying native function: CheatScript 0x9cbcc70)
	void CheatScript(struct FString& ScriptName); // (Final | Exec | Native | Public)

	// Function /Script/Engine.CheatManager.ChangeSize (Underlying native function: ChangeSize 0x9bb5e58)
	void ChangeSize(float& F); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CheatManager.BugItStringCreator (Underlying native function: BugItStringCreator 0x9cbc7e8)
	void BugItStringCreator(struct FVector& ViewLocation, struct FRotator& ViewRotation, struct FString& GoString, struct FString& LocString); // (Exec | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/Engine.CheatManager.BugItGo (Underlying native function: BugItGo 0x9cbc614)
	void BugItGo(float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (Exec | Native | Public)

	// Function /Script/Engine.CheatManager.BugIt (Underlying native function: BugIt 0x9cbc4bc)
	void BugIt(struct FString& ScreenShotDescription); // (Exec | Native | Public)
};

