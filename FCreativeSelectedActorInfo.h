// ScriptStruct /Script/FortniteGame.CreativeSelectedActorInfo
// Size: 0xb0
struct FCreativeSelectedActorInfo
{
	class AActor* Actor; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform UnscaledActorToSelectionAtDragStart; // 0x10 (0x60)
	struct FVector ScaleAtDragStart; // 0x70 (0x18)
	struct FVector DragStartGridSnapPoint; // 0x88 (0x18)
	float OriginalRelevancyDistance; // 0xa0 (0x4)
	bool bWasCollisionEnabled; // 0xa4 (0x1)
	bool bWasDormant; // 0xa5 (0x1)
	bool bSpawnedFromSaveRecord; // 0xa6 (0x1)
	unsigned char unreflected_a7[0x1]; // 0xa7 (0x1) 
	int LogicalConnectionChainIndex; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

