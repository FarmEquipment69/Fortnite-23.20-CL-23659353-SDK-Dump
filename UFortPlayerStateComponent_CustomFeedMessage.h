// Class /Script/FortniteGame.FortPlayerStateComponent_CustomFeedMessage
// Size: 0x108
class UFortPlayerStateComponent_CustomFeedMessage : public UFortPlayerStateComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TArray<struct TWeakObjectPtr<class UFortCustomFeedMessageConfig>> CustomFeedMessageConfigs; // 0xa8 (0x10)
	struct TMap<struct FGameplayTag, class UFortCustomFeedMessageGeneratorBase*> CustomFeedMessageGeneratorsInternal; // 0xb8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateComponent_CustomFeedMessage.HandleNetMulticastTriggerCustomFeedMessageWithContext (Underlying native function: HandleNetMulticastTriggerCustomFeedMessageWithContext 0x8700e64)
	void HandleNetMulticastTriggerCustomFeedMessageWithContext(struct FGameplayTag& CustomFeedMessageGeneratorID, struct FCustomFeedMessageContext& Context); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateComponent_CustomFeedMessage.HandleNetMulticastTriggerCustomFeedMessage (Underlying native function: HandleNetMulticastTriggerCustomFeedMessage 0x8700de4)
	void HandleNetMulticastTriggerCustomFeedMessage(struct FGameplayTag& CustomFeedMessageGeneratorID); // (Final | Native | Private)
};

