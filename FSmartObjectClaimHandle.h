// ScriptStruct /Script/SmartObjectsModule.SmartObjectClaimHandle
// Size: 0x10
struct FSmartObjectClaimHandle
{
	struct FSmartObjectHandle SmartObjectHandle; // 0x0 (0x4)
	struct FSmartObjectSlotHandle* SlotHandle; // 0x4 (0x8)
	struct FSmartObjectUserHandle UserHandle; // 0xc (0x4)
};

