// ScriptStruct /Script/ControlRig.RigUnit_SphereTraceWorld
// Size: 0x78
struct FRigUnit_SphereTraceWorld : FRigUnit
{
	struct FVector Start; // 0x8 (0x18)
	struct FVector End; // 0x20 (0x18)
	struct TEnumAsByte<ECollisionChannel> Channel; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float Radius; // 0x3c (0x4)
	bool bHit; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FVector HitLocation; // 0x48 (0x18)
	struct FVector HitNormal; // 0x60 (0x18)
};

