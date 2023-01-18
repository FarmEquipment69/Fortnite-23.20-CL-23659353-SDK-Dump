// Class /Script/FortniteGame.FortGameplayMessageDispatcherComponent
// Size: 0x270
class UFortGameplayMessageDispatcherComponent : public UActorComponent
{
	int NumBoundReceivers; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct TMap<struct FGameplayTag, struct FFortGameplayMessageReceiverList> ReceiverChannelList; // 0xa8 (0x50)
	int NumBoundTriggers; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TMap<struct FGameplayTag, struct FFortGameplayMessageTriggerList> TriggersChannelList; // 0x100 (0x50)
	struct TArray<struct FFortTriggeredGameplayMessage> EnqueuedMessages; // 0x150 (0x10)
	struct FFortTriggeredGameplayMessage ActiveMessage; // 0x160 (0x18)
	struct FFortGameplayMessageReceiverList ActiveMessageReceivers; // 0x178 (0x10)
	unsigned char unreflected_188[0x28]; // 0x188 (0x28) 
	struct TSet<class UFortGameplayReceiverMessageComponent*> KnownReceivers; // 0x1b0 (0x50)
	unsigned char padding_200[0x70]; // 0x200 (0x70)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayMessageDispatcherComponent.OnVolumeStateChanged (Underlying native function: OnVolumeStateChanged 0x87d20d0)
	void OnVolumeStateChanged(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | Native | Private | HasOutParms)
};

