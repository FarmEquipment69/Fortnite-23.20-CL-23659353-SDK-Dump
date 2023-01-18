// ScriptStruct /Script/CustomizableObject.CustomizableInstanceComponentData
// Size: 0xb8
struct FCustomizableInstanceComponentData
{
	struct TMap<int, struct TWeakObjectPtr<class UClass>> AnimSlotToBP; // 0x8 (0x50)
	struct FReferencedSkeletons Skeletons; // 0x58 (0x20)
	struct FReferencedPhysicsAssets PhysicsAssets; // 0x78 (0x20)
	unsigned char padding_98[0x20]; // 0x98 (0x20)
};

