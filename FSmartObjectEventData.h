// ScriptStruct /Script/SmartObjectsModule.SmartObjectEventData
// Size: 0x28
struct FSmartObjectEventData
{
	struct FSmartObjectHandle SmartObjectHandle; // 0x0 (0x4)
	struct FSmartObjectSlotHandle* SlotHandle; // 0x4 (0x8)
	enum ESmartObjectChangeReason Reason; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FGameplayTag tag; // 0x10 (0x4)
	unsigned char padding_14[0x14]; // 0x14 (0x14)
};

