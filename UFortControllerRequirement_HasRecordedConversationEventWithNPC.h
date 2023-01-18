// Class /Script/FortniteGame.FortControllerRequirement_HasRecordedConversationEventWithNPC
// Size: 0x40
class UFortControllerRequirement_HasRecordedConversationEventWithNPC : public UFortControllerRequirement
{
	struct FGameplayTag QueryEventTag; // 0x30 (0x4)
	bool bRequireExactEventTagMatch; // 0x34 (0x1)
	enum EConversationEventQueryMethod QueryMethod; // 0x35 (0x1)
	unsigned char unreflected_36[0x2]; // 0x36 (0x2) 
	struct FGameplayTag ConversationEntryTag; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

