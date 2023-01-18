// ScriptStruct /Script/FortniteGame.ConversationGiftTypeDefinition
// Size: 0x70
struct FConversationGiftTypeDefinition
{
	enum EContextRequirementMatchPolicy ServiceProviderRequirementMatchPolicy; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<class UFortControllerRequirement*> ServiceProviderRequirements; // 0x8 (0x10)
	enum EContextRequirementMatchPolicy RequirementMatchPolicy; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<class UFortControllerRequirement*> Requirements; // 0x20 (0x10)
	struct TArray<class UFortControllerEffect*> Effects; // 0x30 (0x10)
	class UGiftUINotificationHandler* UINotificationType; // 0x40 (0x8)
	struct FScalableFloat OptionalSelectionCooldown; // 0x48 (0x28)
};

