// ScriptStruct /Script/FortniteGame.FortAimedObjectConfig
// Size: 0x40
struct FFortAimedObjectConfig
{
	struct FVector CameraOffset; // 0x0 (0x18)
	enum EIKType IKType; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float BlendStart; // 0x1c (0x4)
	float BlendTarget; // 0x20 (0x4)
	float BlendRate; // 0x24 (0x4)
	struct FName HeadBoneName; // 0x28 (0x4)
	struct FName AimedObjectBoneName; // 0x2c (0x4)
	struct FName CameraBoneName; // 0x30 (0x4)
	struct FName AimedObjectHandleBoneName; // 0x34 (0x4)
	bool bShouldUpdatePlayerVisibility; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

