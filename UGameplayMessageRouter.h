// Class /Script/GameplayMessages.GameplayMessageRouter
// Size: 0xd8
class UGameplayMessageRouter : public UGameInstanceSubsystem
{
	unsigned char unreflected_30[0xa0]; // 0x30 (0xa0) 
	class AGameplayMessageReplicator* MessageReplicator; // 0xd0 (0x8)

	/* Functions */

	// Function /Script/GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage (Underlying native function: K2_BroadcastMessage 0x70a2a3c)
	void K2BroadcastMessage(struct FEventMessageTag& Channel, int& message, bool& bSaveToChannel, class AActor*& ActorContext); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayMessages.GameplayMessageRouter.HasValidSavedMessage (Underlying native function: HasValidSavedMessage 0x70a29b0)
	bool HasValidSavedMessage(struct FEventMessageTag& Channel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayMessages.GameplayMessageRouter.ClearSavedMessage (Underlying native function: ClearSavedMessage 0x70a2784)
	void ClearSavedMessage(struct FEventMessageTag& Channel); // (Final | Native | Public | BlueprintCallable)
};

