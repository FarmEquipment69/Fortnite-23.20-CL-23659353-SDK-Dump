// ScriptStruct /Script/Engine.CustomChannelSetup
// Size: 0x8
struct FCustomChannelSetup
{
	struct TEnumAsByte<ECollisionChannel> Channel; // 0x0 (0x1)
	struct TEnumAsByte<ECollisionResponse> DefaultResponse; // 0x1 (0x1)
	bool bTraceType; // 0x2 (0x1)
	bool bStaticObject; // 0x3 (0x1)
	struct FName Name; // 0x4 (0x4)
};

