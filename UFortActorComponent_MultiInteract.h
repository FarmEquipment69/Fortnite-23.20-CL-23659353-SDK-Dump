// Class /Script/FortniteGame.FortActorComponent_MultiInteract
// Size: 0x158
class UFortActorComponent_MultiInteract : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate ActorCountChangedDelegate; // 0xa0 (0x10)
	int InteractingPlayerCount; // 0xb0 (0x4)
	struct FMultiInteractServerTimeData* ServerInteractionData; // 0xb4 (0x8)
	bool bOnlyUpdateForLocalInteractingPlayer; // 0xbc (0x1)
	unsigned char unreflected_bd[0xb]; // 0xbd (0xb) 
	struct FScalableFloat MultiInteractMultiplier; // 0xc8 (0x28)
	struct FScalableFloat MaxInteractingActorCount; // 0xf0 (0x28)
	struct TArray<class AFortPlayerStateAthena*> InteractingPlayers; // 0x118 (0x10)
	struct TArray<class AActor*> InteractingNonPlayerActors; // 0x128 (0x10)
	int InteractingNonPlayerActorCount; // 0x138 (0x4)
	unsigned char unreflected_13c[0x4]; // 0x13c (0x4) 
	struct TArray<class AFortPlayerStateAthena*> PreviousInteractingPlayers; // 0x140 (0x10)
	unsigned char padding_150[0x8]; // 0x150 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.UpdateForPlayerJustLeftInteraction (Has no native function)
	void UpdateForPlayerJustLeftInteraction(class AFortPlayerStateAthena*& LeftPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.UpdateForPlayerJustJoinedInteraction (Has no native function)
	void UpdateForPlayerJustJoinedInteraction(class AFortPlayerStateAthena*& JoinedPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.RemoveInteractingActor (Underlying native function: RemoveInteractingActor 0x71a663c)
	void RemoveInteractingActor(class AActor*& InteractingActorToRemove); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.OnRep_ServerInteractionData (Underlying native function: OnRep_ServerInteractionData 0x24d5690)
	void OnRepServerInteractionData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.OnRep_InteractingPlayers (Underlying native function: OnRep_InteractingPlayers 0x242f850)
	void OnRepInteractingPlayers(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.OnRep_InteractingNonPlayerActorCount (Underlying native function: OnRep_InteractingNonPlayerActorCount 0x86b5dd8)
	void OnRepInteractingNonPlayerActorCount(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.IsMultipleInteractionEnabled (Underlying native function: IsMultipleInteractionEnabled 0x86b5b64)
	bool IsMultipleInteractionEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.HasMaxInteractingActors (Underlying native function: HasMaxInteractingActors 0x86b5a8c)
	bool HasMaxInteractingActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.HandleInteractingActorDestroyed (Underlying native function: HandleInteractingActorDestroyed 0x71a663c)
	void HandleInteractingActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.GetServerInteractionDuration (Underlying native function: GetServerInteractionDuration 0x86b5958)
	float GetServerInteractionDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.GetMultiplier (Underlying native function: GetMultiplier 0x86b55f0)
	float GetMultiplier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.GetInteractionDuration (Underlying native function: GetInteractionDuration 0x2a66ad0)
	float GetInteractionDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.GetInteractingActorCount (Underlying native function: GetInteractingActorCount 0x242f9e4)
	int GetInteractingActorCount(bool& bIncludePlayers, bool& bIncludeNonPlayers); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorComponent_MultiInteract.AddInteractingActor (Underlying native function: AddInteractingActor 0x71a663c)
	void AddInteractingActor(class AActor*& InteractingActorToAdd); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

