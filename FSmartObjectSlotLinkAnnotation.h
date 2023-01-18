// ScriptStruct /Script/SmartObjectsModule.SmartObjectSlotLinkAnnotation
// Size: 0x10
struct FSmartObjectSlotLinkAnnotation : FSmartObjectSlotAnnotation
{
	struct FGameplayTag tag; // 0x8 (0x4)
	struct FSmartObjectSlotReference LinkedSlot; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

