// Class /Script/FortniteGame.FortConversationTaskNode_Speech
// Size: 0x238
class UFortConversationTaskNode_Speech : public UFortConversationTaskNode
{
	bool bUseInlineConfig; // 0x1a0 (0x1)
	bool bUsePerNPCContextualMessageLookup; // 0x1a1 (0x1)
	bool bLookupViaServiceProviderTag; // 0x1a2 (0x1)
	unsigned char unreflected_1a3[0x5]; // 0x1a3 (0x5) 
	class UContextualMessageConfigCollection* ExternalContextualMessageCollection; // 0x1a8 (0x8)
	struct TMap<struct FGameplayTag, struct FContextualMessageConfig> SpeakerEntryTagToConfig; // 0x1b0 (0x50)
	struct FContextualMessageConfig GeneralConfig; // 0x200 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortConversationTaskNode_Speech.ResolveMessageForContext (Underlying native function: ResolveMessageForContext 0x87260c8)
	bool ResolveMessageForContext(struct FGameplayTag& SpeakerParticipantTag, struct FConversationContext& ConversationContext, struct FContextualMessageQueryResult& outResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)
};

