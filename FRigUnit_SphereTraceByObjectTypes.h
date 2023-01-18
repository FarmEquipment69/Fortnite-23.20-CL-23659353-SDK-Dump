// ScriptStruct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
// Size: 0x80
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit
{
	struct FVector Start; // 0x8 (0x18)
	struct FVector End; // 0x20 (0x18)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> ObjectTypes; // 0x38 (0x10)
	float Radius; // 0x48 (0x4)
	bool bHit; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct FVector HitLocation; // 0x50 (0x18)
	struct FVector HitNormal; // 0x68 (0x18)
};

