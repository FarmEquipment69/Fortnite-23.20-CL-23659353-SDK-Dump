// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
// Size: 0x40
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition
{
	struct FGameplayTag ParticipantID; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FSoftObjectPath> AllowedCIDs; // 0x30 (0x10)
};

