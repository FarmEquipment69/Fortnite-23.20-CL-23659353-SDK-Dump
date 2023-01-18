// ScriptStruct /Script/Engine.ResponseChannel
// Size: 0x8
struct FResponseChannel
{
	struct FName Channel; // 0x0 (0x4)
	struct TEnumAsByte<ECollisionResponse> Response; // 0x4 (0x1)
	unsigned char padding_5[0x3]; // 0x5 (0x3)
};

