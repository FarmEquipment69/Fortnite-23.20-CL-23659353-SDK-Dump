// ScriptStruct /Script/FortniteGame.ContextualMessageCandidate
// Size: 0x90
struct FContextualMessageCandidate
{
	struct FText message; // 0x0 (0x18)
	enum EContextRequirementMatchPolicy RequirementMatchPolicy; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<struct FFortConversationContextRequirement> ContextRequirements; // 0x20 (0x10)
	struct FScalableFloat Priority; // 0x30 (0x28)
	struct FScalableFloat Weight; // 0x58 (0x28)
	struct TArray<struct FConversationNodeParameterPair> MetadataParameters; // 0x80 (0x10)
};

