// Class /Script/Curie.CurieEntityStateBehavior
// Size: 0xc0
class UCurieEntityStateBehavior : public UCurieElementGameplayEffectOwner
{
	struct FGameplayTagContainer RequiredAttachedElements; // 0x28 (0x20)
	struct FGameplayTagContainer RequiredInteractingElements; // 0x48 (0x20)
	struct FGameplayTagContainer AllowedAttachmentEntityTypes; // 0x68 (0x20)
	struct TArray<struct FCurieEffectContainer> OnBeginEffects; // 0x88 (0x10)
	struct TArray<struct FCurieEffectContainer> OngoingEffects; // 0x98 (0x10)
	struct TArray<struct FCurieEffectContainer> OnEndEffects; // 0xa8 (0x10)
	unsigned char bShouldDetach; // 0xb8 (0x1)
	unsigned char bSkipExecuteAttachDetach; // 0xb8 (0x1)
	unsigned char padding_b9[0x7]; // 0xb9 (0x7)
};

