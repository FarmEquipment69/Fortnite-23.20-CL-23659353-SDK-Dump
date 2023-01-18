// ScriptStruct /Script/Engine.HitResult
// Size: 0xe0
struct FHitResult
{
	int FaceIndex; // 0x0 (0x4)
	float Time; // 0x4 (0x4)
	float Distance; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector_NetQuantize Location; // 0x10 (0x18)
	struct FVector_NetQuantize ImpactPoint; // 0x28 (0x18)
	struct FVector_NetQuantizeNormal Normal; // 0x40 (0x18)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x58 (0x18)
	struct FVector_NetQuantize TraceStart; // 0x70 (0x18)
	struct FVector_NetQuantize TraceEnd; // 0x88 (0x18)
	float PenetrationDepth; // 0xa0 (0x4)
	int MyItem; // 0xa4 (0x4)
	int Item; // 0xa8 (0x4)
	unsigned char ElementIndex; // 0xac (0x1)
	unsigned char bBlockingHit; // 0xad (0x1)
	unsigned char bStartPenetrating; // 0xad (0x1)
	unsigned char unreflected_ae[0x2]; // 0xae (0x2) 
	struct TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial; // 0xb0 (0x8)
	struct FActorInstanceHandle HitObjectHandle; // 0xb8 (0x18)
	struct TWeakObjectPtr<class UPrimitiveComponent> Component; // 0xd0 (0x8)
	struct FName BoneName; // 0xd8 (0x4)
	struct FName MyBoneName; // 0xdc (0x4)
};

