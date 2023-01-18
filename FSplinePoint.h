// ScriptStruct /Script/Engine.SplinePoint
// Size: 0x88
struct FSplinePoint
{
	float InputKey; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Position; // 0x8 (0x18)
	struct FVector ArriveTangent; // 0x20 (0x18)
	struct FVector LeaveTangent; // 0x38 (0x18)
	struct FRotator Rotation; // 0x50 (0x18)
	struct FVector Scale; // 0x68 (0x18)
	struct TEnumAsByte<ESplinePointType> Type; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

