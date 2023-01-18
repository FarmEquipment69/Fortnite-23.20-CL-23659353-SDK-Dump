// Class /Script/Curie.CurieElementAttachHandler
// Size: 0x60
class UCurieElementAttachHandler : public UCurieElementGameplayEffectOwner
{
	enum ECurieHandlerPriority HandlerPriority; // 0x28 (0x1)
	enum ECurieHandlerBehavior HandlerBehavior; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FGameplayTag ElementTag; // 0x2c (0x4)
	struct TArray<struct FCurieEffectContainer> OnBeginAttachmentEffects; // 0x30 (0x10)
	struct TArray<struct FCurieEffectContainer> OngoingAttachmentEffects; // 0x40 (0x10)
	struct TArray<struct FCurieEffectContainer> OnEndAttachmentEffects; // 0x50 (0x10)
};

