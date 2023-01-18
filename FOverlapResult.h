// ScriptStruct /Script/Engine.OverlapResult
// Size: 0x28
struct FOverlapResult
{
	struct FActorInstanceHandle OverlapObjectHandle; // 0x0 (0x18)
	struct TWeakObjectPtr<class UPrimitiveComponent> Component; // 0x18 (0x8)
	unsigned char unreflected_20[0x4]; // 0x20 (0x4) 
	unsigned char bBlockingHit; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

