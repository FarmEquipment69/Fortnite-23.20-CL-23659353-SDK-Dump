// ScriptStruct /Script/Procedural.ProceduralHitPoint
// Size: 0x40
struct FProceduralHitPoint
{
	bool bIsTraceDone; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector Position; // 0x8 (0x18)
	struct FVector Normal; // 0x20 (0x18)
	struct TWeakObjectPtr<class UPrimitiveComponent> Component; // 0x38 (0x8)
};

