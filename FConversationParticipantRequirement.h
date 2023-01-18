// ScriptStruct /Script/FortniteGame.ConversationParticipantRequirement
// Size: 0x28
struct FConversationParticipantRequirement
{
	struct FGameplayTag ParticipantID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UFortControllerRequirement* Requirement; // 0x8 (0x8)
	enum EConversationRequirementResult FailureNodeBehaviour; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FString CannotUseReasonParameter; // 0x18 (0x10)
};

