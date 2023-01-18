// ScriptStruct /Script/ChaosCaching.TrailingEvent
// Size: 0x88
struct FTrailingEvent : FCacheEventBase
{
	int Index; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector Location; // 0x10 (0x18)
	struct FVector Velocity; // 0x28 (0x18)
	struct FVector AngularVelocity; // 0x40 (0x18)
	struct FVector BoundingBoxMin; // 0x58 (0x18)
	struct FVector BoundingBoxMax; // 0x70 (0x18)
};

