// ScriptStruct /Script/ChaosCaching.BreakingEvent
// Size: 0x90
struct FBreakingEvent : FCacheEventBase
{
	int Index; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector Location; // 0x10 (0x18)
	struct FVector Velocity; // 0x28 (0x18)
	struct FVector AngularVelocity; // 0x40 (0x18)
	float Mass; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FVector BoundingBoxMin; // 0x60 (0x18)
	struct FVector BoundingBoxMax; // 0x78 (0x18)
};

